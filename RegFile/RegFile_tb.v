`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:53:10 09/02/2017
// Design Name:   RegFile
// Module Name:   E:/TE/Winter/VLSI/finalProj/RegFile/RegFile_tb.v
// Project Name:  RegFile
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RegFile_tb;

	// Inputs
	reg clk;
	reg regwrite;
	
	reg [2:0] ra1;
	reg [2:0] ra2;
	reg [2:0] wa;
	reg [7:0] wd;

	// Outputs
	wire [7:0] rd1;
	wire [7:0] rd2;
	

	// Instantiate the Unit Under Test (UUT)
	RegFile uut (
		.clk(clk), 
		.regwrite(regwrite), 
		.ra1(ra1), 
		.ra2(ra2), 
		.wa(wa), 
		.wd(wd), 
		.rd1(rd1), 
		.rd2(rd2) 
		
	);
always begin
#5
clk=~clk;
end

	initial begin
		
		// Initialize Inputs
		clk = 0;
		regwrite = 0;
		ra1 = 0;
		ra2 = 0;
		wa = 0;
		wd = 0;

		// Wait 100 ns for global reset to finish
		#10;
      regwrite = 1;
		ra1 = 1;
		ra2 = 1;
		wa = 1;
		wd = 0;

		// Wait 100 ns for global reset to finish
		#10;  
		regwrite = 1;
		ra1 = 1;
		ra2 = 1;
		wa = 1;
		wd = 67;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

