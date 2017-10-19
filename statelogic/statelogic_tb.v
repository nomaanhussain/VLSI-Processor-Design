`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:21:07 09/01/2017
// Design Name:   statelogic
// Module Name:   C:/Users/AS/Desktop/VLSI project/statelogic/statelogic_tb.v
// Project Name:  statelogic
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: statelogic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module statelogic_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [5:0] op;

	// Outputs
	wire [3:0] state;

	// Instantiate the Unit Under Test (UUT)
	statelogic uut (
		.clk(clk), 
		.reset(reset), 
		.op(op), 
		.state(state)
	);
	always
	#10
	clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		op = 6'h20;
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

