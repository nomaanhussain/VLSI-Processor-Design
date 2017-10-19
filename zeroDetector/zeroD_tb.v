`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:03:17 08/31/2017
// Design Name:   zeroDetector
// Module Name:   E:/TE/Winter/VLSI/finalProj/zeroDetector/zeroD_tb.v
// Project Name:  zeroDetector
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: zeroDetector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module zeroD_tb;

	// Inputs
	reg [7:0] a;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	zeroDetector uut (
		.a(a), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 0;

		// Wait 100 ns for global reset to finish
		#10;
        a = 8'h33;
		// Add stimulus here
		
	end
      
endmodule

