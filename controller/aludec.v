`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:12:21 09/01/2017 
// Design Name: 
// Module Name:    aludec 
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
module aludec(
    input [1:0] aluop,
    input [5:0] funct,
    output reg[2:0] aluCtrl
    );
always @(*)

case(aluop)
2'b00: aluCtrl = 3'b010;
2'b01: aluCtrl = 3'b110;
default: case (funct)
			6'b100000: aluCtrl = 3'b010; 		//add			
			6'b100010: aluCtrl = 3'b110; 		//sub
			6'b100100: aluCtrl = 3'b000;		//and
			6'b100101: aluCtrl = 3'b001;		//or
			6'b101010: aluCtrl = 3'b111;		//slt
			default: aluCtrl = 3'b101;		//should never happen
			endcase
		endcase
endmodule
