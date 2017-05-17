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

reg true = 1;

//---------------------------------------- 
//  IF  
//----------------------------------------
wire [31:0] pc_plus_four;
wire [31:0] instruction;
wire mem_write;
wire [31:0] alu_result;
wire [31:0] read_data_2;
wire [31:0] read_data;
wire [31:0] branch_addr;

IF_stage IF(
	.clk(clk),
	.rst(rst),
	.pc_src(pc_src),
	.branch_addr(branch_addr),
	.pc_plus_four(pc_plus_four),    //IF/ID
	.instruction(instruction),      //IF/ID
	.pc(prog_count),
	
	.mem_write(mem_write),
	.alu_result(alu_result),
	.read_data_2(read_data_2),
	.mem_read_data(read_data)
);


wire [31:0] ID_pc_plus_four;
wire [31:0] ID_instruction;
gen_register IFID_pc_plus_four(.clk(clk),.rst(rst),.write_en(true),.data_in(pc_plus_four),.data_out(ID_pc_plus_four));
gen_register IFID_instruction (.clk(clk),.rst(rst),.write_en(true),.data_in(instruction),.data_out(ID_instruction));

//----------------------------------------
//ID
//----------------------------------------
wire  [31:0] sign_extend;
wire [1:0] alu_op;
wire [31:0] WB_write_data;
wire [31:0] WB_read_data;
wire [4:0] WB_write_reg_addr;
wire [31:0] read_data_1;
	
ID_stage ID(
	.clk(clk),
	.rst(rst),
	.instruction(ID_instruction),
	.write_data(WB_write_data),
	.write_reg_addr(WB_write_reg_addr),
	.in_reg_write(WB_reg_write),
	
	.reg_dst(reg_dst),
	.branch(branch),
	.mem_read(mem_read),
	.mem_to_reg(mem_to_reg),
	.alu_op(alu_op),
	.mem_write(mem_write),
	.alu_src(alu_src),
	.reg_write(reg_write),
	
	.read_data_1(read_data_1),
	.read_data_2(read_data_2),
	.sign_extend(sign_extend)
);


wire [31:0] EX_pc_plus_four;
wire [31:0] EX_instruction;
wire [31:0] EX_read_data_1;
wire [31:0] EX_read_data_2;
wire [31:0] EX_sign_extend;
wire [1:0]  EX_alu_op;
gen_register IDEX_pc_plus_four(.clk(clk),.rst(rst),.write_en(true),.data_in(ID_pc_plus_four),.data_out(EX_pc_plus_four));
gen_register IDEX_instruction (.clk(clk),.rst(rst),.write_en(true),.data_in(ID_instruction),.data_out(EX_instruction));
gen_register #(1) IDEX_reg_dst(.clk(clk),.rst(rst),.write_en(true),.data_in(reg_dst),.data_out(EX_reg_dst));
gen_register #(1) IDEX_branch(.clk(clk),.rst(rst),.write_en(true),.data_in(branch),.data_out(EX_branch));
gen_register #(1) IDEX_mem_read(.clk(clk),.rst(rst),.write_en(true),.data_in(mem_read),.data_out(EX_mem_read));
gen_register #(1) IDEX_mem_to_reg(.clk(clk),.rst(rst),.write_en(true),.data_in(mem_to_reg),.data_out(EX_mem_to_reg));
gen_register #(2) IDEX_alu_op(.clk(clk),.rst(rst),.write_en(true),.data_in(alu_op),.data_out(EX_alu_op));
gen_register #(1) IDEX_mem_write(.clk(clk),.rst(rst),.write_en(true),.data_in(mem_write),.data_out(EX_mem_write));
gen_register #(1) IDEX_alu_src(.clk(clk),.rst(rst),.write_en(true),.data_in(alu_src),.data_out(EX_alu_src));
gen_register #(1) IDEX_reg_write(.clk(clk),.rst(rst),.write_en(true),.data_in(reg_write),.data_out(EX_reg_write));
gen_register IDEX_read_data_1(.clk(clk),.rst(rst),.write_en(true),.data_in(read_data_1),.data_out(EX_read_data_1));
gen_register IDEX_read_data_2(.clk(clk),.rst(rst),.write_en(true),.data_in(read_data_2),.data_out(EX_read_data_2));
gen_register IDEX_sign_extend(.clk(clk),.rst(rst),.write_en(true),.data_in(sign_extend),.data_out(EX_sign_extend));

