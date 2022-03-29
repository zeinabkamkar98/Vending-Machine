`timescale 1ns / 1ps

module vending_test;

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
        
		// Add stimulus here
		
		#100;
		
		code = 0;
		count = 1;
		money = 15;

		#100;
		
		code = 1;
		count = 1;
		money = 15;

		#100;
		
		code = 2;
		count = 1;
		money = 15;
		
		#100;
		
		code = 3;
		count = 1;
		money = 15;
		
	end
      
endmodule

