`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:17:42 08/31/2017
// Design Name:   mux2_1
// Module Name:   E:/TE/Winter/VLSI/finalProj/mux2_1/mux2_1tb.v
// Project Name:  mux2_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux2_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux2_1tb;

	// Inputs
	reg [7:0] d0;
	reg [7:0] d1;
	reg s;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	mux2_1 uut (
		.d0(d0), 
		.d1(d1), 
		.s(s), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		d0 = 8'h9A;
		d1 = 8'h75;
		s = 1;

		// Wait 100 ns for global reset to finish
		#10;
        d0 = 8'h9A;
		d1 = 8'h75;
		s = 0;
		
		#10;
        d0 = 8'h9A;
		d1 = 8'h75;
		// Wait 100 ns for global reset to finish
		#10;
		// Add stimulus here

	end
      
endmodule

