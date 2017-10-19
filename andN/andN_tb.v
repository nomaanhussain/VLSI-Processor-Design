`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:57:23 09/01/2017
// Design Name:   andN
// Module Name:   C:/Users/AS/Desktop/VLSI project/andN/andN_tb.v
// Project Name:  andN
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: andN
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module andN_tb;

	// Inputs
	reg [7:0] ina;
	reg [7:0] inb;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	andN uut (
		.ina(ina), 
		.inb(inb), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		ina = 8'b10110110;
		inb = 8'b11111111;
		#100;
		// Wait 100 ns for global reset to finish
		ina = 8'b10110110;
		inb = 8'b11100000;
		#100;
		ina = 8'b10110110;
		inb = 8'b10000011;
		#100;
		ina = 8'b10110110;
		inb = 8'b10000000;
		#100;
        
		// Add stimulus here

	end
      
endmodule

