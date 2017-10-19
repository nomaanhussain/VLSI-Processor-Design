`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:12:46 09/01/2017 
// Design Name: 
// Module Name:    orD 
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
module orD(
    input [7:0] ina,
    input [7:0] inb,
    output [7:0] out
    );

assign out = ina | inb;
endmodule
