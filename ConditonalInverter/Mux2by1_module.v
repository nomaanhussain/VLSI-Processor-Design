`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:40:00 09/01/2017 
// Design Name: 
// Module Name:    Mux2by1_module 
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
module Mux2by1_module(
    input [7:0] d0,
    input [7:0] d1,
    input s,
    output [7:0] out
    );
	assign out = s ? d1 : d0;

endmodule
