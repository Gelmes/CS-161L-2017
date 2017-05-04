`timescale 1ns / 1ps

module alutb;

	// Inputs
	reg [1:0] alu_op;
	reg [5:0] instruction_5_0;

	// Outputs
	wire [3:0] alu_out;

	// Instantiate the Unit Under Test (UUT)
	alu_control uut (
		.alu_op(alu_op), 
		.instruction_5_0(instruction_5_0), 
		.alu_out(alu_out)
	);

	initial begin
		// Initialize Inputs
		alu_op = 2'b00;
		instruction_5_0 = 6'b000000;
		#100;
		alu_op = 2'b00;
		instruction_5_0 = 6'b000010;
		#100;
		alu_op = 2'b01;
		instruction_5_0 = 6'b000000;
		#100;
		alu_op = 2'b01;
		instruction_5_0 = 6'b001000;
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b100000;
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b000000;
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b010000;
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b100010;
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b100100;
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b100101;
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b101010;
		#100;
        
		// Add stimulus here

	end
      
endmodule

