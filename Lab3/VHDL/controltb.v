`timescale 1ns / 1ps

module controltb;

	// Inputs
	reg [5:0] instr_op;

	// Outputs
	wire reg_dst;
	wire branch;
	wire mem_read;
	wire mem_to_reg;
	wire [1:0] alu_op;
	wire mem_write;
	wire alu_src;
	wire reg_write;

	// Instantiate the Unit Under Test (UUT)
	control_unit uut (
		.instr_op(instr_op), 
		.reg_dst(reg_dst), 
		.branch(branch), 
		.mem_read(mem_read), 
		.mem_to_reg(mem_to_reg), 
		.alu_op(alu_op), 
		.mem_write(mem_write), 
		.alu_src(alu_src), 
		.reg_write(reg_write)
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		instr_op = 0;
		#100;
		instr_op = 6'b100011;
		#100;
		instr_op = 6'b101011;
		#100;
		instr_op = 6'b000100;
		#100;
		instr_op = 6'b001000;
		#100;
        
		// Add stimulus here

	end
      
endmodule

