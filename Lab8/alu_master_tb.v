`timescale 1ns / 1ps


`define ALU_U_ADD  4'b1000
`define ALU_U_SUB  4'b1001
`define ALU_S_ADD  4'b1100
`define ALU_S_SUB  4'b1101

module alu_master_tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [3:0] opcode;

	// Outputs
	wire [35:0] result;
	wire carry_out;
	wire overflow;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	alu_master uut (
		.A(A), 
		.B(B), 
		.opcode(opcode), 
		.result(result), 
		.carry_out(carry_out), 
		.overflow(overflow), 
		.zero(zero)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		opcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		// Initialize Inputs
		A = 'h34;
		B = 'h3;
		opcode = `ALU_U_ADD;
		#100;       
		
		// Initialize Inputs
		A = 'h34;
		B = 'h3;
		opcode = `ALU_U_SUB;
		#100;       
		
		// Initialize Inputs
		A = 'h34;
		B = 'h3;
		opcode = `ALU_S_ADD;
		#100;        
		
		// Initialize Inputs
		A = 'h34;
		B = 'h3;
		opcode = `ALU_S_SUB;
		#100;
		
		// Initialize Inputs
		A = 32'h00000034;
		B = 32'hf0000003;
		opcode = `ALU_S_ADD;
		#100;     
		
		// Initialize Inputs
		A = 'h34;
		B = 'h3;
		opcode = `ALU_U_ADD;
		#100;     
		

	end
      
endmodule

