`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:56:26 09/04/2017 
// Design Name: 
// Module Name:    testBench 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module testBench(clk,reset, memdata,alusrca, memtoreg, regdst, iord, pcen, regwrite, pcsrc, alusrcb, irwrite, alucontrol, 
Reg1Adr, Reg2Adr, branch, src1, src2, alucheck, pcvalue, nextpcvalue, read1, read2,instr, zero, memread, memwrite, adr, writedata , w_data_reg);
	input clk;
	input  reset;
	
	output [7:0] memdata;
    output alusrca;
    output   memtoreg;
    output regdst;
    output iord;
    output pcen;
    output regwrite;
    output [1:0] pcsrc;
    output [1:0] alusrcb;
    output [3:0] irwrite;
    output [2:0] alucontrol;
	  output  [7:0] Reg1Adr;
	 output   [7:0] Reg2Adr;
	 output branch;
	 output [7:0] src1;
	 output [7:0] src2; 
	 output [7:0] alucheck;
	 output [7:0] pcvalue; 
	 output [7:0] nextpcvalue;
	 output  [7:0] read1;
	 output   [7:0] read2;
	 output   [7:0] w_data_reg;
	 
	 output [31:0] instr;
    output zero;
output memread;
output memwrite;
output [7:0] adr;
output [7:0] writedata;
wire [7:0] writedata1,memdata1,adr1,w_data_reg1;
reg [7:0] adr2;
assign memdata=memdata1;

mips mip(clk, reset, memdata1 , memread, memwrite1, adr1, writedata1 ,alusrca, memtoreg, regdst, iord, pcen, regwrite, pcsrc, alusrcb, irwrite, alucontrol, 
Reg1Adr, Reg2Adr, branch, src1, src2, alucheck, pcvalue, nextpcvalue, read1, read2,w_data_reg,instr, zero);

memory externalmem(clk,memwrite1,adr1, writedata1, memdata1);

  // generate clock to sequence tests 
  
assign memwrite=memwrite1; 
assign writedata=writedata1;
assign adr=adr1;
endmodule
