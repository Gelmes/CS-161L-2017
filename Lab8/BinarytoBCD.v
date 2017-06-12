`timescale 1ns / 1ps
`define WORD_SIZE 32 

module BinarytoBCD(in, out);
input wire [`WORD_SIZE-1:0] in;
output reg [`WORD_SIZE+3:0] out;

reg [`WORD_SIZE-1:0] result;
reg [5:0] iterator;

always @(*) begin
	result   = 'b0;
	iterator = `WORD_SIZE-1;
	while (iterator > 0) begin
		if (result[3:0]   > 4'b0100) begin result[3:0]   = result[3:0]   + 4'b0011; end
		if (result[7:4]   > 4'b0100) begin result[7:4]   = result[7:4]   + 4'b0011; end
		if (result[11:8]  > 4'b0100) begin result[11:8]  = result[11:8]  + 4'b0011; end
		if (result[15:12] > 4'b0100) begin result[15:12] = result[15:12] + 4'b0011; end
		if (result[19:16] > 4'b0100) begin result[19:16] = result[19:16] + 4'b0011; end
		if (result[23:20] > 4'b0100) begin result[23:20] = result[23:20] + 4'b0011; end
		if (result[27:24] > 4'b0100) begin result[27:24] = result[27:24] + 4'b0011; end
		iterator = iterator - 1;
		
		//Shift the current result by 1 and insert next
		result = (result << 1) |  in[iterator]; 
	end
	
	out = result | (in[31] << 32);
end


endmodule

