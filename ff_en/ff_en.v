`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:36 08/31/2017 
// Design Name: 
// Module Name:    ff_en 
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
module ff_en(clk, en, d, q);
    input clk;
    input  en;
    input [7:0] d;
    output reg [7:0] q;
always @(posedge clk)
begin
if(en)
q <=d;
end
endmodule