`timescale 1ns / 1ps

`define ALU_U_ADD  4'b1000
`define ALU_U_SUB  4'b1001
`define ALU_S_ADD  4'b1100
`define ALU_S_SUB  4'b1101

module alu_tb;

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
	alu uut (
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
		A = 10;
		B = 3;
		opcode = `ALU_U_ADD;
		#100;
        
		
		// Initialize Inputs
		A = 10;
		B = 3;
		opcode = `ALU_U_SUB;
		#100;
        
        
		
		// Initialize Inputs
		A = 10;
		B = 3;
		opcode = `ALU_S_ADD;
		#100;
        
        
		
		// Initialize Inputs
		A = 10;
		B = 3;
		opcode = `ALU_S_SUB;
		#100;
		
		
		/////////////////////////////////////////
		//Special Cases
		
		// Initialize Inputs
		A = 32'b11111111111111111111111111111111;
		B = 32'b00000000000000000000000000000011;
		opcode = `ALU_U_ADD;
		#100;
        
		
		// Initialize Inputs
		A = 32'b00000000000000000000000000000000;
		B = 32'b00000000000000000000000000000011;
		opcode = `ALU_U_SUB;
		#100;
        
        
		
		// Initialize Inputs
		A = 32'b01000000000000000000000000000000;
		B = 32'b01000000000000000000000000000000;
		opcode = `ALU_S_ADD;
		#100;
        
        
		
		// Initialize Inputs
		A = 32'b10000000000000000000000000000000;
		B = 32'b10000000000000000000000000000000;
		opcode = `ALU_S_SUB;
		#100;
        
        
		
		// Initialize Inputs
		A = 10;
		B = 10;
		opcode = `ALU_U_SUB;
		#100;
        
		// Add stimulus here

	end
      
endmodule

