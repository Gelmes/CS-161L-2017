`timescale 1ns / 1ps

`define ALU_U_ADD  4'b1000
`define ALU_U_SUB  4'b1001
`define ALU_S_ADD  4'b1100
`define ALU_S_SUB  4'b1101

module alu(A, B, opcode, result, carry_out, overflow, zero);

// ---------------------------------------------------------
// Input output declarations 
// --------------------------------------------------------- 
input wire [31:0] A;
input wire [31:0] B;
input wire [3:0] opcode;
output reg [31:0] result;
output reg carry_out = 0;
output reg overflow = 0;
output reg zero = 0;

reg [31:0] temp = 0;
reg signed [31:0] s_a = 0;
reg signed [31:0] s_b = 0;

// ---------------------------------------------------------
// Parameters 
// --------------------------------------------------------- 

always @(*) 

begin
	s_a = A;
	s_b = B;
	carry_out = 0;
	overflow = 0;
	
	case (opcode)	
		`ALU_U_ADD : begin 
			temp = A + B; 
			carry_out = (temp < A) ? 1 : 0;
		end
		`ALU_U_SUB : begin 
			temp = A - B; 
			carry_out = (B > A) ? 1 : 0;
		end
		`ALU_S_ADD : begin
			temp = s_a + s_b; 
			overflow = ((B[31] & A[31]) != temp[31]) ? 1 : 0;
		end
		`ALU_S_SUB : begin
			temp = s_a - s_b; 
			overflow = ((B[31] & A[31]) ^ temp[31]) ? 1 : 0;
		end
	endcase ; 

	// Final results 	
	result = temp ; 
	zero = (temp == 0) ? 1 : 0 ; 

end 

endmodule
