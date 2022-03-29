`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:38:37 06/30/2019
// Design Name:   vendingmachine
// Module Name:   E:/verilog/final_vendingmachine/testvending.v
// Project Name:  final_vendingmachine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vendingmachine
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testvending;

	// Inputs
	reg [1:0] code;
	reg [2:0] count;
	reg [7:0] temp;
	reg [3:0] money;

	// Outputs
	wire posibility;
	wire [3:0] remaining;

	// Instantiate the Unit Under Test (UUT)
	vendingmachine uut (
		.code(code), 
		.count(count), 
		.temp(temp), 
		.money(money), 
		.posibility(posibility), 
		.remaining(remaining)
	);

	initial begin
		// Initialize Inputs
		code = 0;
		count = 0;
		temp = 0;
		money = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		code = 2'b00;
		count =3'b001;
		temp = 8'b00111001;
		money = 1111;
		// Add stimulus here

	end
      
endmodule

