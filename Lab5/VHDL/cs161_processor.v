`timescale 1ns / 1ps

module cs161_processor(
	input wire clk,
	input wire rst,
	output wire [31:0] prog_count,
	output wire [5:0] instr_opcode,
	output wire [4:0] reg1_addr,
	output wire [31:0] reg1_data,
	output wire [4:0] reg2_addr,
	output wire [31:0] reg2_data,
	output wire [4:0] write_reg_addr,
	output wire [31:0] write_reg_data
);

//---------------------------------------- 
//  IF  
//----------------------------------------
wire [31:0] pc_plus_four;
wire [31:0] instruction;

wire ctrl_mem_write;
wire [31:0] alu_result;
wire [31:0] read_data_2;
wire [31:0] mem_read_data;
wire [31:0] branch_addr;

IF_stage IF(
	.clk(clk),
	.rst(rst),
	.pc_src(pc_src),
	.branch_addr(branch_addr),
	.pc_plus_four(pc_plus_four),
	.instruction(instruction),
	.pc(prog_count),
	
	.ctrl_mem_write(ctrl_mem_write),
	.alu_result(alu_result),
	.read_data_2(read_data_2),
	.mem_read_data(mem_read_data)
);

//----------------------------------------
//ID
//----------------------------------------
wire  [31:0] sign_extend;
wire [1:0] alu_op;
wire [31:0] wb_write_data;
wire [31:0] read_data_1;

	
ID_stage ID(
	.clk(clk),
	.rst(rst),
	.instruction(instruction),
	.write_data(wb_write_data),
	.write_reg_addr(write_reg_addr),
	
	.reg_dst(reg_dst),
	.branch(ctrl_branch),
	.mem_read(ctrl_mem_read),
	.mem_to_reg(ctrl_mem_to_reg),
	.alu_op(alu_op),
	.mem_write(ctrl_mem_write),
	.alu_src(alu_src),
	.reg_write(ctrl_reg_write),
	
	.read_data_1(read_data_1),
	.read_data_2(read_data_2),
	.sign_extend(sign_extend)
);

//----------------------------------------
//EX
//----------------------------------------
EX_stage EX(
	.clk(clk),
	.rst(rst),
	.pc_plus_four(pc_plus_four),
	.sign_extend(sign_extend),
	.read_data_1(read_data_1),
	.read_data_2(read_data_2),
	.alu_src(alu_src),
	.alu_op(alu_op),
	.instruction(instruction),
	.reg_dst(reg_dst),
	
	.branch_addr(branch_addr),
	.alu_zero(alu_zero),
	.alu_result(alu_result),
	.write_reg_addr(write_reg_addr)

);


//----------------------------------------
//MEM
//----------------------------------------
assign pc_src = ctrl_branch &  alu_zero;


//----------------------------------------
//WB
//----------------------------------------

mux_2_1 wb_mux(
	.select_in(ctrl_mem_to_reg),						//in
	.datain1(alu_result),
	.datain2(mem_read_data),
	.data_out(wb_write_data)
);


//----------------------------------------
// Other
//----------------------------------------
assign instr_opcode = instruction[31-:6];
assign reg1_addr = instruction[25:21];
assign reg1_data = read_data_1;
assign reg2_addr = instruction[20:16];
assign reg2_data = read_data_2;
assign write_reg_data = wb_write_data;


endmodule
