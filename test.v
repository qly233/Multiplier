`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:15:20 04/26/2022
// Design Name:   top
// Module Name:   D:/zuchengyuanli/chengfaqi/test.v
// Project Name:  chengfaqi
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
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
	reg [5:0] A;
	reg [5:0] B;
	reg sw;
	reg clk;
	reg reset;

	// Outputs
	wire [11:0] led;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.A(A), 
		.B(B), 
		.sw(sw), 
		.clk(clk), 
		.reset(reset), 
		.led(led)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		sw = 0;
		clk = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#100;
      A = 5'b11111;
		B = 5'b11111;
		sw = 1;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A = 5'b11111;
		B = 5'b11111;
		sw = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A = 5'b11001;
		B = 5'b11111;
		sw = 1;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here
		
	end
   always #50 clk = ~clk;   
endmodule

