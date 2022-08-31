`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:18:11 05/23/2022
// Design Name:   R_I_J
// Module Name:   D:/zuchengyuanli/rij/test.v
// Project Name:  rij
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: R_I_J
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg rst;
	reg clk;
	reg clkm;

	// Outputs
	wire zf;
	wire of;
	wire [31:0] F;
	wire [31:0] M_R_Data;
	wire [31:0] PC;

	// Instantiate the Unit Under Test (UUT)
	R_I_J uut (
		.rst(rst), 
		.clk(clk), 
		.clkm(clkm), 
		.zf(zf), 
		.of(of), 
		.F(F), 
		.M_R_Data(M_R_Data), 
		.PC(PC)
	);

	initial begin
		// Initialize Inputs
		rst = 0;
		clk = 0;
		clkm = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      always #2 clkm = ~clkm;
		always #10 clk=~clk;
endmodule

