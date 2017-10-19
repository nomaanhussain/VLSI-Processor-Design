`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:59:12 09/01/2017
// Design Name:   memory
// Module Name:   C:/Users/AS/Desktop/VLSI project/memory/memory_tb.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module memory_tb;

	// Inputs
	reg clk;
	reg memwr;
	reg [7:0] adr;
	reg [7:0] wrdata;

	// Outputs
	wire [7:0] memdata;

	// Instantiate the Unit Under Test (UUT)
	memory uut (
		.clk(clk), 
		.memwr(memwr), 
		.adr(adr), 
		.wrdata(wrdata), 
		.memdata(memdata)
	);
	always 

	 #10clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		memwr = 0;
		adr = 0;
		wrdata = 0;
		
		
		#20;
	adr = 1;
  #20;
  adr = 2;

  #20;
  adr = 3;

  #20;
  adr = 1;
 
  #20;
  memwr=1;
  wrdata= 8'h44;
  adr=0;

  #20;
  adr=1;

  #20;
  adr=2;

  #20;
  adr=3;

  #20;
  memwr=0;
  adr=0;
        
		// Add stimulus here

	end
      
endmodule

