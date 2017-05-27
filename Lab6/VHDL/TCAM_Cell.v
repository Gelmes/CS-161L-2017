`timescale 1ns / 1ps

module TCAM_Cell(
    input clk,
    input rst,
    input we,
    input cell_search_bit,
    input cell_dont_care_bit,
    input cell_match_bit_in,
    output cell_match_bit_out
    );

// Your code goes here 
	 
//Combinational logic
reg ff  = 1'b0; //Flip Flop
always @(posedge clk, posedge rst) begin
	if (rst == 1'b1) begin
		ff <= 1'b0;
	end else if(we == 1'b1) begin
		ff <= cell_search_bit;
	end	
end

assign cell_match_bit_out = ((ff == cell_search_bit) | cell_dont_care_bit) & cell_match_bit_in;



endmodule