//----------------------------------------
//EX
//----------------------------------------

EX_stage EX(
	.clk(clk),
	.rst(rst),
	.pc_plus_four(EX_pc_plus_four),
	.sign_extend(EX_sign_extend),
	.read_data_1(EX_read_data_1),
	.read_data_2(EX_read_data_2),
	.alu_src(EX_alu_src),
	.alu_op(EX_alu_op),
	.instruction(EX_instruction),
	.reg_dst(EX_reg_dst),
	
	.branch_addr(branch_addr),
	.alu_zero(alu_zero),
	.alu_result(alu_result),
	.write_reg_addr(write_reg_addr)
);


wire [31:0] MEM_branch_addr;
wire [31:0] MEM_alu_result;
wire [31:0] MEM_read_data_2;
wire [4:0] MEM_write_reg_addr;
gen_register EXMEM_branch_addr(.clk(clk),.rst(rst),.write_en(true),.data_in(branch_addr),.data_out(MEM_branch_addr));
gen_register #(1) EXMEM_alu_zero(.clk(clk),.rst(rst),.write_en(true),.data_in(alu_zero),.data_out(MEM_alu_zero));
gen_register EXMEM_alu_result(.clk(clk),.rst(rst),.write_en(true),.data_in(alu_result),.data_out(MEM_alu_result));
gen_register EXMEM_read_data_2(.clk(clk),.rst(rst),.write_en(true),.data_in(EX_read_data_2),.data_out(MEM_read_data_2));
gen_register #(5) EXMEM_write_reg_addr(.clk(clk),.rst(rst),.write_en(true),.data_in(write_reg_addr),.data_out(MEM_write_reg_addr));
gen_register #(1) EXMEM_branch(.clk(clk),.rst(rst),.write_en(true),.data_in(EX_branch),.data_out(MEM_branch));
gen_register #(1) EXMEM_reg_write(.clk(clk),.rst(rst),.write_en(true),.data_in(EX_reg_write),.data_out(MEM_reg_write));
gen_register #(1) EXMEM_mem_read(.clk(clk),.rst(rst),.write_en(true),.data_in(EX_mem_read),.data_out(MEM_mem_read));
gen_register #(1) EXMEM_mem_to_reg(.clk(clk),.rst(rst),.write_en(true),.data_in(EX_mem_to_reg),.data_out(MEM_mem_to_reg));
gen_register #(1) EXMEM_mem_write(.clk(clk),.rst(rst),.write_en(true),.data_in(EX_mem_write),.data_out(MEM_mem_write));


//----------------------------------------
//MEM
//----------------------------------------

assign pc_src = MEM_branch &  MEM_alu_zero;

wire [31:0] WB_alu_result;
gen_register MEMWB_read_data(.clk(clk),.rst(rst),.write_en(true),.data_in(read_data),.data_out(WB_read_data));
gen_register MEMWB_alu_result(.clk(clk),.rst(rst),.write_en(true),.data_in(MEM_alu_result),.data_out(WB_alu_result));
gen_register #(5) MEMWB_write_reg_addr(.clk(clk),.rst(rst),.write_en(true),.data_in(MEM_write_reg_addr),.data_out(WB_write_reg_addr));
gen_register #(1) MEMWB_reg_write(.clk(clk),.rst(rst),.write_en(true),.data_in(MEM_reg_write),.data_out(WB_reg_write));
gen_register #(1) MEMWB_mem_to_reg(.clk(clk),.rst(rst),.write_en(true),.data_in(MEM_mem_to_reg),.data_out(WB_mem_to_reg));

//----------------------------------------
//WB
//----------------------------------------

mux_2_1 wb_mux(
	.select_in(WB_mem_to_reg),						//in
	.datain1(WB_alu_result),
	.datain2(WB_read_data),
	.data_out(WB_write_data)
);


//----------------------------------------
// Other
//----------------------------------------
assign instr_opcode = instruction[31-:6];
assign reg1_addr = instruction[25:21];
assign reg1_data = read_data_1;
assign reg2_addr = instruction[20:16];
assign reg2_data = read_data_2;
assign write_reg_data = WB_write_data;


endmodule
