`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:24:02 09/01/2017 
// Design Name: 
// Module Name:    flop 
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
module flop(
    input clk,
    input [7:0] d,
    output [7:0] q
    );
	reg [7:0] tmp;
	always @(posedge clk)
	tmp <= d;
assign q =tmp;
endmodule
