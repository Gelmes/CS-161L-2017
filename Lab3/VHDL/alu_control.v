`timescale 1ns / 1ps
`include "constants.v"

module alu_control(
 input wire [1:0] alu_op ,
 input wire [5:0] instruction_5_0 ,
 output reg [3:0] alu_out
);
	 
//Combinational Logic
always @(*) begin
	case(alu_op) 
		2'b00: begin
			alu_out = `ALU_ADD;
			end
		2'b01: begin
			alu_out = `ALU_SUB;
			end
		2'b10, 2'b11: begin
			case (instruction_5_0[3:0]) 
				`FUNCT_ADD: alu_out = `ALU_ADD;
				`FUNCT_SUB: alu_out = `ALU_SUB;
				`FUNCT_AND: alu_out = `ALU_AND;
				`FUNCT_OR : alu_out = `ALU_OR;
				`FUNCT_LT : alu_out = `ALU_LT;
			endcase
			end
		default: begin
			alu_out = `ALU_ADD;
			end
	endcase
end


endmodule
