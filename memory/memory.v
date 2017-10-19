`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:28:37 09/01/2017 
// Design Name: 
// Module Name:    memory 
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
module memory(
    input clk,
    input memwr,
    input [7:0] adr,
    input [7:0] wrdata,
    output reg [7:0] memdata
    );
	 
	reg [31:0] mem [63:0];
	wire [31:0] word;
	wire [1:0] bytesel;
	wire [5:0] wordadr; 
	initial
	$readmemh("memfile.dat", mem);
	assign bytesel = adr[1:0];
	assign wordadr = adr[7:2];
	// read and write bytes from 32-bit word
	always @(posedge clk)
	if(memwr)
	case (bytesel)
	2'b00: mem[wordadr][7:0] <= wrdata;
	2'b01: mem[wordadr][15:8] <= wrdata;
	2'b10: mem[wordadr][23:16] <= wrdata;
	2'b11: mem[wordadr][31:24] <= wrdata;
	endcase
	assign word = mem[wordadr];
	always @(*)
	
	case (bytesel)
	2'b00: memdata = word[7:0];
	2'b01: memdata = word[15:8];
	2'b10: memdata = word[23:16];
	2'b11: memdata = word[31:24];
	endcase
endmodule
