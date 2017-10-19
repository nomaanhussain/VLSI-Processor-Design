`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:46:27 08/31/2017 
// Design Name: 
// Module Name:    ff_en_r 
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
module ff_en_r(en, clk, reset, d, q);
    input en;
    input clk;
    input reset;
    input [7:0] d;
    output reg [7:0] q;
    always @(posedge clk)
begin
if(reset)
q <= 8'h00;
else if(en)
q <= d;
end
endmodule

