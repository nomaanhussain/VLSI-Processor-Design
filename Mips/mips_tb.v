`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:23:51 09/03/2017
// Design Name:   mips
// Module Name:   E:/TE/Winter/VLSI/finalProj/Mips/mips_tb.v
// Project Name:  Mips
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_tb;

	// Inputs
	reg clk;
	reg reset;
	
	reg [7:0] memdata;

	// Outputs
	
	wire memread;
	wire memwrite;
	wire [7:0] adr;
	wire [7:0] writedata;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset),
		.memdata(memdata),
		.memread(memread), 
		.memwrite(memwrite), 
		.adr(adr), 
		.writedata(writedata)
	);
always begin
#5
clk=~clk;
end
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		memdata = 8'h44;

		// Wait 100 ns for global reset to finish
		#10;
		reset=0;
		memdata = 8'h00;
		#10;
		
		reset=0;
		memdata = 8'h02;
		#10;
		reset=0;
		memdata = 8'h80;
		#10;
		memdata = 8'ha0;
		#10;
		#10;
		
		
		
        
		// Add stimulus here

	end
      
endmodule