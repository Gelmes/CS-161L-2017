`timescale 1ns / 1ps
`define WORD_SIZE 32 

module BCDtoBinary(in, out);
input wire [`WORD_SIZE-1:0] in;
output wire [`WORD_SIZE-1:0] out;

assign out =   (in[3:0]    + 
				(10      * in[7:4])   + 
				(100     * in[11:8])  + 
				(1000    * in[15:12]) +
				(10000   * in[19:16]) +
				(100000  * in[23:20]) +
				(1000000 * in[27:24])) |
				(in[28] << 31);
				// (10*in[31:28]) Signed bit
;

endmodule
