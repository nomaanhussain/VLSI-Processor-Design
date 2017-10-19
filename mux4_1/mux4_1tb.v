`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:44:19 08/31/2017
// Design Name:   mux4_1
// Module Name:   E:/TE/Winter/VLSI/finalProj/mux4_1/mux4_1tb.v
// Project Name:  mux4_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux4_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux4_1tb;

	// Inputs
	reg [7:0] d0;
	reg [7:0] d1;
	reg [7:0] d2;
	reg [7:0] d3;
	reg [1:0] s;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	mux4_1 uut (
		.d0(d0), 
		.d1(d1), 
		.d2(d2), 
		.d3(d3), 
		.s(s), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		d0 = 8'h33;
		d1 = 8'h43;
		d2 = 8'hAD;
		d3 = 8'hAF;
		s = 01;

		// Wait 100 ns for global reset to finish
		#100;
      		s = 10;

		// Add stimulus here

	end
      
endmodule

