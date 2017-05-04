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
//IF
//----------------------------------------
reg [31:0] pc; //Program Counter
reg [31:0] pc_temp;
reg [31:0] pc_plus_four;

wire [31:0] inst;
wire [31:0] mem_write;
wire [31:0] ex_alu_result;
wire mem_write;
wire mem_read;

assign pc_plus_four = pc + 4;
cpumemory memory(
	.clk(clk),
   .rst(rst),
   .instr_read_address(pc[9:2]),
   .instr_instruction(inst), //Out
   .data_mem_write(mem_write), 
   .data_address(ex_alu_result[7:0]),    
   .data_write_data(mem_read),    
   .data_read_data(read_data)//Out
);

//----------------------------------------
//ID
//----------------------------------------
reg  [31:0] extended;
wire reg_dst;
wire mem_branch;

control_unit id_ctrl( 
	.instr_op(inst[31-:6]),
	.reg_dst(reg_dst),
	.branch(mem_branch),
	.mem_read(mem_read),
	.mem_to_reg(mem_to_reg),
	.alu_op(alu_op),
	.mem_write(mem_write),
	.alu_src(alu_src),
	.reg_write(reg_write)

);
mux_2_1 id_mux(
	.select_in(reg_dst),						//in
	.datain1(),
	.datain2(),
	.data_out()
);
assign extended[31:0] = { {16{inst[15]}}, ints[15:0] };

//----------------------------------------
//EX
//----------------------------------------
reg [31:0] ex_branch;

mux_2_1 ex_mux(
	.select_in(),						//in
	.datain1(),
	.datain2(),
	.data_out()

);
alu_control ex_alu_ctrl(
);
alu ex_alu(
	.alu_control_in(alu_out),
	.channel_a_in(ifex_read_data_1), 
	.channel_b_in(mux2_out),
	.zero_out(ex_alu_zero), 
	.alu_result_out(alu_result)
);

assign ex_branch = pc_plus_four + (extended << 2);


//----------------------------------------
//MEM
//----------------------------------------
reg mem_mux_branch;

assign mem_mux_branch = mem_branch &  ex_alu_zero;

mux_2_1 mem_mux_pc(
	.select_in(),						//in
	.datain1(pc_plus_four),
	.datain2(ex_branch),
	.data_out(pc_temp)

);

//----------------------------------------
//WB
//----------------------------------------



endmodule
