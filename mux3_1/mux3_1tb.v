`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:32:54 08/31/2017
// Design Name:   mux3_1
// Module Name:   E:/TE/Winter/VLSI/finalProj/mux3_1/mux3_1tb.v
// Project Name:  mux3_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux3_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux3_1tb;

	// Inputs
	reg [7:0] d0;
	reg [7:0] d1;
	reg [7:0] d2;
	reg [1:0] s;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	mux3_1 uut (
		.d0(d0), 
		.d1(d1), 
		.d2(d2), 
		.y(y), 
		.s(s)
	);

	initial begin
		// Initialize Inputs
		d0 = 8'h54;
		d1 = 8'h63;
		d2 = 8'h16;
		s = 00;

		// Wait 100 ns for global reset to finish
		#10;
		s = 10;

		// Wait 100 ns for global reset to finish
		#10;  
		// Add stimulus here

	end
      
endmodule

