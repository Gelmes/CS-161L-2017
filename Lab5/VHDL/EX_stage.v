`timescale 1ns / 1ps

module EX_stage(
	clk,
	rst,
	pc_plus_four,
	sign_extend,
	read_data_1,
	read_data_2,
	alu_src,
	alu_op,
	instruction,
	reg_dst,
	
	branch_addr,
	alu_zero,
	alu_result,
	write_reg_addr
);

input wire clk;
input wire rst;
input wire [31:0] pc_plus_four;
input wire [31:0] sign_extend;
input wire [31:0] read_data_1;
input wire [31:0] read_data_2;
input wire alu_src;
input wire [1:0] alu_op;
input wire [31:0] instruction;
input wire reg_dst;

output wire [31:0] branch_addr;
output wire alu_zero;
output wire [31:0] alu_result;
output wire [4:0] write_reg_addr;

assign branch_addr = pc_plus_four + (sign_extend << 2);

wire [31:0] alu_2;
wire [3:0] alu_control_in;

mux_2_1 ex_mux(
	.select_in(alu_src),						//in
	.datain1(read_data_2),
	.datain2(sign_extend),
	.data_out(alu_2)
);

alu_control ex_alu_ctrl(
 .alu_op(alu_op) ,
 .instruction_5_0(instruction[5:0]) ,
 .alu_out(alu_control_in)
);

alu ex_alu(
	.alu_control_in(alu_control_in),
	.channel_a_in(read_data_1), 
	.channel_b_in(alu_2),
	.zero_out(alu_zero), 
	.alu_result_out(alu_result)
);

mux_2_1 #(5) id_mux(
	.select_in(reg_dst),						//in
	.datain1(instruction[20:16]),
	.datain2(instruction[15:11]),
	.data_out(write_reg_addr)
);

endmodule
