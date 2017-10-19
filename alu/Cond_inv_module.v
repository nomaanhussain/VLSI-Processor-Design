`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:19:10 09/01/2017 
// Design Name: 
// Module Name:    Cond_inv_module 
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
module Cond_inv_module(
    input [7:0] in,
    output [7:0] out,
    input invert
    );
	wire [7:0] temp;
	inverter inv ( in, temp);
	mux2_1 invmux (in,temp,invert,out);
	


endmodule
