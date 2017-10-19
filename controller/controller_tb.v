`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:01:25 09/01/2017
// Design Name:   controller
// Module Name:   C:/Users/AS/Desktop/VLSI project/controller/controller_tb.v
// Project Name:  controller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module controller_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [5:0] op;
	reg [5:0] funct;
	reg zero;

	// Outputs
	wire memread;
	wire memwrite;
	wire alusrca;
	wire memtoreg;
	wire iord;
	wire pcen;
	wire regwrite;
	wire regdst;
	wire [1:0] pcsrc;
	wire [1:0] alusrcb;
	wire [2:0] aluCtrl;
	wire [3:0] irwrite;

	// Instantiate the Unit Under Test (UUT)
	controller uut (
		.clk(clk), 
		.reset(reset), 
		.op(op), 
		.funct(funct), 
		.zero(zero), 
		.memread(memread), 
		.memwrite(memwrite), 
		.alusrca(alusrca), 
		.memtoreg(memtoreg), 
		.iord(iord), 
		.pcen(pcen), 
		.regwrite(regwrite), 
		.regdst(regdst), 
		.pcsrc(pcsrc), 
		.alusrcb(alusrcb), 
		.aluCtrl(aluCtrl), 
		.irwrite(irwrite)
	);
	always 
	#5
	clk = ~ clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		op = 6'h20;
		funct = 6'h20;
		zero = 0;

		// Wait 100 ns for global reset to finish
		#10;
      op = 0;
		funct = 0;      
		reset = 1;
		#10;
		
		op = 2;
		reset = 0; 
		#10;
		// Add stimulus here

	end
      
endmodule

