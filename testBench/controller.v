`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:44:36 09/01/2017 
// Design Name: 
// Module Name:    controller 
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
module controller(
    input clk,
    input reset,
    input [5:0] op,
    input [5:0] funct,
    input zero,
    output memread,
    output memwrite,
    output alusrca,
    output memtoreg,
    output iord,
    output pcen,
    output regwrite,
    output regdst,
    output [1:0] pcsrc,
    output [1:0] alusrcb,
    output [2:0] aluCtrl,
    output [3:0] irwrite
    );
wire [3:0] state;
  wire pcwrite, branch;
  wire [1:0] aluop;
  
  //Controls FSM
  statelogic statelog (clk,reset,op,state);
  
  outputlogic out (state, memread, memwrite, alusrca, memtoreg,
  iord, regwrite, regdst, pcsrc, alusrcb, irwrite, pcwrite, branch, aluop);
  
  //other control decoding
  aludec ad(aluop, funct, aluCtrl);
  
  //program counter enable
  assign pcen = pcwrite | (branch & zero);

endmodule
