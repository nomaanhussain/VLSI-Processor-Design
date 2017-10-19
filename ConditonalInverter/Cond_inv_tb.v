`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:45:08 09/01/2017
// Design Name:   Cond_inv_module
// Module Name:   C:/Users/AS/Desktop/VLSI project/ConditonalInverter/Cond_inv_tb.v
// Project Name:  ConditonalInverter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Cond_inv_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Cond_inv_tb;

	// Inputs
	reg [7:0] in;
	reg invert;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	Cond_inv_module uut (
		.in(in), 
		.out(out), 
		.invert(invert)
	);

	initial begin
		// Initialize Inputs
		in = 8'b11001100;
		invert = 0;

		// Wait 100 ns for global reset to finish
		#100;
		in = 8'b11001100;
		invert = 1;
		#100;
		in = 8'b11110000;
		invert = 1;
		#100;
		in = 8'b10101100;
		invert = 0;
		#100;
        
		// Add stimulus here

	end
      always @(*)
		$display("in = %b%b%b%b%b%b%b%b",in[7],in[6],in[5],in[4],in[3],in[2],in[1],in[0],"invert = %b",in,
		"out = %b%b%b%b%b%b%b%b",out[7],out[6],out[5],out[4],out[3],out[2],out[1],out[0]);
endmodule

