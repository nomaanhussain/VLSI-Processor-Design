`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:15:32 09/01/2017
// Design Name:   orD
// Module Name:   C:/Users/AS/Desktop/VLSI project/orD/orD_tb.v
// Project Name:  orD
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: orD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module orD_tb;

	// Inputs
	reg [7:0] ina;
	reg [7:0] inb;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	orD uut (
		.ina(ina), 
		.inb(inb), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		ina = 8'hD4;
		inb = 8'hE3;

		// Wait 100 ns for global reset to finish
		#100;
      ina = 8'hFF;
		inb = 8'hDA;

		// Wait 100 ns for global reset to finish
		#100;
		ina = 8'hD4;
		inb = 8'h00;

		// Wait 100 ns for global reset to finish
		#100;		
		ina = 8'hD4;
		inb = 8'h23;

		// Wait 100 ns for global reset to finish
		#100;

	end
      
endmodule

