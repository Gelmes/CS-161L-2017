`timescale 1ns / 1ps
`define WORD_SIZE 32 

module BCDtoBinary_tb;

	// Inputs
	reg [`WORD_SIZE-1:0] in;

	// Outputs
	wire [`WORD_SIZE-1:0] out;

	// Instantiate the Unit Under Test (UUT)
	BCDtoBinary uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		in = 'h00654321;
		#100;
		
		in = 'h00000028;
		#100;

		in = 'h00000003;
		#100;
        
		// Add stimulus here

	end
      
endmodule

