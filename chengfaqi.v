`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:38:47 04/26/2022 
// Design Name: 
// Module Name:    chengfaqi 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FA(A,B,C1,F,C2);
	input A,B,C1;
	output F;
	output C2;
	wire X;
	xor XU1(X,A,B);
	xor XU2(F,X,C1);
	wire Y,Z,W;
	and AU1(Y,A,B);
	or AU2(Z,A,B);
	and AU3(W,Z,C1);
	or AU4(C2,Y,W);
endmodule

module chengfa(A,B,led);
	input[4:0] A;
	input[4:0] B;
	output[9:0] led;
	wire[24:0] C;
	wire[19:0] P;
	wire[11:0] S;
	assign C[0]=A[0]*B[0],
			 C[1]=A[1]*B[0],
			 C[2]=A[2]*B[0],
			 C[3]=A[3]*B[0],
			 C[4]=A[4]*B[0];
	assign C[5]=A[0]*B[1],
			 C[6]=A[1]*B[1],
			 C[7]=A[2]*B[1],
			 C[8]=A[3]*B[1],
			 C[9]=A[4]*B[1];
	assign C[10]=A[0]*B[2],
			 C[11]=A[1]*B[2],
			 C[12]=A[2]*B[2],
			 C[13]=A[3]*B[2],
			 C[14]=A[4]*B[2];
	assign C[15]=A[0]*B[3],
			 C[16]=A[1]*B[3],
			 C[17]=A[2]*B[3],
			 C[18]=A[3]*B[3],
			 C[19]=A[4]*B[3];
	assign C[20]=A[0]*B[4],
			 C[21]=A[1]*B[4],
			 C[22]=A[2]*B[4],
			 C[23]=A[3]*B[4],
			 C[24]=A[4]*B[4];
	
	assign led[0]=C[0];
	FA fa1(C[1],C[5],0,led[1],P[0]);
	FA fa2(C[2],C[6],0,S[0],P[1]);
	FA fa3(S[0],C[10],P[0],led[2],P[2]);
	FA fa4(C[3],C[7],0,S[1],P[3]);
	FA fa5(S[1],C[11],P[1],S[2],P[4]);
	FA fa6(S[2],C[15],P[2],led[3],P[5]);
	FA fa7(C[4],C[8],0,S[3],P[6]);
	FA fa8(S[3],C[12],P[3],S[4],P[7]);
	FA fa9(S[4],C[16],P[4],S[5],P[8]);
	FA fa10(S[5],C[20],P[5],led[4],P[9]);
	FA fa11(C[9],C[13],P[6],S[6],P[10]);
	FA fa12(S[6],C[17],P[7],S[7],P[11]);
	FA fa13(S[7],C[21],P[8],S[8],P[12]);
	FA fa14(S[8],0,P[9],led[5],P[13]);
	FA fa15(C[14],C[18],P[10],S[9],P[14]);
	FA fa16(S[9],C[22],P[11],S[10],P[15]);
	FA fa17(S[10],P[13],P[12],led[6],P[16]);
	FA fa18(C[19],C[23],P[14],S[11],P[17]);
	FA fa19(S[11],P[16],P[15],led[7],P[18]);
	FA fa20(C[24],P[18],P[17],led[8],P[19]);
	assign led[9] = P[19];
endmodule

module top(A,B,sw,clk,reset,led);
	input[5:0] A;
	input[5:0] B;
	input sw,clk,reset;
	output reg[11:0] led;
	wire[9:0] temp;
	chengfa cf(A[4:0],B[4:0],temp);	
	always@(reset or sw or A or B or clk)
	begin
	led[9:0]<=temp;
	if(reset==1'b1)
	begin
		led<=12'b0;
	end
	if(sw==1'b1)
	begin
		led[10]<=1'b0;
		led[11]<=A[5]^B[5];
	end
	end
	
endmodule
