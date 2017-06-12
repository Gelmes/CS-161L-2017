`timescale 1ns / 1ps

module alu_master(A, B, opcode, result, carry_out, overflow, zero);

input wire [31:0] A;
input wire [31:0] B;
input wire [3:0]  opcode;
output wire [35:0] result;
output wire carry_out;
output wire overflow;
output wire zero;

wire [31:0] input_a;
wire [31:0] input_b;
wire [31:0] output_result;

BCDtoBinary inA(.in(A), .out(input_a));
BCDtoBinary inB(.in(B), .out(input_b));

alu math(
	.A(input_a),
	.B(input_b),
	.opcode(opcode),
	.result(output_result),
	.carry_out(carry_out),
	.overflow(overflow),
	.zero(zero)
);

BinarytoBCD out(.in(output_result), .out(result));


endmodule
