`timescale 1ns / 1ps

module IF_stage(
	clk,
	rst,
	pc_src,
	branch_addr,
	pc_plus_four,
	instruction,
	pc,
	
	ctrl_mem_write,
	alu_result,
	read_data_2,
	mem_read_data
);

input  wire clk;
input  wire rst;
input  wire pc_src;
input  wire [31:0] branch_addr;
output wire [31:0] pc_plus_four;
output wire [31:0] instruction;
output reg  [31:0] pc;

// *** DELETE LATER ***
input  wire ctrl_mem_write;
input  wire [31:0] alu_result;
input  wire [31:0] read_data_2;
output wire [31:0] mem_read_data;
// *********************

//---------------------------------------- 
//  IF  
//----------------------------------------
wire [31:0] pc_temp;

mux_2_1 mem_mux_pc(
	.select_in(pc_src),						//in
	.datain1(pc_plus_four),
	.datain2(branch_addr),
	.data_out(pc_temp)
);

assign pc_plus_four = pc + 4;

cpumemory memory(
	.clk(clk),
   .rst(rst),
   .instr_read_address(pc[9:2]),
   .instr_instruction(instruction),    //Out
   .data_mem_write(ctrl_mem_write), 
   .data_address(alu_result[7:0]),    
   .data_write_data(read_data_2),    
   .data_read_data(mem_read_data)      //Out
);

always @(posedge clk, posedge rst) begin
	if(rst == 1) begin
		pc = 'b0;
	end else begin
		pc = pc_temp;
	end
end

endmodule
