`timescale 1ns / 1ps
`define WORD_SIZE 32 

module BinarytoBCD_tb;

	// Inputs
	reg [`WORD_SIZE-1:0] in;

	// Outputs
	wire [`WORD_SIZE+3:0] out;

	// Instantiate the Unit Under Test (UUT)
	BinarytoBCD uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		in = 128;
		#100;
		
		in = 28;
		#100;

		in = 3;
		#100;
        
		// Add stimulus here

	end
      
endmodule

