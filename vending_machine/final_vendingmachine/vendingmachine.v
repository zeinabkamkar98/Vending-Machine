`timescale 1ns / 1ps

module vendingmachine(code,count,money,posibility,remaining);

	input [1:0]code;
	input [2:0]count;
	input [3:0]money;
	
	output reg 		  posibility;
	output reg [3:0] remaining;
	
	reg [7:0]mem[3:0];
	
	reg [1:0]i;//for find product

	initial
	begin
	$readmemb("data.txt",mem);
	end
	
	always @(money or code or count) begin
			
			$display(" list of product:\n product code:%d ,Number of product available:%d, price:%d\n",mem[0][7:6],mem[0][5:3],mem[0][2:0]);
			$display(" product code:%d ,Number of product available:%d ,price:%d\n",mem[1][7:6],mem[1][5:3],mem[1][2:0]);
			$display(" product code:%d ,Number of product available:%d ,price:%d\n",mem[2][7:6],mem[0][5:3],mem[2][2:0]);
			$display(" product code:%d ,Number of product available:%d ,price:%d\n",mem[3][7:6],mem[0][5:3],mem[3][2:0]);

		   i=2'b00;
        
			if(mem[i][7:6]!=code ) begin
				i=i+1;
				if(mem[i][7:6]!=code)begin
					i=i+1;
					if(mem[i][7:6]!=code)begin
						i=i+1;
					end
				end
			end
			
		 if(count <= mem[i][5:3] &&  money> (count * mem[i][2:0]))begin
					
				posibility=1'b1;
				remaining=money-(count*mem[i][2:0]);
				mem[i][5:3]=mem[i][5:3]-count;

			end 
			
	 	   else begin
			posibility=1'b0;
			remaining=money;
			end

			$display(" money=%d , code=%d , count=%d \t posibilty:%d remain:%d",money,code,count,posibility,remaining);

		end
		  
	
endmodule
