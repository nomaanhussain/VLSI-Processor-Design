`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:30:51 08/31/2017 
// Design Name: 
// Module Name:    Adder 
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
module Adder(a, b, cin, y);
    input [7:0] a;
    input [7:0] b;
    input cin;
    output [7:0] y;
wire [7:0] t1;
assign t1 = a + b+ cin;
assign y = t1;

endmodule

