`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:50:17 08/31/2017
// Design Name:   ff_en_r
// Module Name:   E:/TE/Winter/VLSI/finalProj/ff_en_r/ff_en_r_tb.v
// Project Name:  ff_en_r
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ff_en_r
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ff_en_r_tb;

	// Inputs
	reg en;
	reg clk;
	reg reset;
	reg [7:0] d;

	// Outputs
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	ff_en_r uut (
		.en(en), 
		.clk(clk), 
		.reset(reset), 
		.d(d), 
		.q(q)
	);

always begin
#10
clk=~clk;
end
	initial begin
		// Initialize Inputs
		en = 0;
		clk = 0;
		reset = 1;
		d = 8'h33;

		// Wait 100 ns for global reset to finish
		#25;
        en = 1;
		clk = 0;
		reset = 0;
		d = 8'hCC;

		// Wait 100 ns for global reset to finish
		#25;
		 en = 1;
		clk = 0;
		reset = 1;
		d = 8'hAF;

		// Wait 100 ns for global reset to finish
		#25;
		// Add stimulus here

	end
      
endmodule

