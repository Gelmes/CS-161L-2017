`timescale 1ns / 1ps

/*
wire  [31:0] extended;
wire [4:0] id_write_register;
wire ctrl_reg_dst;
wire ctrl_branch;
//wire ctrl_mem_read;
wire ctrl_mem_to_reg;
wire [1:0] ctrl_alu_op;
//wire ctrl_mem_write;
wire ctrl_alu_src;
wire ctrl_reg_write;
wire [31:0] id_read_data_1;
//wire [31:0] id_read_data_2;
wire [31:0] wb_write_data;
wire ctrl_mem_read;

control_unit id_ctrl( 
	.instr_op(if_inst[31-:6]),
	.reg_dst(ctrl_reg_dst),
	.branch(ctrl_branch),
	.mem_read(ctrl_mem_read),
	.mem_to_reg(ctrl_mem_to_reg),
	.alu_op(ctrl_alu_op),
	.mem_write(ctrl_mem_write),
	.alu_src(ctrl_alu_src),
	.reg_write(ctrl_reg_write)
);

mux_2_1 #(5) id_mux(
	.select_in(ctrl_reg_dst),						//in
	.datain1(if_inst[20:16]),
	.datain2(if_inst[15:11]),
	.data_out(id_write_register)
);

cpu_registers id_registers(
	 .clk(clk),	
    .rst(rst), 
    .reg_write(ctrl_reg_write) ,
    .read_register_1(if_inst[25:21]) ,
    .read_register_2(if_inst[20:16]) , 
    .write_register(id_write_register) , 
    .write_data(wb_write_data)    ,  
    .read_data_1(id_read_data_1)  ,   
    .read_data_2(id_read_data_2)  
);
assign extended[31:0] = { {16{if_inst[15]}}, if_inst[15:0] };
*/

module ID_stage(
	clk,
	rst,
	instruction,
	write_data,
	
	reg_dst,
	branch,
	mem_read,
	mem_to_reg,
	alu_op,
	mem_write,
	alu_src,
	reg_write,
	
	read_data_1,
	read_data_2,
	sign_extend,
	
	write_reg_addr

);
input wire clk;
input wire rst;
input wire [31:0] instruction;
input wire [31:0] write_data;
input wire [4:0] write_reg_addr;

output wire reg_dst;
output wire branch;
output wire mem_read;
output wire mem_to_reg;
output wire [1:0] alu_op;
output wire mem_write;
output wire alu_src;
output wire reg_write;

output wire [31:0] read_data_1;
output wire [31:0] read_data_2;
output wire [31:0] sign_extend;


wire reg_wrtie;

control_unit id_ctrl( 
	.instr_op(instruction[31-:6]),
	.reg_dst(reg_dst),
	.branch(branch),
	.mem_read(mem_read),
	.mem_to_reg(mem_to_reg),
	.alu_op(alu_op),
	.mem_write(mem_write),
	.alu_src(alu_src),
	.reg_write(reg_write)
);

cpu_registers id_registers(
	 .clk(clk),	
    .rst(rst), 
    .reg_write(reg_write) ,
    .read_register_1(instruction[25:21]) ,
    .read_register_2(instruction[20:16]) , 
    .write_register(write_reg_addr) , 
    .write_data(write_data)    ,  
    .read_data_1(read_data_1)  ,   
    .read_data_2(read_data_2)  
);

assign sign_extend[31:0] = { {16{instruction[15]}}, instruction[15:0] };


endmodule