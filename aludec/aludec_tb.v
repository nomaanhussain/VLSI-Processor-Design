`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:27:40 09/01/2017
// Design Name:   aludec
// Module Name:   C:/Users/AS/Desktop/VLSI project/aludec/aludec_tb.v
// Project Name:  aludec
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: aludec
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module aludec_tb;

	// Inputs
	reg [1:0] aluop;
	reg [5:0] funct;

	// Outputs
	wire [2:0] aluCtrl;

	// Instantiate the Unit Under Test (UUT)
	aludec uut (
		.aluop(aluop), 
		.funct(funct), 
		.aluCtrl(aluCtrl)
	);

	initial begin
		// Initialize Inputs
		aluop = 2'b00;
		funct = 32;

		// Wait 100 ns for global reset to finish
		#100
       aluop = 2'b01;
		funct = 34;

		// Wait 100 ns for global reset to finish
		#100
		aluop = 2'b10;
		funct = 36;

		// Wait 100 ns for global reset to finish
		#100
		aluop = 2'b10;
		funct = 32;

		// Wait 100 ns for global reset to finish
		#100;
		aluop = 0;
		funct = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		// Add stimulus here

	end
      
endmodule

