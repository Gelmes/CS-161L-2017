`timescale 1ns / 1ps
module CAM_Array(
    clk,
    rst,
    we_decoded_row_address,
    search_word,
    dont_care_mask,
    decoded_match_address
    );

   parameter CAM_WIDTH = 8;
   parameter CAM_DEPTH = 8;

   input wire clk, rst;
   input wire [CAM_DEPTH-1:0] we_decoded_row_address;
   input wire [CAM_WIDTH-1:0] search_word, dont_care_mask;
   output wire [CAM_DEPTH-1:0] decoded_match_address;	 

	genvar i;
	generate
		for(i=0; i < CAM_DEPTH; i = i+1) begin : block
			CAM_Row #(CAM_WIDTH) u (
					clk, rst,
					we_decoded_row_address[i],
					search_word,
					dont_care_mask,
					decoded_match_address[i]
					);
		end
	endgenerate
endmodule
