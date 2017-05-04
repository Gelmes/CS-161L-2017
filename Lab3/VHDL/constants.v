`timescale 1ns / 1ps

//OPCODES
`define OP_R     6'b000000
`define OP_LW    6'b100011
`define OP_SW    6'b101011
`define OP_B     6'b000100
`define OP_ADDI  6'b001000

//For ALU
`define ALU_AND  		 4'b0000
`define ALU_OR   		 4'b0001
`define ALU_ADD  		 4'b0010
`define ALU_SUB       4'b0110
`define ALU_LT        4'b0111
`define ALU_NOR       4'b1100
  
//For Functions
`define FUNCT_AND   		4'b0100
`define FUNCT_OR    		4'b0101
`define FUNCT_ADD   		4'b0000
`define FUNCT_SUB     	4'b0010
`define FUNCT_LT        4'b1010
`define FUNCT_NOR 		4'b0111