`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:52:50 05/24/2017
// Design Name:   BCAM_Cell
// Module Name:   C:/Users/marco/Dropbox/School/SPRING 2017/161L/New Stuff/Lab6/lab6/BCAM_tb.v
// Project Name:  lab6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BCAM_Cell
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BCAM_tb;

	// Inputs
	reg clk;
	reg rst;
	reg we;
	reg cell_search_bit;
	reg cell_dont_care_bit;
	reg cell_match_bit_in;

	// Outputs
	wire cell_match_bit_out;

	// Instantiate the Unit Under Test (UUT)
	BCAM_Cell uut (
		.clk(clk), 
		.rst(rst), 
		.we(we), 
		.cell_search_bit(cell_search_bit), 
		.cell_dont_care_bit(cell_dont_care_bit), 
		.cell_match_bit_in(cell_match_bit_in), 
		.cell_match_bit_out(cell_match_bit_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		we = 0;
		cell_search_bit = 0;
		cell_dont_care_bit = 0;
		cell_match_bit_in = 0;

		// Wait 100 ns for global reset to finish
		
		#50;
		we = 0;
		cell_search_bit = 0;
		cell_dont_care_bit = 0;
		cell_match_bit_in = 0;
		clk = 1;
		rst = 0;
		#50;
		clk = 0;
		rst = 0;
		
		#50;
		we = 0;
		cell_search_bit = 1;
		cell_dont_care_bit = 0;
		cell_match_bit_in = 0;
		clk = 1;
		rst = 0;
		#50;
		clk = 0;
		rst = 0;
		rst = 0;
		
		#50;
		we = 0;
		cell_search_bit = 0;
		cell_dont_care_bit = 1;
		cell_match_bit_in = 0;
		clk = 1;
		rst = 0;
		#50;
		clk = 0;
		rst = 0;
		rst = 0;
		
		#50;
		we = 0;
		cell_search_bit = 0;
		cell_dont_care_bit = 0;
		cell_match_bit_in = 1;
		clk = 1;
		rst = 0;
		#50;
		clk = 0;
		rst = 0;
		rst = 0;
		
		//Now we test with the search flip flop bit set to one
		
		#50;
		we = 1;
		cell_search_bit = 1;
		cell_dont_care_bit = 0;
		cell_match_bit_in = 0;
		clk = 1;
		rst = 0;
		#50;
		clk = 0;
		rst = 0;
		
		#50;
		we = 0;
		cell_search_bit = 0;
		cell_dont_care_bit = 0;
		cell_match_bit_in = 0;
		clk = 1;
		rst = 0;
		#50;
		clk = 0;
		rst = 0;
		
		#50;
		we = 0;
		cell_search_bit = 1;
		cell_dont_care_bit = 0;
		cell_match_bit_in = 0;
		clk = 1;
		rst = 0;
		#50;
		clk = 0;
		rst = 0;
		rst = 0;
		
		#50;
		we = 0;
		cell_search_bit = 0;
		cell_dont_care_bit = 1;
		cell_match_bit_in = 0;
		clk = 1;
		rst = 0;
		#50;
		clk = 0;
		rst = 0;
		rst = 0;
		
		#50;
		we = 0;
		cell_search_bit = 0;
		cell_dont_care_bit = 0;
		cell_match_bit_in = 1;
		clk = 1;
		rst = 0;
		#50;
		clk = 0;
		rst = 0;
		rst = 0;
		
		#50;
		we = 0;
		cell_search_bit = 1;
		cell_dont_care_bit = 0;
		cell_match_bit_in = 1;
		clk = 1;
		rst = 0;
		#50;
		clk = 0;
		rst = 0;
		rst = 0;
        
		// Add stimulus here

	end
      
endmodule

