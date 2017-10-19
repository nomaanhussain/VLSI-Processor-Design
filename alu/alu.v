`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:05:30 09/01/2017 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [7:0] ina,
    input [7:0] inb,
    input [2:0] aluCtrl,
    output [7:0] out,
    output zero
    );
	wire [7:0] inb2, andResult, orResult, sumResult, sltResult;
	andN andblock(ina, inb, andResult); 
	orD orblock(ina, inb, orResult);
	Cond_inv_module inb_inv(inb, inb2, aluCtrl[2]); //inversion for subtraction
	Adder addblock(ina, inb, aluCtrl[2], sumResult);
	assign sltResult = sumResult[7]; 																//if MSB of sum = 1, then sltresult =1
	mux4_1 resultmux(andResult, orResult, sumResult,sltResult,aluCtrl[1:0], out);	// set output according to the select lines
	zeroDetector zd(out,zero);
endmodule
