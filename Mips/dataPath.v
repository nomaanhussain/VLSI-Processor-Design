`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:32:08 09/03/2017 
// Design Name: 
// Module Name:    dataPath 
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

module dataPath(clk, reset, memdata, alusrca, memtoreg, iord, pcen, regwrite, regdst, pcsrc, alusrcb, irwrite, alucontrol, 
zero, instr, adr, writedata ,memwrite , Reg1Adr, Reg2Adr, branch, src1, src2, alucheck, pcvalue, nextpcvalue,
read1, read2 ,w_data_reg);
 
	 input clk;
    input reset;
	 
    input [7:0] memdata;
    input alusrca;
    input memtoreg;
    input iord;
    input pcen;
    input regwrite;
    input regdst;
    input [1:0] pcsrc;
    input [1:0] alusrcb;
    input [3:0] irwrite;
    input [2:0] alucontrol;
	 
	 input memwrite;
	 
    output zero;
    output [31:0] instr;
    output [7:0] adr;
    output [7:0] writedata;	 
	 
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
	 
	 
wire [2:0] ra1, ra2 ,wa ;
wire [7:0] pc, nextpc, data,rd1, rd2, wd,srca, srcb, aluresult, aluout, immx4;
wire [7:0] a;
wire zero1;	
reg [7:0] CONST_ZERO = 0;
reg [7:0] CONST_ONE = 1;
// shift left immediate field by 2
assign immx4 = {instr[5:0],2'b00};
// register file address fields
assign ra1 = instr[23:21];
assign ra2 = instr[18:16];
mux_2_1_3 regmux(instr[18:16],instr[13:11], regdst, wa);

// independent of bit width,
// load instruction into four 8-bit registers over four cycles
ff_en  ir0(clk, irwrite[0], memdata[7:0], instr[7:0]);
ff_en  ir1(clk, irwrite[1], memdata[7:0], instr[15:8]);
ff_en  ir2(clk, irwrite[2], memdata[7:0], instr[23:16]);
ff_en  ir3(clk, irwrite[3], memdata[7:0], instr[31:24]);
// datapath
ff_en_r  pcreg(pcen,clk, reset, nextpc, pc);
flop  datareg(clk, memdata[7:0], data[7:0]);	
flop  areg(clk, rd1, a);
flop  wrdreg(clk, rd2, writedata);
flop  resreg(clk, aluresult, aluout);
mux2_1  adrmux(pc, aluout, iord, adr);
mux2_1  src1mux(pc, a, alusrca, srca);
mux4_1  src2mux(writedata, CONST_ONE, instr[7:0],immx4, alusrcb, srcb);
mux3_1 pcmux(aluresult, aluout, immx4, pcsrc, nextpc);
mux2_1  wdmux(aluout, data, memtoreg, wd);
RegFile  rf(clk, regwrite,ra1, ra2,wa, wd, rd1, rd2 );
alu alunit(srca, srcb, alucontrol, aluresult, zero1);

assign zero=zero1;
assign read1=rd1;
assign read2=rd2;
assign w_data_reg=wd;
assign pcvalue=pc;
assign nextpcvalue=nextpc;
assign alucheck=aluresult;
assign src1=srca;
assign src2=srcb;
assign src2=srcb;
assign Reg1Adr=ra1; 
assign branch=pcen;
assign Reg2Adr=ra2;

endmodule




