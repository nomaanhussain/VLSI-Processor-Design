`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:21:40 09/04/2017 
// Design Name: 
// Module Name:    mux_2_1_3 
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
module mux_2_1_3(d0, d1, s, y);
    input [2:0] d0;
    input [2:0] d1;
    input s;
    output [2:0] y;

assign y = s ? d1: d0 ;

endmodule

