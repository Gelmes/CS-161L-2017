`timescale 1ns / 1ps
`include "constants.v"

module control_unit(
 input wire [5:0] instr_op ,
 output reg reg_dst ,
 output reg branch ,
 output reg mem_read ,
 output reg mem_to_reg ,
 output reg [1:0] alu_op ,
 output reg mem_write ,
 output reg alu_src ,
 output reg reg_write 	
);
	 
//Combinational Logic
always @(*) begin
	reg_dst     = 0;
   branch      = 0;
   mem_read    = 0;
   mem_to_reg  = 0;
   alu_op      = 0;
   mem_write   = 0;
   alu_src     = 0;
   reg_write   = 0;
	
	case(instr_op) 
		`OP_R: begin
			reg_dst    = 1;
         reg_write  = 1;
         alu_op     = 2;
			end
		`OP_ADDI: begin
			alu_src    = 1;
         reg_write  = 1;
			end
		`OP_LW: begin
			alu_src    = 1;
         mem_to_reg = 1;
         reg_write  = 1;
         mem_read   = 1;
			end
		`OP_SW: begin
			alu_src    = 1;
			mem_write  = 1;			
			end
		`OP_B: begin
			reg_dst  = 1;
			branch   = 1;
         alu_op   = 1;			
			end
		default: branch = 0;
		
	endcase
end

endmodule
