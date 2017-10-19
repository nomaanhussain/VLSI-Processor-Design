`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:52:27 09/02/2017 
// Design Name: 
// Module Name:    RegFile 
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
module RegFile(clk, regwrite, ra1, ra2, wa, wd, rd1, rd2 );
    input clk;
    input regwrite;
	 
	 input [2:0] ra1;
    input [2:0] ra2;
    input [2:0] wa;
    input [7:0] wd;
    output  reg [7:0] rd1;
    output  reg[7:0] rd2;
	 
reg [7:0] RAM [(2**3)-1:0];

 
always @(posedge clk) begin
if (regwrite) 
	RAM[wa] <= wd;
else
assign rd1 = ra1 ? RAM[ra1] : 0;
assign rd2 = ra2 ? RAM[ra2] : 0;
end
endmodule

