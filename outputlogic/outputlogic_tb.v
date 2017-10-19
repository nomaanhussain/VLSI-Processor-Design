`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:11:41 09/01/2017
// Design Name:   outputlogic
// Module Name:   C:/Users/AS/Desktop/VLSI project/outputlogic/outputlogic_tb.v
// Project Name:  outputlogic
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: outputlogic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module outputlogic_tb;

	// Inputs
	reg [3:0] state;

	// Outputs
	wire memread;
	wire memwrite;
	wire alusrca;
	wire memtoreg;
	wire iord;
	wire regwrite;
	wire regdst;
	wire [1:0] pcsrc;
	wire [1:0] alusrcb;
	wire [3:0] irwrite;
	wire pcwrite;
	wire branch;
	wire [1:0] aluop;

	// Instantiate the Unit Under Test (UUT)
	outputlogic uut (
		.state(state), 
		.memread(memread), 
		.memwrite(memwrite), 
		.alusrca(alusrca), 
		.memtoreg(memtoreg), 
		.iord(iord), 
		.regwrite(regwrite), 
		.regdst(regdst), 
		.pcsrc(pcsrc), 
		.alusrcb(alusrcb), 
		.irwrite(irwrite), 
		.pcwrite(pcwrite), 
		.branch(branch), 
		.aluop(aluop)
	);

	initial begin
		// Initialize Inputs
		state = 4;
		#100;
		state = 5;
		// Wait 100 ns for global reset to finish
		#100;
      state = 6;
		#100;
		state = 10;
		#100;
		// Add stimulus here

	end
      
endmodule

