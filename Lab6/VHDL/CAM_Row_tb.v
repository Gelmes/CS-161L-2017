`timescale 1ns / 1ps

module CAM_Row_tb;

	// Inputs
	reg clk;
	reg rst;
	reg we;
	reg [7:0] search_word;
	reg [7:0] dont_care_mask;

	// Outputs
	wire row_match;

	// Instantiate the Unit Under Test (UUT)
	CAM_Row uut (
		.clk(clk), 
		.rst(rst), 
		.we(we), 
		.search_word(search_word), 
		.dont_care_mask(dont_care_mask), 
		.row_match(row_match)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		we = 0;
		search_word = 0;
		dont_care_mask = 0;

		// Wait 100 ns for global reset to finish
		
		#10;
		we = 0;
		search_word = 0;
		dont_care_mask = 0;
		clk = 1;
		rst = 0;
		#10;
		clk = 0;
		rst = 0;
		
		#10;
		we = 0;
		search_word = 0;
		dont_care_mask = 8'b11111111;
		clk = 1;
		rst = 0;
		#10;
		clk = 0;
		rst = 0;
		
		#10;
		we = 0;
		search_word = 0;
		dont_care_mask = 8'b11110111;
		clk = 1;
		rst = 0;
		#10;
		clk = 0;
		rst = 0;
		
		#10;
		we = 0;
		search_word = 8'b11111111;
		dont_care_mask = 0;
		clk = 1;
		rst = 0;
		#10;
		clk = 0;
		rst = 0;
		
		#10;
		we = 1;
		search_word = 8'b10101010;
		dont_care_mask = 0;
		clk = 1;
		rst = 0;
		#10;
		clk = 0;
		rst = 0;
		
		#10;
		we = 0;
		search_word = 8'b10101010;
		dont_care_mask = 0;
		clk = 1;
		rst = 0;
		#10;
		clk = 0;
		rst = 0;
		
		#10;
		we = 0;
		search_word = 8'b01010101;
		dont_care_mask = 0;
		clk = 1;
		rst = 0;
		#10;
		clk = 0;
		rst = 0;
		
		#10;
		we = 0;
		search_word = 8'b01010111;
		dont_care_mask = 8'b11111101;
		clk = 1;
		rst = 0;
		#10;
		clk = 0;
		rst = 0;
		
		#10;
		we = 0;
		search_word = 8'b01010111;
		dont_care_mask = 8'b11111001;
		clk = 1;
		rst = 0;
		#10;
		clk = 0;
		rst = 0;
		
        
		// Add stimulus here

	end
      
endmodule

