`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:37:40 03/08/2017 
// Design Name: 
// Module Name:    STCAM_cell 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module STCAM_Cell(
    input clk,
    input rst,
    input we,
    input cell_search_bit,
    input cell_dont_care_bit,
    input cell_match_bit_in,
    output cell_match_bit_out
);
	 
//Combinational logic
reg ff  = 1'b0; //Flip Flop
reg dc  = 1'b0; //Don't Care Flip FLop
always @(posedge clk, posedge rst) begin
	if (rst == 1'b1) begin
		ff <= 1'b0;
		dc <= 1'b0;
	end else if(we == 1'b1) begin
		ff <= cell_search_bit;
		dc <= cell_dont_care_bit;
	end	
end

assign cell_match_bit_out = ((ff == cell_search_bit) | dc) & cell_match_bit_in;

endmodule
