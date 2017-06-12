`timescale 1ns / 1ps

module cs161_processor(
	input wire clk,
	input wire rst,
	  
	output wire [31:0] prog_count,
	output wire [5:0] instr_opcode,
	output wire [4:0] reg1_addr,
	output wire [31:0] reg1_data,
	output wire [4:0] reg2_addr,
	output wire [31:0] reg2_data,
	output wire [4:0] write_reg_addr,
	output wire [31:0] write_reg_data
);

//----------------------------------------
//IF
//----------------------------------------
reg [31:0] pc = 0; //Program Counter
wire [31:0] pc_temp;
wire [31:0] pc_plus_four;

wire [31:0] if_inst;
wire [31:0] if_mem_write;
wire [31:0] ex_alu_result;
wire ctrl_mem_write;
wire ctrl_mem_read;
wire [31:0] id_read_data_2;
wire [31:0] mem_read_data;

assign pc_plus_four = pc + 4;
cpumemory memory(
	.clk(clk),
   .rst(rst),
   .instr_read_address(pc[9:2]),
   .instr_instruction(if_inst), //Out
   .data_mem_write(ctrl_mem_write), 
   .data_address(ex_alu_result[7:0]),    
   .data_write_data(id_read_data_2),    
   .data_read_data(mem_read_data)//Out
);

//----------------------------------------
//ID
//----------------------------------------
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

//----------------------------------------
//EX
//----------------------------------------
wire [31:0] ex_extended_shifted;
wire [31:0] ex_alu_2;
wire ex_alu_zero;
wire [3:0] ex_alu_op;

assign ex_extended_shifted = pc_plus_four + (extended << 2);

mux_2_1 ex_mux(
	.select_in(ctrl_alu_src),						//in
	.datain1(id_read_data_2),
	.datain2(extended),
	.data_out(ex_alu_2)
);

alu_control ex_alu_ctrl(
 .alu_op(ctrl_alu_op) ,
 .instruction_5_0(if_inst[5:0]) ,
 .alu_out(ex_alu_op)
);

alu ex_alu(
	.alu_control_in(ex_alu_op),
	.channel_a_in(id_read_data_1), 
	.channel_b_in(ex_alu_2),
	.zero_out(ex_alu_zero), 
	.alu_result_out(ex_alu_result)
);



//----------------------------------------
//MEM
//----------------------------------------
wire mem_mux_branch;

mux_2_1 mem_mux_pc(
	.select_in(mem_mux_branch),						//in
	.datain1(pc_plus_four),
	.datain2(ex_extended_shifted),
	.data_out(pc_temp)
);

assign mem_mux_branch = ctrl_branch &  ex_alu_zero;


//----------------------------------------
//WB
//----------------------------------------
//wire [31:0] wb_write_data;

mux_2_1 wb_mux(
	.select_in(ctrl_mem_to_reg),						//in
	.datain1(ex_alu_result),
	.datain2(mem_read_data),
	.data_out(wb_write_data)
);
	

assign prog_count = pc;
assign instr_opcode = if_inst[31-:6];
assign reg1_addr = if_inst[25:21];
assign reg1_data = id_read_data_1;
assign reg2_addr = if_inst[20:16];
assign reg2_data = id_read_data_2;
assign write_reg_addr = id_write_register;
assign write_reg_data = wb_write_data;

always @(posedge clk, posedge rst) begin
	if(rst == 1) begin
		pc = 'b0;
	end else begin
		pc = pc_temp;
	end
end

endmodule
