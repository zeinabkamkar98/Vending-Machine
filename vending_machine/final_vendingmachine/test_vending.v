`timescale 1ns / 1ps



module test_vending;

	// Inputs
	reg [1:0] code;
	reg [2:0] count;
	reg [3:0] money;

	// Outputs
	wire posibility;
	wire [3:0] remaining;

	// Instantiate the Unit Under Test (UUT)
	vendingmachine uut (
		.code(code), 
		.count(count), 
		.money(money), 
		.posibility(posibility), 
		.remaining(remaining)
	);

	initial begin
		// Initialize Inputs
		code = 0;
		count = 0;
		money = 0;

		// Wait 100 ns for global reset to finish
		#100;

		code = 2'b01;
		count = 3'b001;
		money = 4'b1111;
		// Add stimulus here

	end
      
endmodule

