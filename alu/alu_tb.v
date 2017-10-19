`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:04:02 09/01/2017
// Design Name:   alu
// Module Name:   C:/Users/AS/Desktop/VLSI project/alu/alu_tb.v
// Project Name:  alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [7:0] ina;
	reg [7:0] inb;
	reg [2:0] aluCtrl;

	// Outputs
	wire [7:0] out;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.ina(ina), 
		.inb(inb), 
		.aluCtrl(aluCtrl), 
		.out(out), 
		.zero(zero)
	);

	initial begin
		// Initialize Inputs
		ina = 8'h23;
		inb = 8'hFF;
		aluCtrl = 3'b010;

		// Wait 100 ns for global reset to finish
		#100;
		ina = 8'h44;
		inb = 8'h18;
		aluCtrl = 3'b110;

		// Wait 100 ns for global reset to finish
		#100;
		ina = 8'h23;
		inb = 8'hDF;
		aluCtrl = 3'b000;

		// Wait 100 ns for global reset to finish
		#100;
		ina = 8'h23;
		inb = 8'hFA;
		aluCtrl = 3'b001;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

