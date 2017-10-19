`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:26:00 09/01/2017
// Design Name:   flop
// Module Name:   C:/Users/AS/Desktop/VLSI project/flop/flop_tb.v
// Project Name:  flop
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: flop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module flop_tb;

	// Inputs
	reg clk;
	reg [7:0] d;

	// Outputs
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	flop uut (
		.clk(clk), 
		.d(d), 
		.q(q)
	);

	always
	#90
	clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 1;
		d = 8'h44;
		
		// Wait 100 ns for global reset to finish
		#100;
      d = 8'h33;		
		// Add stimulus here
		#100;
      d = 8'hFF;
		#100;
      d = 8'h66;
	end
      
endmodule

