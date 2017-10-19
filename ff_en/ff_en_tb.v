`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:28:47 08/31/2017
// Design Name:   ff_en
// Module Name:   E:/TE/Winter/VLSI/finalProj/ff_en/ff_en_tb.v
// Project Name:  ff_en
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ff_en
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ff_en_tb;

	// Inputs
	reg clk;
	reg en;
	reg [7:0] d;
	
	
	// Outputs
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	ff_en uut (
		.clk(clk), 
		.en(en), 
		.d(d), 
		.q(q)
	);

	always begin 
	#10
	clk=~clk;
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		en = 1;
		d = 8'hB3;

		// Wait 100 ns for global reset to finish
		#15;
        en = 1;
		d = 8'h45;

		// Wait 100 ns for global reset to finish
		#18;
		en = 0;
		d = 8'h93;

		// Wait 100 ns for global reset to finish
		#15;
		// Add stimulus here

	end
      
endmodule
