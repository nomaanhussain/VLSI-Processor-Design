`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:10:54 09/01/2017
// Design Name:   inverter
// Module Name:   C:/Users/AS/Desktop/VLSI project/inverter/inverter_tb.v
// Project Name:  inverter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: inverter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module inv_tb;

	// Inputs
	reg [7:0] in;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	inverter uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 8'b11110000;

		// Wait 100 ns for global reset to finish
		#100;
		in = 8'b10101010;
		#100;
		in = 8'b00110011;
		#100;
		in = 8'b11100111;
		#100;
		// Add stimulus here

	end
     always @(*)
			$display("in = %b%b%b%b%b%b%b%b",in[7],in[6],in[5],in[4],in[3],in[2],in[1],in[0],
			"out = %b%b%b%b%b%b%b%b",out[7],out[6],out[5],out[4],out[3],out[2],out[1],out[0]);
endmodule

