`timescale 1ns / 1ps

module CAM_Row(
    clk,
    rst,
    we,
    search_word,
    dont_care_mask,
	 row_match
);

   parameter CAM_WIDTH = 8;

   input wire clk, rst, we;
   input wire [CAM_WIDTH-1:0] search_word, dont_care_mask;
   output wire row_match;
	
	//Lets create the wire that connects everything
	wire [CAM_WIDTH:0] match;
	assign match[0] = 1'b1; //Make first bit 1
		
   // Show your work 
	genvar i;
	generate
		for(i=0; i < CAM_WIDTH; i=i+1) begin : block
			STCAM_Cell u (clk, rst, we,
						search_word[i],
						dont_care_mask[i],
						match[i],
						match[i+1]);
		end
	endgenerate
	
	//Get final result from the last bit
	assign row_match = match[CAM_WIDTH];
	
endmodule
