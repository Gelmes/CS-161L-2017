`timescale 1ns / 1ps

module BCAM_Cell(
    input wire clk,
    input wire rst,
    input wire we,
    input wire cell_search_bit,
    input wire cell_dont_care_bit,
    input wire cell_match_bit_in,
    output wire cell_match_bit_out
);
	 
//Combinational logic
reg ff  = 1'b0; //Flip Flop
always @(posedge clk, posedge rst) begin
	if (rst == 1'b1) begin
		ff <= 1'b0;
	end else if(we == 1'b1) begin
		ff <= cell_search_bit;
	end	
end

assign cell_match_bit_out = (ff == cell_search_bit) & cell_match_bit_in;

endmodule
