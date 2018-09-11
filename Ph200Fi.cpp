#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// Output
void Cout_From_Mat(char x[][2560],int &q,int &OutputFlag,char Numbers[][100])
{
	if (OutputFlag==0)
	{
		system("cls");
		for (int r=0; r<50;r++)
		{
			for (int c=q; c<q+100;c++)
			{
				cout<<x[r][c];
			}
		}
		cout.flush();
	}
	if (OutputFlag==1)
	{
		system("cls");
		for (int r=0; r<50;r++)
		{
			for (int c=0; c<100;c++)
			{
				cout<<Numbers[r][c];
			}
		}
		cout.flush();
	}

		
}
// Clouds
void Draw_Clouds (char x[][2560], int r,int c)
{
	for (int i=0;i<76;i++)
	{
	// Row Zero
	x[r][c+9]='.';
	x[r][c+10]='-';
	x[r][c+11]='~';
	x[r][c+12]='~';

	// Row One
	x[r+1][c]='.';
	x[r+1][c+3]='-';
	x[r+1][c+4]='~';
	x[r+1][c+5]='~';
	x[r+1][c+6]='-';
	x[r+1][c+7]='(';
	x[r+1][c+15]=')';
	x[r+1][c+16]='_';
	x[r+1][c+18]='_';
	// Row Two
	x[r+2][c+20]='~';
	x[r+2][c+21]='-';
	x[r+2][c+22]='.';
	x[r+2][c-2]='/';
	// Row Three
	x[r+3][c-3]='|';
	x[r+3][c+23]='\\';
	// Row Four
	x[r+4][c-2]='\\';
	x[r+4][c+23]=':';
	// Row Five
	x[r+5][c-1]='~';
	x[r+5][c]='-';
	x[r+5][c+2]='.';
	x[r+5][c+2]='_';
	x[r+5][c+4]=',';
	x[r+5][c+5]='.';
	x[r+5][c+7]=',';
	x[r+5][c+8]='.';
	x[r+5][c+9]=',';
	x[r+5][c+10]='.';
	x[r+5][c+11]=',';
	x[r+5][c+12]='.';
	x[r+5][c+13]=',';
	x[r+5][c+15]=',';
	x[r+5][c+16]='.';
	x[r+5][c+17]='.';
	x[r+5][c+18]='-';
	x[r+5][c+19]='~';
	x[r+5][c+22]='.';
	// Row Six
	x[r+6][c+14]='.';
	x[r+6][c+5]='.';
	c+=33;
	}

	

}

// Background For Castle
void Draw_Background (char x[][2560])
{
	int c;
	int r;
	for (c=600;c<680;c++)
	{
	x[0][c]='*';
	}
	for (r=1;r<24;r+=4)
	{
	x[r][610]='|';
	}
	for (r=1;r<24;r+=4)
	{
	for (c=630;c<680;c+=20)
	{
		x[r][c]='|';
	}
	for (c=601;c<610;c++)
	{
		x[r+1][c]='_';
	}
	int ct=0;
	for (c=610;c<680;c++)
	{
		if (ct==19||c==410)
		{
			
		x[r+1][c]='|';
		c++;
		ct=0;
		}
		ct++;
		x[r+1][c]='_';

	}
	for (c=600;c<680;c+=20)
	{
		x[r+2][c]='|';
	}
	ct=0;
	for (c=600;c<680;c++)
	{
		if (ct==19||c==600)
		{
		x[r+3][c]='|';
		c++;
		ct=0;
		}
		ct++;
		x[r+3][c]='_';
	}
	}
	// Ground
	for (r=25;r<50;r+=2)
	{
	for (c=600;c<604;c++)
	{
	x[r][c]='_';
	}
	x[r][604]='/';
	int ct=0;
	for (c=605;c<680;c++)
	{
		if (ct==6)
		{
			x[r][c]='/';
			c++;
			ct=0;
		}
	x[r][c]='_';
	ct++;
	}
	ct=0;
	for (c=600;c<680;c++)
	{
	if (ct==6||c==600)
	{
	c++;
	ct=0;
	}
	x[r+1][c]='_';
	ct++;


	}

	}











	
}

// Drawing Numbers
void Draw_Numbers(char N[][100],char **Pnumbers,int &S1F,int &S2F,int &S3F,int c)
{
	// Squares
	for (int i=15;i<85;i++)
	{
		N[20][i]=205;
	}
	N[20][85]=187;
	N[20][15]=201;
	for (int i=21;i<31;i++)
	{
		N[i][85]=186;
		N[i][15]=186;
		N[i][37]=186;
		N[i][62]=186;
	}
	N[20][37]=203;
	N[20][62]=203;
	for (int i=15;i<85;i++)
	{
		N[31][i]=205;
	}
		N[31][37]=202;
	N[31][62]=202;

	N[31][15]=200;
	N[31][85]=188;
	// Numbers for Square 1
	
	// No.0
	if (S1F==0)
	{
	// Row 0
	N[23][c]=*Pnumbers[0];
	N[23][c+1]=*Pnumbers[0];
	N[23][c+2]=*Pnumbers[0];
	N[23][c+3]=*Pnumbers[0];
	// Row 1
	N[24][c-1]=*Pnumbers[0];
	N[24][c]=*Pnumbers[0];
	N[24][c+3]=*Pnumbers[0];
	N[24][c+4]=*Pnumbers[0];
	// Row 2
	N[25][c-1]=*Pnumbers[0];
	N[25][c]=*Pnumbers[0];
	N[25][c+3]=*Pnumbers[0];
	N[25][c+4]=*Pnumbers[0];
	// Row 3
	N[26][c-1]=*Pnumbers[0];
	N[26][c]=*Pnumbers[0];
	N[26][c+3]=*Pnumbers[0];
	N[26][c+4]=*Pnumbers[0];
	// Row 4
	N[27][c]=*Pnumbers[0];
	N[27][c+1]=*Pnumbers[0];
	N[27][c+2]=*Pnumbers[0];
	N[27][c+3]=*Pnumbers[0];
	}
	// No.1
	if (S1F==1)
	{
	N[23][c]=*Pnumbers[1];
	N[23][c+1]=*Pnumbers[1];
	N[23][c+2]=*Pnumbers[1];
	N[23][c+3]=*Pnumbers[1];

	N[24][c+2]=*Pnumbers[1];
	N[24][c+3]=*Pnumbers[1];

	N[25][c+2]=*Pnumbers[1];
	N[25][c+3]=*Pnumbers[1];

	N[26][c+2]=*Pnumbers[1];
	N[26][c+3]=*Pnumbers[1];

	N[27][c]=*Pnumbers[1];
	N[27][c+1]=*Pnumbers[1];
	N[27][c+2]=*Pnumbers[1];
	N[27][c+3]=*Pnumbers[1];
	N[27][c+4]=*Pnumbers[1];
	N[27][c+5]=*Pnumbers[1];
	}

	if (S1F==2)
	{
	// Row 0
	N[23][c]=*Pnumbers[2];
	N[23][c+1]=*Pnumbers[2];
	N[23][c+2]=*Pnumbers[2];
	N[23][c+3]=*Pnumbers[2];
	// Row 1
	N[24][c-1]=*Pnumbers[2];
	N[24][c]=*Pnumbers[2];
	N[24][c+3]=*Pnumbers[2];
	N[24][c+4]=*Pnumbers[2];
	// Row 2
	N[25][c+2]=*Pnumbers[2];
	N[25][c+3]=*Pnumbers[2];
	// Row 3
	N[26][c+1]=*Pnumbers[2];
	N[26][c+2]=*Pnumbers[2];
	// Row 4
	N[27][c-1]=*Pnumbers[2];
	N[27][c]=*Pnumbers[2];
	N[27][c+1]=*Pnumbers[2];
	N[27][c+2]=*Pnumbers[2];
	N[27][c+3]=*Pnumbers[2];
	N[27][c+4]=*Pnumbers[2];
	}
	// No.4
	if (S1F==3)
	{
	// Row 0
	N[23][c]=*Pnumbers[3];
	N[23][c+1]=*Pnumbers[3];
	N[23][c+2]=*Pnumbers[3];
	N[23][c+3]=*Pnumbers[3];
	// Row 1
	N[24][c-1]=*Pnumbers[3];
	N[24][c]=*Pnumbers[3];
	N[24][c+3]=*Pnumbers[3];
	N[24][c+4]=*Pnumbers[3];
	// Row 2
	N[25][c+2]=*Pnumbers[3];
	N[25][c+3]=*Pnumbers[3];
	N[25][c+4]=*Pnumbers[3];
	// Row 3
	N[26][c-1]=*Pnumbers[3];
	N[26][c]=*Pnumbers[3];
	N[26][c+3]=*Pnumbers[3];
	N[26][c+4]=*Pnumbers[3];
	// Row 4
	N[27][c]=*Pnumbers[3];
	N[27][c+1]=*Pnumbers[3];
	N[27][c+2]=*Pnumbers[3];
	N[27][c+3]=*Pnumbers[3];
	}
	// No.4
	if (S1F==4)
	{
		// Row 0
		N[23][c-1]=*Pnumbers[4];
		N[23][c]=*Pnumbers[4];
		N[23][c+3]=*Pnumbers[4];
	    N[23][c+4]=*Pnumbers[4];
		// Row 1
		N[24][c-1]=*Pnumbers[4];
		N[24][c]=*Pnumbers[4];
		N[24][c+3]=*Pnumbers[4];
		N[24][c+4]=*Pnumbers[4];
		// Row 2
		N[25][c-1]=*Pnumbers[4];
		N[25][c]=*Pnumbers[4];
		N[25][c+1]=*Pnumbers[4];
		N[25][c+2]=*Pnumbers[4];
		N[25][c+3]=*Pnumbers[4];
		N[25][c+4]=*Pnumbers[4];
		// row 3
		N[26][c+3]=*Pnumbers[4];
		N[26][c+4]=*Pnumbers[4];
		// Row 4
		N[27][c+3]=*Pnumbers[4];
		N[27][c+4]=*Pnumbers[4];


	}
	// No.5
	if (S1F==5)
	{
	// Row 0
		
	N[23][c-1]=*Pnumbers[5];
	N[23][c]=*Pnumbers[5];
	N[23][c+1]=*Pnumbers[5];
	N[23][c+2]=*Pnumbers[5];
	N[23][c+3]=*Pnumbers[5];
	N[23][c+4]=*Pnumbers[5];
	// Row 1
	N[24][c-1]=*Pnumbers[5];
	N[24][c]=*Pnumbers[5];
	// Row 2
	N[25][c-1]=*Pnumbers[5];
	N[25][c]=*Pnumbers[5];
	N[25][c+1]=*Pnumbers[5];
	N[25][c+2]=*Pnumbers[5];
	N[25][c+3]=*Pnumbers[5];
	// Row 3
	N[26][c+3]=*Pnumbers[5];
	N[26][c+4]=*Pnumbers[5];
	// Row 4
	N[27][c-1]=*Pnumbers[5];
	N[27][c]=*Pnumbers[5];
	N[27][c+1]=*Pnumbers[5];
	N[27][c+2]=*Pnumbers[5];
	N[27][c+3]=*Pnumbers[5];
	}
	// No.6
	if (S1F==6)
	{
	N[23][c]=*Pnumbers[6];
	N[23][c+1]=*Pnumbers[6];
	N[23][c+2]=*Pnumbers[6];
	N[23][c+3]=*Pnumbers[6];
	
	N[24][c-1]=*Pnumbers[6];
	N[24][c]=*Pnumbers[6];
	
	N[25][c-1]=*Pnumbers[6];
	N[25][c]=*Pnumbers[6];
	N[25][c+1]=*Pnumbers[6];
	N[25][c+2]=*Pnumbers[6];
	N[25][c+3]=*Pnumbers[6];

	N[26][c-1]=*Pnumbers[6];
	N[26][c]=*Pnumbers[6];

	N[26][c+3]=*Pnumbers[6];
	N[26][c+4]=*Pnumbers[6];

	N[27][c]=*Pnumbers[6];
	N[27][c+1]=*Pnumbers[6];
	N[27][c+2]=*Pnumbers[6];
	N[27][c+3]=*Pnumbers[6];

	}
	// No.7
	if (S1F==7)
	{
	N[23][c-1]=*Pnumbers[7];
	N[23][c]=*Pnumbers[7];
	N[23][c+1]=*Pnumbers[7];
	N[23][c+2]=*Pnumbers[7];
	N[23][c+3]=*Pnumbers[7];
	N[23][c+4]=*Pnumbers[7];

	
	N[24][c+2]=*Pnumbers[7];
	N[24][c+3]=*Pnumbers[7];

	
	N[25][c+1]=*Pnumbers[7];
	N[25][c+2]=*Pnumbers[7];

	
	N[26][c]=*Pnumbers[7];
	N[26][c+1]=*Pnumbers[7];

	
	N[27][c-1]=*Pnumbers[7];
	N[27][c]=*Pnumbers[7];

	}
	// No.8
	if (S1F==8)
	{
	N[23][c]=*Pnumbers[8];
	N[23][c+1]=*Pnumbers[8];
	N[23][c+2]=*Pnumbers[8];
	N[23][c+3]=*Pnumbers[8];
	
	N[24][c-1]=*Pnumbers[8];
	N[24][c]=*Pnumbers[8];
	N[24][c+3]=*Pnumbers[8];
	N[24][c+4]=*Pnumbers[8];
	
	N[25][c]=*Pnumbers[8];
	N[25][c+1]=*Pnumbers[8];
	N[25][c+2]=*Pnumbers[8];
	N[25][c+3]=*Pnumbers[8];
	
	
	N[26][c-1]=*Pnumbers[8];
	N[26][c]=*Pnumbers[8];
	N[26][c+3]=*Pnumbers[8];
	N[26][c+4]=*Pnumbers[8];

	N[27][c]=*Pnumbers[8];
	N[27][c+1]=*Pnumbers[8];
	N[27][c+2]=*Pnumbers[8];
	N[27][c+3]=*Pnumbers[8];
	

	}
	// No.9
	if (S1F==9)
	{
		
	N[23][c]=*Pnumbers[9];
	N[23][c+1]=*Pnumbers[9];
	N[23][c+2]=*Pnumbers[9];
	N[23][c+3]=*Pnumbers[9];
	
	
	N[24][c-1]=*Pnumbers[9];
	N[24][c]=*Pnumbers[9];
	N[24][c+3]=*Pnumbers[9];
	N[24][c+4]=*Pnumbers[9];
	
	N[25][c]=*Pnumbers[9];
	N[25][c+1]=*Pnumbers[9];
	N[25][c+2]=*Pnumbers[9];
	N[25][c+3]=*Pnumbers[9];
	N[25][c+4]=*Pnumbers[9];

	N[26][c+3]=*Pnumbers[9];
	N[26][c+4]=*Pnumbers[9];
	
		
	N[27][c]=*Pnumbers[9];
	N[27][c+1]=*Pnumbers[9];
	N[27][c+2]=*Pnumbers[9];
	N[27][c+3]=*Pnumbers[9];
	}
	
	

	// Numbers For Square 2
	c+=23;
	// No.0
	if (S2F==0)
	{
	// Row 0
	N[23][c]=*Pnumbers[0];
	N[23][c+1]=*Pnumbers[0];
	N[23][c+2]=*Pnumbers[0];
	N[23][c+3]=*Pnumbers[0];
	// Row 1
	N[24][c-1]=*Pnumbers[0];
	N[24][c]=*Pnumbers[0];
	N[24][c+3]=*Pnumbers[0];
	N[24][c+4]=*Pnumbers[0];
	// Row 2
	N[25][c-1]=*Pnumbers[0];
	N[25][c]=*Pnumbers[0];
	N[25][c+3]=*Pnumbers[0];
	N[25][c+4]=*Pnumbers[0];
	// Row 3
	N[26][c-1]=*Pnumbers[0];
	N[26][c]=*Pnumbers[0];
	N[26][c+3]=*Pnumbers[0];
	N[26][c+4]=*Pnumbers[0];
	// Row 4
	N[27][c]=*Pnumbers[0];
	N[27][c+1]=*Pnumbers[0];
	N[27][c+2]=*Pnumbers[0];
	N[27][c+3]=*Pnumbers[0];
	}
	// No.1
	if (S2F==1)
	{
	N[23][c]=*Pnumbers[1];
	N[23][c+1]=*Pnumbers[1];
	N[23][c+2]=*Pnumbers[1];
	N[23][c+3]=*Pnumbers[1];

	N[24][c+2]=*Pnumbers[1];
	N[24][c+3]=*Pnumbers[1];

	N[25][c+2]=*Pnumbers[1];
	N[25][c+3]=*Pnumbers[1];

	N[26][c+2]=*Pnumbers[1];
	N[26][c+3]=*Pnumbers[1];

	N[27][c]=*Pnumbers[1];
	N[27][c+1]=*Pnumbers[1];
	N[27][c+2]=*Pnumbers[1];
	N[27][c+3]=*Pnumbers[1];
	N[27][c+4]=*Pnumbers[1];
	N[27][c+5]=*Pnumbers[1];
	}

	if (S2F==2)
	{
	// Row 0
	N[23][c]=*Pnumbers[2];
	N[23][c+1]=*Pnumbers[2];
	N[23][c+2]=*Pnumbers[2];
	N[23][c+3]=*Pnumbers[2];
	// Row 1
	N[24][c-1]=*Pnumbers[2];
	N[24][c]=*Pnumbers[2];
	N[24][c+3]=*Pnumbers[2];
	N[24][c+4]=*Pnumbers[2];
	// Row 2
	N[25][c+2]=*Pnumbers[2];
	N[25][c+3]=*Pnumbers[2];
	// Row 3
	N[26][c+1]=*Pnumbers[2];
	N[26][c+2]=*Pnumbers[2];
	// Row 4
	N[27][c-1]=*Pnumbers[2];
	N[27][c]=*Pnumbers[2];
	N[27][c+1]=*Pnumbers[2];
	N[27][c+2]=*Pnumbers[2];
	N[27][c+3]=*Pnumbers[2];
	N[27][c+4]=*Pnumbers[2];
	}
	// No.4
	if (S2F==3)
	{
	// Row 0
	N[23][c]=*Pnumbers[3];
	N[23][c+1]=*Pnumbers[3];
	N[23][c+2]=*Pnumbers[3];
	N[23][c+3]=*Pnumbers[3];
	// Row 1
	N[24][c-1]=*Pnumbers[3];
	N[24][c]=*Pnumbers[3];
	N[24][c+3]=*Pnumbers[3];
	N[24][c+4]=*Pnumbers[3];
	// Row 2
	N[25][c+2]=*Pnumbers[3];
	N[25][c+3]=*Pnumbers[3];
	N[25][c+4]=*Pnumbers[3];
	// Row 3
	N[26][c-1]=*Pnumbers[3];
	N[26][c]=*Pnumbers[3];
	N[26][c+3]=*Pnumbers[3];
	N[26][c+4]=*Pnumbers[3];
	// Row 4
	N[27][c]=*Pnumbers[3];
	N[27][c+1]=*Pnumbers[3];
	N[27][c+2]=*Pnumbers[3];
	N[27][c+3]=*Pnumbers[3];
	}
	// No.4
	if (S2F==4)
	{
		// Row 0
		N[23][c-1]=*Pnumbers[4];
		N[23][c]=*Pnumbers[4];
		N[23][c+3]=*Pnumbers[4];
	    N[23][c+4]=*Pnumbers[4];
		// Row 1
		N[24][c-1]=*Pnumbers[4];
		N[24][c]=*Pnumbers[4];
		N[24][c+3]=*Pnumbers[4];
		N[24][c+4]=*Pnumbers[4];
		// Row 2
		N[25][c-1]=*Pnumbers[4];
		N[25][c]=*Pnumbers[4];
		N[25][c+1]=*Pnumbers[4];
		N[25][c+2]=*Pnumbers[4];
		N[25][c+3]=*Pnumbers[4];
		N[25][c+4]=*Pnumbers[4];
		// row 3
		N[26][c+3]=*Pnumbers[4];
		N[26][c+4]=*Pnumbers[4];
		// Row 4
		N[27][c+3]=*Pnumbers[4];
		N[27][c+4]=*Pnumbers[4];


	}
	// No.5
	if (S2F==5)
	{
	// Row 0
		
	N[23][c-1]=*Pnumbers[5];
	N[23][c]=*Pnumbers[5];
	N[23][c+1]=*Pnumbers[5];
	N[23][c+2]=*Pnumbers[5];
	N[23][c+3]=*Pnumbers[5];
	N[23][c+4]=*Pnumbers[5];
	// Row 1
	N[24][c-1]=*Pnumbers[5];
	N[24][c]=*Pnumbers[5];
	// Row 2
	N[25][c-1]=*Pnumbers[5];
	N[25][c]=*Pnumbers[5];
	N[25][c+1]=*Pnumbers[5];
	N[25][c+2]=*Pnumbers[5];
	N[25][c+3]=*Pnumbers[5];
	// Row 3
	N[26][c+3]=*Pnumbers[5];
	N[26][c+4]=*Pnumbers[5];
	// Row 4
	N[27][c-1]=*Pnumbers[5];
	N[27][c]=*Pnumbers[5];
	N[27][c+1]=*Pnumbers[5];
	N[27][c+2]=*Pnumbers[5];
	N[27][c+3]=*Pnumbers[5];
	}
	// No.6
	if (S2F==6)
	{
	N[23][c]=*Pnumbers[6];
	N[23][c+1]=*Pnumbers[6];
	N[23][c+2]=*Pnumbers[6];
	N[23][c+3]=*Pnumbers[6];
	
	N[24][c-1]=*Pnumbers[6];
	N[24][c]=*Pnumbers[6];
	
	N[25][c-1]=*Pnumbers[6];
	N[25][c]=*Pnumbers[6];
	N[25][c+1]=*Pnumbers[6];
	N[25][c+2]=*Pnumbers[6];
	N[25][c+3]=*Pnumbers[6];

	N[26][c-1]=*Pnumbers[6];
	N[26][c]=*Pnumbers[6];

	N[26][c+3]=*Pnumbers[6];
	N[26][c+4]=*Pnumbers[6];

	N[27][c]=*Pnumbers[6];
	N[27][c+1]=*Pnumbers[6];
	N[27][c+2]=*Pnumbers[6];
	N[27][c+3]=*Pnumbers[6];

	}
	// No.7
	if (S2F==7)
	{
	N[23][c-1]=*Pnumbers[7];
	N[23][c]=*Pnumbers[7];
	N[23][c+1]=*Pnumbers[7];
	N[23][c+2]=*Pnumbers[7];
	N[23][c+3]=*Pnumbers[7];
	N[23][c+4]=*Pnumbers[7];

	
	N[24][c+2]=*Pnumbers[7];
	N[24][c+3]=*Pnumbers[7];

	
	N[25][c+1]=*Pnumbers[7];
	N[25][c+2]=*Pnumbers[7];

	
	N[26][c]=*Pnumbers[7];
	N[26][c+1]=*Pnumbers[7];

	
	N[27][c-1]=*Pnumbers[7];
	N[27][c]=*Pnumbers[7];

	}
	// No.8
	if (S2F==8)
	{
	N[23][c]=*Pnumbers[8];
	N[23][c+1]=*Pnumbers[8];
	N[23][c+2]=*Pnumbers[8];
	N[23][c+3]=*Pnumbers[8];
	
	N[24][c-1]=*Pnumbers[8];
	N[24][c]=*Pnumbers[8];
	N[24][c+3]=*Pnumbers[8];
	N[24][c+4]=*Pnumbers[8];
	
	N[25][c]=*Pnumbers[8];
	N[25][c+1]=*Pnumbers[8];
	N[25][c+2]=*Pnumbers[8];
	N[25][c+3]=*Pnumbers[8];

	
	N[26][c-1]=*Pnumbers[8];
	N[26][c]=*Pnumbers[8];
	N[26][c+3]=*Pnumbers[8];
	N[26][c+4]=*Pnumbers[8];

	N[27][c]=*Pnumbers[8];
	N[27][c+1]=*Pnumbers[8];
	N[27][c+2]=*Pnumbers[8];
	N[27][c+3]=*Pnumbers[8];
	

	}
	// No.9
	if (S2F==9)
	{
		
	N[23][c]=*Pnumbers[9];
	N[23][c+1]=*Pnumbers[9];
	N[23][c+2]=*Pnumbers[9];
	N[23][c+3]=*Pnumbers[9];
	
	
	N[24][c-1]=*Pnumbers[9];
	N[24][c]=*Pnumbers[9];
	N[24][c+3]=*Pnumbers[9];
	N[24][c+4]=*Pnumbers[9];
	
	N[25][c]=*Pnumbers[9];
	N[25][c+1]=*Pnumbers[9];
	N[25][c+2]=*Pnumbers[9];
	N[25][c+3]=*Pnumbers[9];
	N[25][c+4]=*Pnumbers[9];

	N[26][c+3]=*Pnumbers[9];
	N[26][c+4]=*Pnumbers[9];
	
		
	N[27][c]=*Pnumbers[9];
	N[27][c+1]=*Pnumbers[9];
	N[27][c+2]=*Pnumbers[9];
	N[27][c+3]=*Pnumbers[9];
	}
	
	c+=23;
	// Square 3
	
	// No.0
	if (S3F==0)
	{
	// Row 0
	N[23][c]=*Pnumbers[0];
	N[23][c+1]=*Pnumbers[0];
	N[23][c+2]=*Pnumbers[0];
	N[23][c+3]=*Pnumbers[0];
	// Row 1
	N[24][c-1]=*Pnumbers[0];
	N[24][c]=*Pnumbers[0];
	N[24][c+3]=*Pnumbers[0];
	N[24][c+4]=*Pnumbers[0];
	// Row 2
	N[25][c-1]=*Pnumbers[0];
	N[25][c]=*Pnumbers[0];
	N[25][c+3]=*Pnumbers[0];
	N[25][c+4]=*Pnumbers[0];
	// Row 3
	N[26][c-1]=*Pnumbers[0];
	N[26][c]=*Pnumbers[0];
	N[26][c+3]=*Pnumbers[0];
	N[26][c+4]=*Pnumbers[0];
	// Row 4
	N[27][c]=*Pnumbers[0];
	N[27][c+1]=*Pnumbers[0];
	N[27][c+2]=*Pnumbers[0];
	N[27][c+3]=*Pnumbers[0];
	}
	// No.1
	if (S3F==1)
	{
	N[23][c]=*Pnumbers[1];
	N[23][c+1]=*Pnumbers[1];
	N[23][c+2]=*Pnumbers[1];
	N[23][c+3]=*Pnumbers[1];

	N[24][c+2]=*Pnumbers[1];
	N[24][c+3]=*Pnumbers[1];

	N[25][c+2]=*Pnumbers[1];
	N[25][c+3]=*Pnumbers[1];

	N[26][c+2]=*Pnumbers[1];
	N[26][c+3]=*Pnumbers[1];

	N[27][c]=*Pnumbers[1];
	N[27][c+1]=*Pnumbers[1];
	N[27][c+2]=*Pnumbers[1];
	N[27][c+3]=*Pnumbers[1];
	N[27][c+4]=*Pnumbers[1];
	N[27][c+5]=*Pnumbers[1];
	}

	if (S3F==2)
	{
	// Row 0
	N[23][c]=*Pnumbers[2];
	N[23][c+1]=*Pnumbers[2];
	N[23][c+2]=*Pnumbers[2];
	N[23][c+3]=*Pnumbers[2];
	// Row 1
	N[24][c-1]=*Pnumbers[2];
	N[24][c]=*Pnumbers[2];
	N[24][c+3]=*Pnumbers[2];
	N[24][c+4]=*Pnumbers[2];
	// Row 2
	N[25][c+2]=*Pnumbers[2];
	N[25][c+3]=*Pnumbers[2];
	// Row 3
	N[26][c+1]=*Pnumbers[2];
	N[26][c+2]=*Pnumbers[2];
	// Row 4
	N[27][c-1]=*Pnumbers[2];
	N[27][c]=*Pnumbers[2];
	N[27][c+1]=*Pnumbers[2];
	N[27][c+2]=*Pnumbers[2];
	N[27][c+3]=*Pnumbers[2];
	N[27][c+4]=*Pnumbers[2];
	}
	// No.4
	if (S3F==3)
	{
	// Row 0
	N[23][c]=*Pnumbers[3];
	N[23][c+1]=*Pnumbers[3];
	N[23][c+2]=*Pnumbers[3];
	N[23][c+3]=*Pnumbers[3];
	// Row 1
	N[24][c-1]=*Pnumbers[3];
	N[24][c]=*Pnumbers[3];
	N[24][c+3]=*Pnumbers[3];
	N[24][c+4]=*Pnumbers[3];
	// Row 2
	N[25][c+2]=*Pnumbers[3];
	N[25][c+3]=*Pnumbers[3];
	N[25][c+4]=*Pnumbers[3];
	// Row 3
	N[26][c-1]=*Pnumbers[3];
	N[26][c]=*Pnumbers[3];
	N[26][c+3]=*Pnumbers[3];
	N[26][c+4]=*Pnumbers[3];
	// Row 4
	N[27][c]=*Pnumbers[3];
	N[27][c+1]=*Pnumbers[3];
	N[27][c+2]=*Pnumbers[3];
	N[27][c+3]=*Pnumbers[3];
	}
	// No.4
	if (S3F==4)
	{
		// Row 0
		N[23][c-1]=*Pnumbers[4];
		N[23][c]=*Pnumbers[4];
		N[23][c+3]=*Pnumbers[4];
	    N[23][c+4]=*Pnumbers[4];
		// Row 1
		N[24][c-1]=*Pnumbers[4];
		N[24][c]=*Pnumbers[4];
		N[24][c+3]=*Pnumbers[4];
		N[24][c+4]=*Pnumbers[4];
		// Row 2
		N[25][c-1]=*Pnumbers[4];
		N[25][c]=*Pnumbers[4];
		N[25][c+1]=*Pnumbers[4];
		N[25][c+2]=*Pnumbers[4];
		N[25][c+3]=*Pnumbers[4];
		N[25][c+4]=*Pnumbers[4];
		// row 3
		N[26][c+3]=*Pnumbers[4];
		N[26][c+4]=*Pnumbers[4];
		// Row 4
		N[27][c+3]=*Pnumbers[4];
		N[27][c+4]=*Pnumbers[4];


	}
	// No.5
	if (S3F==5)
	{
	// Row 0
		
	N[23][c-1]=*Pnumbers[5];
	N[23][c]=*Pnumbers[5];
	N[23][c+1]=*Pnumbers[5];
	N[23][c+2]=*Pnumbers[5];
	N[23][c+3]=*Pnumbers[5];
	N[23][c+4]=*Pnumbers[5];
	// Row 1
	N[24][c-1]=*Pnumbers[5];
	N[24][c]=*Pnumbers[5];
	// Row 2
	N[25][c-1]=*Pnumbers[5];
	N[25][c]=*Pnumbers[5];
	N[25][c+1]=*Pnumbers[5];
	N[25][c+2]=*Pnumbers[5];
	N[25][c+3]=*Pnumbers[5];
	// Row 3
	N[26][c+3]=*Pnumbers[5];
	N[26][c+4]=*Pnumbers[5];
	// Row 4
	N[27][c-1]=*Pnumbers[5];
	N[27][c]=*Pnumbers[5];
	N[27][c+1]=*Pnumbers[5];
	N[27][c+2]=*Pnumbers[5];
	N[27][c+3]=*Pnumbers[5];
	}
	// No.6
	if (S3F==6)
	{
	N[23][c]=*Pnumbers[6];
	N[23][c+1]=*Pnumbers[6];
	N[23][c+2]=*Pnumbers[6];
	N[23][c+3]=*Pnumbers[6];
	
	N[24][c-1]=*Pnumbers[6];
	N[24][c]=*Pnumbers[6];
	
	N[25][c-1]=*Pnumbers[6];
	N[25][c]=*Pnumbers[6];
	N[25][c+1]=*Pnumbers[6];
	N[25][c+2]=*Pnumbers[6];
	N[25][c+3]=*Pnumbers[6];

	N[26][c-1]=*Pnumbers[6];
	N[26][c]=*Pnumbers[6];

	N[26][c+3]=*Pnumbers[6];
	N[26][c+4]=*Pnumbers[6];

	N[27][c]=*Pnumbers[6];
	N[27][c+1]=*Pnumbers[6];
	N[27][c+2]=*Pnumbers[6];
	N[27][c+3]=*Pnumbers[6];

	}
	// No.7
	if (S3F==7)
	{
	N[23][c-1]=*Pnumbers[7];
	N[23][c]=*Pnumbers[7];
	N[23][c+1]=*Pnumbers[7];
	N[23][c+2]=*Pnumbers[7];
	N[23][c+3]=*Pnumbers[7];
	N[23][c+4]=*Pnumbers[7];

	
	N[24][c+2]=*Pnumbers[7];
	N[24][c+3]=*Pnumbers[7];

	
	N[25][c+1]=*Pnumbers[7];
	N[25][c+2]=*Pnumbers[7];

	
	N[26][c]=*Pnumbers[7];
	N[26][c+1]=*Pnumbers[7];

	
	N[27][c-1]=*Pnumbers[7];
	N[27][c]=*Pnumbers[7];

	}
	// No.8
	if (S3F==8)
	{
	N[23][c]=*Pnumbers[8];
	N[23][c+1]=*Pnumbers[8];
	N[23][c+2]=*Pnumbers[8];
	N[23][c+3]=*Pnumbers[8];
	
	N[24][c-1]=*Pnumbers[8];
	N[24][c]=*Pnumbers[8];
	N[24][c+3]=*Pnumbers[8];
	N[24][c+4]=*Pnumbers[8];
	
	N[25][c]=*Pnumbers[8];
	N[25][c+1]=*Pnumbers[8];
	N[25][c+2]=*Pnumbers[8];
	N[25][c+3]=*Pnumbers[8];

	
	N[26][c-1]=*Pnumbers[8];
	N[26][c]=*Pnumbers[8];
	N[26][c+3]=*Pnumbers[8];
	N[26][c+4]=*Pnumbers[8];

	N[27][c]=*Pnumbers[8];
	N[27][c+1]=*Pnumbers[8];
	N[27][c+2]=*Pnumbers[8];
	N[27][c+3]=*Pnumbers[8];
	

	}
	// No.9
	if (S3F==9)
	{
		
	N[23][c]=*Pnumbers[9];
	N[23][c+1]=*Pnumbers[9];
	N[23][c+2]=*Pnumbers[9];
	N[23][c+3]=*Pnumbers[9];
	
	
	N[24][c-1]=*Pnumbers[9];
	N[24][c]=*Pnumbers[9];
	N[24][c+3]=*Pnumbers[9];
	N[24][c+4]=*Pnumbers[9];
	
	N[25][c]=*Pnumbers[9];
	N[25][c+1]=*Pnumbers[9];
	N[25][c+2]=*Pnumbers[9];
	N[25][c+3]=*Pnumbers[9];
	N[25][c+4]=*Pnumbers[9];

	N[26][c+3]=*Pnumbers[9];
	N[26][c+4]=*Pnumbers[9];
	
		
	N[27][c]=*Pnumbers[9];
	N[27][c+1]=*Pnumbers[9];
	N[27][c+2]=*Pnumbers[9];
	N[27][c+3]=*Pnumbers[9];
	}
}
void Draw_Arrow(char N[][100],int r,int c)
{
	N[r][c]='|';
	N[r+1][c]='|';
	N[r+2][c]='|';
	N[r+3][c]='|';
	N[r+4][c]='V';
	
}

// Bear
void Draw_Bear (char x[][2560],int r, int c)
{
	// row zero
	x[r][c]='(';
	x[r][c+1]='(';
	x[r][c+2]=')';
	x[r][c+3]='_';
	x[r][c+4]='_';
	x[r][c+5]='(';
	x[r][c+6]='(';
	x[r][c+7]=')';
	// row one
	x[r+1][c]='//';
	x[r+1][c+8]='\\';
	// row two
	x[r+2][c-1]='(';
	x[r+2][c+1]='//';
	x[r+2][c+6]='\\';
	x[r+2][c+9]='\\';
	// row three
	x[r+3][c]='\\';
	x[r+3][c+2]='o';
	x[r+3][c+4]='o';
	x[r+3][c+9]='//';
	// row four
	x[r+4][c]='(';
	x[r+4][c+1]='_';
	x[r+4][c+2]='(';
	x[r+4][c+3]=')';
	x[r+4][c+4]='_';
	x[r+4][c+5]=')';
	x[r+4][c+6]='_';
	x[r+4][c+7]='_';
	x[r+4][c+8]='//';
	x[r+4][c+10]='\\';
	// row five
	x[r+5][c-1]='//';
	x[r+5][c+1]='_';
	x[r+5][c+2]=',';
	x[r+5][c+3]='=';
	x[r+5][c+4]='=';
	x[r+5][c+5]='.';
	x[r+5][c+6]='_';
	x[r+5][c+7]='_';
	x[r+5][c+8]='_';
	x[r+5][c+9]='_';
	x[r+5][c+11]='\\';
	// row six
	x[r+6][c-2]='(';
	x[r+6][c+2]='|';
	x[r+6][c+3]='-';
	x[r+6][c+4]='-';
	x[r+6][c+5]='|';
	x[r+6][c+12]=')';
	// row seven
	x[r+7][c]='_';
	x[r+7][c-1]='\\';
	x[r+7][c-2]='//';
	x[r+7][c+1]='.';
	x[r+7][c+2]='|';
	x[r+7][c+3]='_';
	x[r+7][c+4]='_';
	x[r+7][c+5]='|';
	x[r+7][c+6]='`';
	x[r+7][c+7]='-';
	x[r+7][c+8]='.';
	x[r+7][c+9]='_';
	x[r+7][c+10]='_';
	x[r+7][c+11]='//';
	x[r+7][c+12]='\\';
	x[r+7][c+13]='_';
	// row eight
	x[r+8][c-1]='(';
	x[r+8][c-3]='//';
	x[r+8][c+8]='//';
	x[r+8][c+14]='\\';
	// row nine
	x[r+9][c]='\\';
	x[r+9][c-3]='\\';
	x[r+9][c+7]='(';
	x[r+9][c+14]='//';
	// row ten
	x[r+10][c-2]=')';
	x[r+10][c+1]='`';
	x[r+10][c+2]='.';
	x[r+10][c+3]='_';
	x[r+10][c+4]='_';
	x[r+10][c+5]='_';
	x[r+10][c+6]='_';
	x[r+10][c+7]='_';
	x[r+10][c+8]=')';
	x[r+10][c+13]='//';
	// row eleven
	x[r+11][c]='_';
	x[r+11][c+1]='_';
	x[r+11][c-2]='_';
	x[r+11][c-3]='_';
	x[r+11][c-4]='(';
	x[r+11][c-4]='(';
	x[r+11][c-5]='(';
	x[r+11][c+2]='.';
	x[r+11][c+3]='-';
	x[r+11][c+4]='-';
	x[r+11][c+5]='(';
	x[r+11][c+6]='(';
	x[r+11][c+7]='(';
	x[r+11][c+8]='_';
	x[r+11][c+9]='_';
	x[r+11][c+10]='_';
	x[r+11][c+11]='_';
	x[r+11][c+12]='//';


}
// Castle
void Draw_castle(char x[][2560],int r , int c)
{
	// Row zero
	x[r][c]='\\';
	x[r][c+62]='//';
	x[r][c+63]='\\';
	// Row one
	x[r+1][c+2]='|';
	x[r+1][c+5]='|';
	x[r+1][c+61]='|';
	x[r+1][c+64]='|';
	// Row two
	x[r+2][c+1]='//';
	x[r+2][c+2]='-';
	x[r+2][c+3]='-';
	x[r+2][c+4]='-';
	x[r+2][c+5]='-';
	x[r+2][c+6]='\\';
	x[r+2][c+60]='//';
	x[r+2][c+61]='-';
	x[r+2][c+62]='-';
	x[r+2][c+63]='-';
	x[r+2][c+64]='-';
	x[r+2][c+65]='\\';
	// Row three
	x[r+3][c]='[';
	x[r+3][c+1]='_';
	x[r+3][c+2]='_';
	x[r+3][c+3]='_';
	x[r+3][c+4]='_';
	x[r+3][c+5]='_';
	x[r+3][c+6]='_';
	x[r+3][c+7]=']';
	x[r+3][c+59]='[';
	x[r+3][c+60]='_';
	x[r+3][c+61]='_';
	x[r+3][c+62]='_';
	x[r+3][c+63]='_';
	x[r+3][c+64]='_';
	x[r+3][c+65]='_';
	x[r+3][c+66]=']';
	// Row four
	x[r+4][c+1]='|';
	x[r+4][c+6]='|';
	x[r+4][c+16]='_';
	x[r+4][c+17]='_';
	x[r+4][c+18]='_';
	x[r+4][c+19]='_';
	x[r+4][c+20]='_';
	x[r+4][c+45]='_';
	x[r+4][c+46]='_';
	x[r+4][c+47]='_';
	x[r+4][c+48]='_';
	x[r+4][c+49]='_';
	x[r+4][c+60]='|';
	x[r+4][c+65]='|';
	// Row five
	x[r+5][c+1]='|';
	x[r+5][c+2]='[';
	x[r+5][c+3]=']';
	x[r+5][c+6]='|';
	x[r+5][c+15]='[';
	x[r+5][c+21]=']';
	x[r+5][c+44]='[';
	x[r+5][c+50]=']';
	x[r+5][c+60]='|';
	x[r+5][c+63]='[';
	x[r+5][c+64]=']';
	x[r+5][c+65]='|';
	// Row six
	x[r+6][c+1]='|';
	x[r+6][c+6]='|';
	x[r+6][c+14]='[';
	x[r+6][c+15]='_';
	x[r+6][c+16]='_';
	x[r+6][c+17]='_';
	x[r+6][c+18]='_';
	x[r+6][c+19]='_';
	x[r+6][c+20]='_';
	x[r+6][c+21]='_';
	x[r+6][c+22]=']';
	x[r+6][c+23]='[';
	x[r+6][c+25]=']';
	x[r+6][c+26]='[';
	x[r+6][c+28]=']';
	x[r+6][c+29]='[';
	x[r+6][c+31]=']';
	x[r+6][c+32]='[';
	x[r+6][c+33]=']';
	x[r+6][c+34]='[';
	x[r+6][c+36]=']';
	x[r+6][c+37]='[';
	x[r+6][c+39]=']';
	x[r+6][c+40]='[';
	x[r+6][c+42]=']';
	x[r+6][c+43]='[';
	x[r+6][c+44]='_';
	x[r+6][c+45]='_';
	x[r+6][c+46]='_';
	x[r+6][c+47]='_';
	x[r+6][c+48]='_';
	x[r+6][c+49]='_';
	x[r+6][c+50]='_';
	x[r+6][c+51]=']';
	x[r+6][c+60]='|';
	x[r+6][c+65]='|';
	// Row seven
	x[r+7][c+1]='|';
	x[r+7][c+6]='[';
	x[r+7][c+8]=']';
	x[r+7][c+9]='[';
	x[r+7][c+11]=']';
	x[r+7][c+12]='[';
	x[r+7][c+14]=']';
	x[r+7][c+15]='|';
	x[r+7][c+21]='|';
	x[r+7][c+24]=',';
	x[r+7][c+25]='-';
	x[r+7][c+26]='-';
	x[r+7][c+27]='-';
	x[r+7][c+28]='-';
	x[r+7][c+29]='-';
	x[r+7][c+30]='-';
	x[r+7][c+31]='-';
	x[r+7][c+32]='-';
	x[r+7][c+33]='-';
	x[r+7][c+34]='-';
	x[r+7][c+35]='-';
	x[r+7][c+36]='-';
	x[r+7][c+37]='-';
	x[r+7][c+38]='-';
	x[r+7][c+39]='-';
	x[r+7][c+40]='-';
	x[r+7][c+41]=',';
	x[r+7][c+44]='|';
	x[r+7][c+51]='|';
	x[r+7][c+52]='[';
	x[r+7][c+54]=']';
	x[r+7][c+55]='[';
	x[r+7][c+57]=']';
	x[r+7][c+58]='[';
	x[r+7][c+60]=']';
	x[r+7][c+65]='|';
	// Row eight
	x[r+8][c+1]='|';
	x[r+8][c+15]='|';
	x[r+8][c+21]='|';
	x[r+8][c+22]='//';
	x[r+8][c+23]='"';
	x[r+8][c+28]='_';
	x[r+8][c+29]='_';
	x[r+8][c+30]='_';
	x[r+8][c+31]='_';
	x[r+8][c+32]='.';
	x[r+8][c+33]='.';
	x[r+8][c+34]='_';
	x[r+8][c+35]='_';
	x[r+8][c+36]='_';
	x[r+8][c+37]='_';
	x[r+8][c+42]='"';
	x[r+8][c+43]='\\';
	x[r+8][c+44]='|';
	x[r+8][c+51]='|';
	x[r+8][c+65]='|';
	// Row nine
	x[r+9][c+2]='\\';
	x[r+9][c+5]='[';
	x[r+9][c+6]=']';
	x[r+9][c+15]='|';
	x[r+9][c+21]='|';
	x[r+9][c+26]='//';
	x[r+9][c+27]='"';
	x[r+9][c+32]='|';
	x[r+9][c+33]='|';
	x[r+9][c+38]='"';
	x[r+9][c+39]='\\';
	x[r+9][c+44]='|';
	x[r+9][c+51]='|';
	x[r+9][c+60]='[';
	x[r+9][c+61]=']';
	x[r+9][c+64]='//';
	// Row ten
	x[r+10][c+3]='|';
	x[r+10][c+10]='[';
	x[r+10][c+11]=']';
	x[r+10][c+15]='|';
	x[r+10][c+21]='|';
	x[r+10][c+25]='|';
	x[r+10][c+26]='o';
	x[r+10][c+32]='|';
	x[r+10][c+33]='|';
	x[r+10][c+39]='o';
	x[r+10][c+40]='|';
	x[r+10][c+44]='|';
	x[r+10][c+51]='|';
	x[r+10][c+54]='[';
	x[r+10][c+55]=']';
	x[r+10][c+63]='|';
	// Row eleven
	x[r+11][c+3]='|';
	x[r+11][c+15]='|';
	x[r+11][c+18]='_';
	x[r+11][c+21]='|';
	x[r+11][c+25]='|';
	x[r+11][c+31]='_';
	x[r+11][c+32]='|';
	x[r+11][c+33]='|';
	x[r+11][c+34]='_';
	x[r+11][c+40]='|';
	x[r+11][c+44]='|';
	x[r+11][c+47]='_';
	x[r+11][c+51]='|';
	x[r+11][c+63]='|';
	// Row 12
	x[r+12][c+3]='|';
	x[r+12][c+7]='[';
	x[r+12][c+8]=']';
	x[r+12][c+15]='|';
	x[r+12][c+17]='(';
	x[r+12][c+18]='_';
	x[r+12][c+19]=')';
	x[r+12][c+21]='|';
	x[r+12][c+25]='|';
	x[r+12][c+30]='(';
	x[r+12][c+31]='_';
	x[r+12][c+32]='|';
	x[r+12][c+33]='|';
	x[r+12][c+34]='_';
	x[r+12][c+35]=')';
	x[r+12][c+40]='|';
	x[r+12][c+44]='|';
	x[r+12][c+46]='(';
	x[r+12][c+47]='_';
	x[r+12][c+48]=')';
	x[r+12][c+51]='|';
	x[r+12][c+59]='[';
	x[r+12][c+60]=']';
	x[r+12][c+63]='|';
	// row 13
	x[r+13][c+3]='|';
	x[r+13][c+15]='|';
	x[r+13][c+21]='|';
	x[r+13][c+25]='|';
	x[r+13][c+31]='(';
	x[r+13][c+32]='|';
	x[r+13][c+33]='|';
	x[r+13][c+34]=')';
	x[r+13][c+40]='|';
	x[r+13][c+44]='|';
	x[r+13][c+51]='|';
	x[r+13][c+63]='|';
	// row 14
	x[r+14][c+3]='|';
	x[r+14][c+15]='|';
	x[r+14][c+21]='|';
	x[r+14][c+25]='|';
	x[r+14][c+32]='|';
	x[r+14][c+33]='|';
	x[r+14][c+40]='|';
	x[r+14][c+44]='|';
	x[r+14][c+51]='|';
	x[r+14][c+63]='|';
	// row 15
	x[r+15][c+1]='//';
	x[r+15][c+2]='"';
	x[r+15][c+3]='"';
	x[r+15][c+15]='|';
	x[r+15][c+21]='|';
	x[r+15][c+25]='|';
	x[r+15][c+26]='o';
	x[r+15][c+32]='|';
	x[r+15][c+33]='|';
	x[r+15][c+39]='o';
	x[r+15][c+40]='|';
	x[r+15][c+44]='|';
	x[r+15][c+51]='|';
	x[r+15][c+63]='"';
	x[r+15][c+64]='"';
	x[r+15][c+65]='\\';
	// Row 16
	x[r+16][c]='[';
	x[r+16][c+1]='_';
	x[r+16][c+2]='_';
	x[r+16][c+3]='_';
	x[r+16][c+4]='_';
	x[r+16][c+5]='_';
	x[r+16][c+6]='_';
	x[r+16][c+7]='_';
	x[r+16][c+8]='_';
	x[r+16][c+9]='_';
	x[r+16][c+10]='_';
	x[r+16][c+11]='_';
	x[r+16][c+12]='_';
	x[r+16][c+13]='_';
	x[r+16][c+14]='[';
	x[r+16][c+15]='_';
	x[r+16][c+16]='_';
	x[r+16][c+17]='_';
	x[r+16][c+18]='_';
	x[r+16][c+19]='_';
	x[r+16][c+20]='_';
	x[r+16][c+21]='_';
	x[r+16][c+22]=']';
	x[r+16][c+23]='-';
	x[r+16][c+24]='-';
	x[r+16][c+25]='"';
	x[r+16][c+26]='-';
	x[r+16][c+27]='-';
	x[r+16][c+28]='-';
	x[r+16][c+29]='-';
	x[r+16][c+30]='-';
	x[r+16][c+31]='-';
	x[r+16][c+32]='"';
	x[r+16][c+33]='"';
	x[r+16][c+34]='-';
	x[r+16][c+35]='-';
	x[r+16][c+36]='-';
	x[r+16][c+37]='-';
	x[r+16][c+38]='-';
	x[r+16][c+39]='-';
	x[r+16][c+40]='"';
	x[r+16][c+41]='-';
	x[r+16][c+42]='-';
	x[r+16][c+43]='[';
	x[r+16][c+44]='_';
	x[r+16][c+45]='_';
	x[r+16][c+46]='_';
	x[r+16][c+47]='_';
	x[r+16][c+48]='_';
	x[r+16][c+49]='_';
	x[r+16][c+50]='_';
	x[r+16][c+51]=']';
	x[r+16][c+52]='_';
	x[r+16][c+53]='_';
	x[r+16][c+54]='_';
	x[r+16][c+55]='_';
	x[r+16][c+56]='_';
	x[r+16][c+57]='_';
	x[r+16][c+58]='_';
	x[r+16][c+59]='_';
	x[r+16][c+60]='_';
	x[r+16][c+61]='_';
	x[r+16][c+62]='_';
	x[r+16][c+63]='_';
	x[r+16][c+64]='_';
	x[r+16][c+65]=']';
}
// Yin and Yang
void Draw_Yin (char x[][2560],int r,int c)
{
	// Row Zero
	x[r][c]='_';
	x[r][c+1]='.';
	x[r][c+2]='-';
	x[r][c+3]='-';
	x[r][c+4]='-';
	x[r][c+5]='-';
	x[r][c+6]='.';
	x[r][c+7]='_';
	// Row one
	x[r+1][c-1]='"';
	x[r+1][c-2]='.';
	x[r+1][c+3]='//';
	x[r+1][c+6]='_';
	x[r+1][c+8]='"';
	x[r+1][c+9]='.';
	// Row Two
	x[r+2][c-3]='//';
	x[r+2][c+2]='|';
	x[r+2][c+5]='(';
	x[r+2][c+6]='_';
	x[r+2][c+7]=')';
	x[r+2][c+10]='\\';
	// Row Three
	x[r+3][c-4]='|';
	x[r+3][c+2]='\\';
	x[r+3][c+11]='|';
	// Row Four
	x[r+4][c-4]='|';
	x[r+4][c+11]='|';
	x[r+4][c+3]='"';
	x[r+4][c+4]='.';
	// Row Five
	x[r+5][c-4]='|';
	x[r+5][c+11]='|';
	x[r+5][c+1]='_';
	x[r+5][c+5]='`';
	x[r+5][c+6]='\\';
	// Row Six
	x[r+6][c-3]='\\';
	x[r+6][c]='(';
	x[r+6][c+1]='_';
	x[r+6][c+2]=')';
	x[r+6][c+6]='|';
	x[r+6][c+10]='//';
	// Row Seven 
	x[r+7][c-2]='"';
	x[r+7][c-1]='.';
	x[r+7][c]='_';
	x[r+7][c+5]='//';
	x[r+7][c+7]='_';
	x[r+7][c+8]='.';
	x[r+7][c+9]='"';
	// Row Eight
	x[r+8][c+1]='"';
	x[r+8][c+2]='-';
	x[r+8][c+3]='-';
	x[r+8][c+4]='-';
	x[r+8][c+5]='-';
	x[r+8][c+6]='"';





}

// Clock
void Draw_Clock (char x[][2560],int r,int c,char **Pnumbers)
{
	// Row Zero
	x[r][c]='.';
	x[r][c+1]='"';
	x[r][c+2]='`';
	for (int i=c+3;i<=c+13;i++)
	{
		x[r][i]='~';
	}
	x[r][c+14]='`';
	x[r][c+15]='"';
	x[r][c+16]='.';

	// Row One
	x[r+1][c]='(';
	x[r+1][c+3]='.';
	x[r+1][c+4]='`';
	x[r+1][c+5]=*Pnumbers[1];
	x[r+1][c+6]=*Pnumbers[1];
	x[r+1][c+8]=*Pnumbers[1];
	x[r+1][c+9]=*Pnumbers[2];
	x[r+1][c+11]=*Pnumbers[1];
	x[r+1][c+12]='"';
	x[r+1][c+12]='.';
	x[r+1][c+16]=')';
	// Row Two
	x[r+2][c]='|';
	x[r+2][c+3]=':';
	x[r+2][c+4]=*Pnumbers[1];
	x[r+2][c+5]=*Pnumbers[0];
	x[r+2][c+12]=*Pnumbers[2];
	x[r+2][c+13]=':';
	x[r+2][c+16]='|';
	// Row Three
	x[r+3][c]='|';
	x[r+3][c+3]=':';
	x[r+3][c+4]=*Pnumbers[9];
	x[r+3][c+5]='<';
	x[r+3][c+6]='-';
	x[r+3][c+7]='-';
	x[r+3][c+8]='@';
	x[r+3][c+9]='-';
	x[r+3][c+10]='>';
	x[r+3][c+12]=*Pnumbers[3];
	x[r+3][c+13]=':';
	x[r+3][c+16]='|';
	// Row Four
	x[r+4][c]='|';
	x[r+4][c+3]=':';
	x[r+4][c+4]=*Pnumbers[8];
	x[r+4][c+8]='|';
	x[r+4][c+12]=*Pnumbers[4];
	x[r+4][c+13]=':';
	x[r+4][c+16]='|';
	// Row Five
	x[r+5][c]='"';
	x[r+5][c+1]='.';
	x[r+5][c+3]='"';
	x[r+5][c+4]='.';
	x[r+5][c+5]='.';
	x[r+5][c+6]=*Pnumbers[7];
	x[r+5][c+8]=*Pnumbers[6];
	x[r+5][c+10]=*Pnumbers[5];
	x[r+5][c+11]='.';
	x[r+5][c+12]='.';
	x[r+5][c+13]='"';
	x[r+5][c+15]='.';
	x[r+5][c+16]='"';
	// Row Six
	x[r+6][c+1]='~';
	for (int i=c+2;i<c+15;i++)
	{
		x[r+6][i]='-';
	}
	x[r+6][c+15]='~';

}

// Beach
void Draw_Beach (char x[][2560],int r,int c)
{
	x[r][c]='_';
	x[r][c+1]='_';
	x[r][c+3]='|';
	// Row 1
	x[r+1][c]='_';
	x[r+1][c+1]='_';
	x[r+1][c+2]='\\';
	x[r+1][c+3]='|';
	x[r+1][c+4]=',';
	x[r+1][c+5]='-';
	// Row 2
	x[r+2][c]=',';
	x[r+2][c+1]='-';
	x[r+2][c+2]='`';
	x[r+2][c+3]='=';
	x[r+2][c+4]='-';
	x[r+2][c+5]='-';
	x[r+2][c+6]='.';
	// Row 3
	x[r+3][c+1]='//';
	x[r+3][c+2]='=';
	x[r+3][c+3]='&';
	x[r+3][c+4]='\\';
	// Row,4,5,6,7
	x[r+4][c+2]='=';
	x[r+5][c+2]='=';
	x[r+6][c+2]='=';
	x[r+7][c+2]='=';
	// Row 8
	x[r+8][c-5]='~';
	x[r+8][c-4]='.';
	x[r+8][c-3]='.';
	for (int i=c-2;i<c+11;i++)
	{
		x[r+8][i]=':';
	}
	x[r+8][c+11]='.';
	x[r+8][c+12]='.';
	x[r+8][c+13]='~';
	x[r+8][c+14]='~';
	// Row 9
	for (int i = c-5;i<c+15;i++)
	{
		x[r+9][i]='~';
	}
}

// TNT
void GetTNT (char x[][2560],int r,int c)
{
	// Row 0
	x[r][c]=')';
	// Row 1
	x[r+1][c-1]='(';
	// Row 2
	x[r+2][c-2]='.';
	x[r+2][c-1]='-';
	x[r+2][c]='`';
	x[r+2][c+2]='.';
	x[r+2][c+1]='-';
	// Row 3
	x[r+3][c-2]=':';
	x[r+3][c+2]=':';
	// Row 4
	x[r+4][c-2]=':';
	x[r+4][c-1]='T';
	x[r+4][c]='N';
	x[r+4][c+1]='T';
	x[r+4][c+2]=':';
	// Row 5
	x[r+5][c-2]=':';
	x[r+5][c-1]='_';
	x[r+5][c]='_';
	x[r+5][c+1]='_';
	x[r+5][c+2]=':';






}
void Draw_TNT (char x[][2560],int &r,int &c,int &TNTSF,int &ct,int &RobotFlag,int &RobotRifleFlag)
{
	for ( ; ; )
	{

	if (TNTSF==0)
	{
		// Row 0
	x[r][c]=')';
	// Row 1
	x[r+1][c-1]='(';
	// Row 2
	x[r+2][c-2]='.';
	x[r+2][c-1]='-';
	x[r+2][c]='`';
	x[r+2][c+2]='-';
	x[r+2][c+1]='.';
	// Row 3
	x[r+3][c-2]=':';
	x[r+3][c+2]=':';
	// Row 4
	x[r+4][c-2]=':';
	x[r+4][c-1]='T';
	x[r+4][c]='N';
	x[r+4][c+1]='T';
	x[r+4][c+2]=':';
	// Row 5
	x[r+5][c-2]=':';
	x[r+5][c-1]='_';
	x[r+5][c]='_';
	x[r+5][c+1]='_';
	x[r+5][c+2]=':';
	if (ct<=3)
	{
	r--;
	}
	if (ct>3)
	{
	r+=3;
	}
	ct++;
	c+=3;
	if (ct==6)
	{
		TNTSF++;
		break;
	}
	

	break;
	}
	if (TNTSF==1)
	{
		x[r][c]='//';
		x[r][c-1]='|';
		x[r][c-2]='\\';
		x[r+1][c-1]='o';
		x[r+1][c+1]='-';
		x[r+1][c-3]='-';
			// Row 2
	x[r+2][c-2]='//';
	x[r+2][c-1]='-';
	x[r+2][c]='`';
	x[r+2][c+2]='-';
	x[r+2][c+1]='.';
	// Row 3
	x[r+3][c-2]=':';
	x[r+3][c+2]=':';
	// Row 4
	x[r+4][c-2]=':';
	x[r+4][c-1]='T';
	x[r+4][c]='N';
	x[r+4][c+1]='T';
	x[r+4][c+2]=':';
	// Row 5
	x[r+5][c-2]=':';
	x[r+5][c-1]='_';
	x[r+5][c]='_';
	x[r+5][c+1]='_';
	x[r+5][c+2]=':';

	TNTSF++;
	break;
	}
	if (TNTSF==2)
	{
			// Row 2
	x[r+2][c-2]='.';
	x[r+2][c-1]='-';
	x[r+2][c]='-';
	x[r+2][c+2]='-';
	x[r+2][c+1]='.';
	// Row 3
	x[r+3][c-2]=':';
	x[r+3][c+2]=':';
	x[r+3][c]='|';
	// Row 4
	x[r+4][c-2]=':';
	x[r+4][c-1]='-';
	x[r+4][c]='o';
	x[r+4][c+1]='-';
	x[r+4][c+2]=':';
	// Row 5
	x[r+5][c-2]=':';
	x[r+5][c-1]='_';
	x[r+5][c]='|';
	x[r+5][c+1]='_';
	x[r+5][c+2]=':';
	TNTSF++;
	break;

	}
	if (TNTSF==3)
	{
	x[r+2][c-2]='.';
	x[r+2][c-1]='-';
	x[r+2][c]='-';
	x[r+2][c+2]='-';
	x[r+2][c+1]='.';
	// Row 3
	x[r+3][c-2]='(';
	x[r+3][c-1]='\\';
	x[r+3][c]='|';
	x[r+3][c+1]='//';
	x[r+3][c+2]=')';
	// Row 4
	x[r+4][c-2]='-';
	x[r+4][c-1]='-';
	x[r+4][c]='0';
	x[r+4][c+1]='-';
	x[r+4][c+2]='-';
	// Row 5
	x[r+5][c-2]='(';
	x[r+5][c-1]='\\';
	x[r+5][c]='|';
	x[r+5][c+1]='//';
	x[r+5][c+2]=')';

		TNTSF++;
		break;
	}
	if (TNTSF==4)
	{
		x[r+1][c]='"';
		x[r+1][c+1]='.';
		x[r+1][c+2]='\\';
		x[r+1][c+3]='|';
		x[r+1][c+4]='//';
		x[r+1][c+5]='.';
		x[r+1][c+6]='"';

		x[r+2][c]='(';
		x[r+2][c+1]='\\';
		x[r+2][c+5]='//';
		x[r+2][c+6]=')';

		x[r+3][c]='-';
		x[r+3][c+2]='-';
		x[r+3][c+3]='o';
		x[r+3][c+4]='-';
		x[r+3][c+6]='-';

		x[r+4][c]='(';
		x[r+4][c+1]='\\';
		x[r+4][c+5]='//';
		x[r+4][c+6]=')';

		x[r+5][c]=',';
		x[r+5][c+1]='"';
		x[r+5][c+2]='//';
		x[r+5][c+3]='|';
		x[r+5][c+4]='\\';
		x[r+5][c+5]='"';
		x[r+5][c+6]='.';
		TNTSF++;
		break;

	}
	if (TNTSF==5)
	{
		x[r][c]='"';
		x[r][c+1]='.';
		x[r][c+4]='\\';
		x[r][c+6]='|';
		x[r][c+8]='/';
		x[r][c+11]=',';
		x[r][c+12]='"';

		x[r+1][c+2]='`';
		x[r+1][c+3]='.';
		x[r+1][c+5]='`';
		x[r+1][c+6]='.';
		x[r+1][c+7]='"';
		x[r+1][c+8]=',';
		x[r+1][c+9]='"';

		x[r+2][c+1]='(';
		x[r+2][c+3]='.';
		x[r+2][c+4]='`';
		x[r+2][c+5]='.';
		x[r+2][c+6]='|';
		x[r+2][c+7]=',';
		x[r+2][c+8]='"';
		x[r+2][c+10]='.';
		x[r+2][c+11]=')';

		x[r+3][c+1]='-';
		x[r+3][c+3]='~';
		x[r+3][c+5]='-';
		x[r+3][c+6]='0';
		x[r+3][c+8]='~';
		x[r+3][c+10]='-';
		TNTSF=-1;
		RobotFlag=0;
		RobotRifleFlag=1;
		break;


	}
	break;
	}


}

// Dragon
void Draw_Dragon(char x[][2560],int r,int c,int &DSF,int &DFSF)
{
	for ( ; ; )
	{
	if (DSF==-1)
	{
	// Row 0
	x[r][c]='_';
	x[r][c+1]='_';

	// Row 1
	x[r+1][c-4]='_';
	x[r+1][c-3]='.';
	x[r+1][c-2]='-';
	x[r+1][c-1]='"';
	x[r+1][c]='.';
	x[r+1][c+1]='-';
	x[r+1][c+2]='"';
	x[r+1][c+3]='"';
	x[r+1][c+4]='-';
	x[r+1][c+5]='.';
	x[r+1][c+6]='_';
	x[r+1][c+7]='_';

	// Row 2
	x[r+2][c-7]='.';
	x[r+2][c-6]='-';
	x[r+2][c-5]='"';
	x[r+2][c-4]='.';
	x[r+2][c+4]='"';
	x[r+2][c+5]='-';
	x[r+2][c+6]='.';
	x[r+2][c+7]='_';
	x[r+2][c+9]='_';
	x[r+2][c+10]='_';
	x[r+2][c+11]='.';
	x[r+2][c+12]='-';
	x[r+2][c+13]='-';
	x[r+2][c+14]='.';
	x[r+2][c+15]='_';

	// Row 3
	x[r+3][c-14]='-';
	x[r+3][c-13]='.';
	x[r+3][c-12]='.';
	x[r+3][c-11]='"';
	x[r+3][c-10]='\\';
	x[r+3][c-9]=',';
	x[r+3][c-8]='-';
	x[r+3][c-7]=',';
	x[r+3][c-6]='//';
	x[r+3][c-5]='.';
	x[r+3][c-4]='.';
	x[r+3][c-3]='-';
	x[r+3][c]='_';
	x[r+3][c+10]='.';
	x[r+3][c+11]='"';
	x[r+3][c+15]='\\';
	x[r+3][c+19]='"';
	x[r+3][c+20]='-';
	x[r+3][c+21]='-';
	x[r+3][c+22]='-';
	x[r+3][c+23]='.';
	x[r+3][c+24]='_';

	// Row 4
	x[r+4][c-13]=')';
	x[r+4][c-12]='.';
	x[r+4][c-10]='//';
	x[r+4][c-9]='_';
	x[r+4][c-7]='_';
	x[r+4][c-6]='\\';
	x[r+4][c-5]='"';
	x[r+4][c-3]='(';
	x[r+4][c-1]='"';
	x[r+4][c+1]='"';
	x[r+4][c+2]='.';
	x[r+4][c+12]='"';
	x[r+4][c+13]='-';
	x[r+4][c+16]='"';
	x[r+4][c+17]='//';
	x[r+4][c+18]='"';
	x[r+4][c+19]='-';
	x[r+4][c+20]='-';
	x[r+4][c+21]='-';
	x[r+4][c+22]='-';
	x[r+4][c+23]='-';
	x[r+4][c+24]='.';
	x[r+4][c+25]='_';
	x[r+4][c+26]='"';
	x[r+4][c+27]='-';
	x[r+4][c+28]='.';
	x[r+4][c+29]='_';
	x[r+4][c+30]='_';

	// Row 5
	x[r+5][c-13]='"';
	x[r+5][c-12]='.';
	x[r+5][c-11]='.';
	x[r+5][c-10]='"';
	x[r+5][c-9]='0';
	x[r+5][c-7]='0';
	x[r+5][c-4]='"';
	x[r+5][c-3]='-';
	x[r+5][c-2]='r';
	x[r+5][c+2]='_';
	x[r+5][c+9]='.';
	x[r+5][c+10]='-';
	x[r+5][c+11]='.';
	x[r+5][c+19]='"';
	x[r+5][c+20]='-';
	x[r+5][c+21]='.';
	x[r+5][c+22]='_';
	x[r+5][c+24]='\\';


	// Row 6
	x[r+6][c-13]='"';
	x[r+6][c-12]='.';
	x[r+6][c-11]='\\';
	x[r+6][c-10]='.';
	x[r+6][c-8]='Y';
	x[r+6][c-6]='.';
	x[r+6][c-5]=')';
	x[r+6][c-4]='.';
	x[r+6][c-3]='"';
	x[r+6][c+5]='(';
	x[r+6][c+7]='.';
	x[r+6][c+8]='"';
	x[r+6][c+11]='.';
	x[r+6][c+18]='.';
	x[r+6][c+19]='\\';
	x[r+6][c+30]='"';
	x[r+6][c+31]='\\';
	x[r+6][c+32]='"';
	x[r+6][c+33]='.';

	// Row 7
	x[r+7][c-13]='.';
	x[r+7][c-12]='-';
	x[r+7][c-11]='"';
	x[r+7][c-10]=')';
	x[r+7][c-9]='"';
	x[r+7][c-8]='|';
	x[r+7][c-7]='"';
	x[r+7][c-6]='//';
	x[r+7][c-5]='"';
	x[r+7][c-4]='-';
	x[r+7][c-3]='.';
	x[r+7][c+6]='\\';
	x[r+7][c+7]=')';
	x[r+7][c+12]=')';
	x[r+7][c+19]='"';
	x[r+7][c+20]='"';
	x[r+7][c+21]=',';
	x[r+7][c+22]='_';
	x[r+7][c+29]='_';
	x[r+7][c+30]='.';
	x[r+7][c+31]='c';
	x[r+7][c+32]='_';
	x[r+7][c+33]='.';
	x[r+7][c+34]='\\';

	// Row 8
	x[r+8][c-11]='.';
	x[r+8][c-10]='<';
	x[r+8][c-9]=',';
	x[r+8][c-7]=',';
	x[r+8][c-6]='>';
	x[r+8][c-5]='.';
	x[r+8][c+6]='|';
	x[r+8][c+10]='_';
	x[r+8][c+11]='//';
	x[r+8][c+12]='\\';
	x[r+8][c+21]='.';
	x[r+8][c+23]='"';
	x[r+8][c+24]=',';
	x[r+8][c+28]=':';
	x[r+8][c+31]=':';
	x[r+8][c+34]='\\';
	x[r+8][c+35]='\\';

	// Row 9
	x[r+9][c-12]='.';
	x[r+9][c-11]='"';
	x[r+9][c-9]='\\';
	x[r+9][c-8]='_';
	x[r+9][c-7]='//';
	x[r+9][c-5]='"';
	x[r+9][c-4]='.';
	x[r+9][c+5]='//';
	x[r+9][c+8]='.';
	x[r+9][c+9]='"';
	x[r+9][c+13]='|';
	x[r+9][c+24]='"';
	x[r+9][c+25]='.';
	x[r+9][c+30]='.';
	x[r+9][c+31]='"';
	x[r+9][c+35]='\\';
	x[r+9][c+36]=')';

	// Row 10
	x[r+10][c+4]='//';
	x[r+10][c+6]='.';
	x[r+10][c+7]='-';
	x[r+10][c+8]='"';
	x[r+10][c+13]='"';
	x[r+10][c+14]='-';
	x[r+10][c+15]='.';
	x[r+10][c+24]=':';
	x[r+10][c+26]='\\';
	x[r+10][c+29]='_';
	x[r+10][c+30]=';';
	x[r+10][c+35]='|';
	x[r+10][c+36]='|';

	// Row 11
	x[r+11][c+3]='//';
	x[r+11][c+5]='//';
	x[r+11][c+10]='_';
	x[r+11][c+16]='\\';
	x[r+11][c+17]='_';
	x[r+11][c+24]='"';
	x[r+11][c+25]='.';
	x[r+11][c+26]='"';
	x[r+11][c+27]='\\';
	x[r+11][c+29]='"';
	x[r+11][c+31]='//';
	x[r+11][c+35]='|';
	x[r+11][c+36]='|';

	// Row 12
	x[r+12][c+2]='//';
	x[r+12][c+3]='.';
	x[r+12][c+4]='"';
	x[r+12][c+8]='.';
	x[r+12][c+9]='"';
	x[r+12][c+18]='\\';
	x[r+12][c+19]='_';
	x[r+12][c+26]='.';
	x[r+12][c+27]='|';
	x[r+12][c+31]='\\';
	x[r+12][c+35]='\\';
	x[r+12][c+36]='|';

	// Row 13
	x[r+13][c+1]='//';
	x[r+13][c+3]='//';
	x[r+13][c+7]='//';
	x[r+13][c+14]='_';
	x[r+13][c+15]='_';
	x[r+13][c+16]='.';
	x[r+13][c+17]='-';
	x[r+13][c+18]='-';
	x[r+13][c+19]='-';
	x[r+13][c+20]='"';
	x[r+13][c+27]='"';
	x[r+13][c+28]='.';
	x[r+13][c+29]='_';
	x[r+13][c+32]=';';
	x[r+13][c+35]='|';
	x[r+13][c+36]='|';

	// Row 14 
	x[r+14][c]='//';
	x[r+14][c+1]='.';
	x[r+14][c+2]='"';
	x[r+14][c+5]='_';
	x[r+14][c+6]=':';
	x[r+14][c+7]='-';
	x[r+14][c+8]='.';
	x[r+14][c+9]='_';
	x[r+14][c+10]='_';
	x[r+14][c+11]='_';
	x[r+14][c+12]='_';
	x[r+14][c+13]='<';
	x[r+14][c+15]=',';
	x[r+14][c+28]='"';
	x[r+14][c+29]='.';
	x[r+14][c+30]='\\';
	x[r+14][c+32]='\\';
	x[r+14][c+35]='|';
	x[r+14][c+36]='|';
	
	// Row 15
	x[r+15][c-1]='//';
	x[r+15][c]='//';
	x[r+15][c+2]='.';
	x[r+15][c+3]='-';
	x[r+15][c+4]='"';
	x[r+15][c+10]='"';
	x[r+15][c+11]='-';
	x[r+15][c+12]='.';
	x[r+15][c+13]='_';
	x[r+15][c+14]='_';
	x[r+15][c+17]='"';
	x[r+15][c+18]='-';
	x[r+15][c+19]='"';
	x[r+15][c+20]='-';
	x[r+15][c+21]='\\';
	x[r+15][c+22]='_';
	x[r+15][c+29]='"';
	x[r+15][c+30]='.';
	x[r+15][c+31]='\\';
	x[r+15][c+32]='/';
	x[r+15][c+33]='_';
	x[r+15][c+35]='\\';
	x[r+15][c+36]='|';

	// Row 16
	x[r+16][c-2]='(';
	x[r+16][c]='}';
	x[r+16][c+1]=';';
	x[r+16][c+2]='=';
	x[r+16][c+3]='=';
	x[r+16][c+4]='=';
	x[r+16][c+5]='=';
	x[r+16][c+6]='.';
	x[r+16][c+7]='=';
	x[r+16][c+8]='=';
	x[r+16][c+9]='=';
	x[r+16][c+10]='-';
	x[r+16][c+11]='=';
	x[r+16][c+12]='=';
	x[r+16][c+13]='=';
	x[r+16][c+14]='"';
	x[r+16][c+23]='"';
	x[r+16][c+24]='.';
	x[r+16][c+29]='.';
	x[r+16][c+32]='\\';
	x[r+16][c+33]='\\';
	x[r+16][c+34]=':';
	x[r+16][c+36]='\\';

	// Row 17
	x[r+17][c-1]='\\';
	x[r+17][c]='\\';
	x[r+17][c+2]='"';
	x[r+17][c+3]='.';
	x[r+17][c+4]='_';
	x[r+17][c+13]='//';
	x[r+17][c+24]=':';
	x[r+17][c+28]=',';
	x[r+17][c+29]='"';
	x[r+17][c+33]=')';
	x[r+17][c+34]='\\';
	x[r+17][c+35]='_';
	x[r+17][c+37]='\\';

	// Row 18
	x[r+18][c]='\\';
	x[r+18][c+1]='\\';
	x[r+18][c+5]='"';
	x[r+18][c+6]='-';
	x[r+18][c+7]='-';
	x[r+18][c+8]='-';
	x[r+18][c+9]='-';
	x[r+18][c+10]='-';
	x[r+18][c+11]='-';
	x[r+18][c+12]='//';
	x[r+18][c+25]='\\';
	x[r+18][c+27]='.';
	x[r+18][c+32]='//';
	x[r+18][c+36]=')';
	x[r+18][c+37]='//';

	// Row 19
	x[r+19][c+1]='\\';
	x[r+19][c+2]='|';
	x[r+19][c+11]='_';
	x[r+19][c+12]='|';
	x[r+19][c+26]=')';
	x[r+19][c+27]='Y';
	x[r+19][c+32]='|';
	x[r+19][c+36]='//';

	// Row 20
	x[r+20][c+2]='\\';
	x[r+20][c+3]='\\';
	x[r+20][c+10]='\\';
	x[r+20][c+24]='.';
	x[r+20][c+25]='"';
	x[r+20][c+26]=',';
	x[r+20][c+27]='"';
	x[r+20][c+31]='//';
	x[r+20][c+34]=',';
	x[r+20][c+35]='//';

	// Row 21
	x[r+21][c+3]='\\';
	x[r+21][c+4]='\\';
	x[r+20][c+9]='_';
	x[r+21][c+10]='//';
	x[r+21][c+23]='//';
	x[r+21][c+30]='_';
	x[r+21][c+31]='//';

	// Row 22
	x[r+22][c+4]='\\';
	x[r+22][c+5]='\\';
	x[r+22][c+9]='\\';
	x[r+22][c+21]='.';
	x[r+22][c+22]='"';
	x[r+22][c+27]='.';
	x[r+22][c+28]='"';

	// Row 23
	x[r+23][c+5]='"';
	x[r+23][c+6]='|';
	x[r+23][c+8]='"';
	x[r+23][c+9]='1';
	x[r+23][c+20]='//';
	x[r+23][c+25]='.';
	x[r+23][c+26]='"';

	// Row 24
	x[r+24][c+7]='"';
	x[r+24][c+8]='.';
	x[r+24][c+10]='\\';
	x[r+24][c+19]='|';
	x[r+24][c+20]=':';
	x[r+24][c+25]='//';

	// Row 25

	x[r+25][c+9]='\\';
	x[r+25][c+11]='|';
	x[r+25][c+19]='//';
	x[r+25][c+20]='"';
	x[r+25][c+21]=',';
	x[r+25][c+23]='.';
	x[r+25][c+24]='"';

	// Row 26
	x[r+26][c+10]='\\';
	x[r+26][c+11]='(';
	x[r+26][c+18]='(';
	x[r+26][c+20]=';';
	x[r+26][c+21]='z';
	x[r+26][c+22]='"';

	// Row 27
	x[r+27][c+11]='\\';
	x[r+27][c+12]=':';
	x[r+27][c+19]='\\';
	x[r+27][c+20]='"';
	x[r+27][c+21]='(';
	x[r+27][c+22]='_';

	// Row 28
	x[r+28][c+12]='\\';
	x[r+28][c+13]='_';
	x[r+28][c+14]=',';
	x[r+28][c+20]='"';
	x[r+28][c+21]='.';
	x[r+28][c+22]='_';
	x[r+28][c+24]='"';
	x[r+28][c+25]='-';
	x[r+28][c+26]='.';
	x[r+28][c+27]='_';
	x[r+28][c+28]='_';
	x[r+28][c+29]='_';
	DSF=1;
	break;
	}

	if (DSF==0)
	{
	// Row 0
	x[r][c]='_';
	x[r][c+1]='_';

	// Row 1
	x[r+1][c-4]='_';
	x[r+1][c-3]='.';
	x[r+1][c-2]='-';
	x[r+1][c-1]='"';
	x[r+1][c]='.';
	x[r+1][c+1]='-';
	x[r+1][c+2]='"';
	x[r+1][c+3]='"';
	x[r+1][c+4]='-';
	x[r+1][c+5]='.';
	x[r+1][c+6]='_';
	x[r+1][c+7]='_';

	// Row 2
	x[r+2][c-7]='.';
	x[r+2][c-6]='-';
	x[r+2][c-5]='"';
	x[r+2][c-4]='.';
	x[r+2][c+4]='"';
	x[r+2][c+5]='-';
	x[r+2][c+6]='.';
	x[r+2][c+7]='_';
	x[r+2][c+9]='_';
	x[r+2][c+10]='_';
	x[r+2][c+11]='.';
	x[r+2][c+12]='-';
	x[r+2][c+13]='-';
	x[r+2][c+14]='.';
	x[r+2][c+15]='_';

	// Row 3
	x[r+3][c-14]='-';
	x[r+3][c-13]='.';
	x[r+3][c-12]='.';
	x[r+3][c-11]='"';
	x[r+3][c-10]='\\';
	x[r+3][c-9]=',';
	x[r+3][c-8]='-';
	x[r+3][c-7]=',';
	x[r+3][c-6]='//';
	x[r+3][c-5]='.';
	x[r+3][c-4]='.';
	x[r+3][c-3]='-';
	x[r+3][c]='_';
	x[r+3][c+10]='.';
	x[r+3][c+11]='"';
	x[r+3][c+15]='\\';
	x[r+3][c+19]='"';
	x[r+3][c+20]='-';
	x[r+3][c+21]='-';
	x[r+3][c+22]='-';
	x[r+3][c+23]='.';
	x[r+3][c+24]='_';

	// Row 4
	x[r+4][c-13]=')';
	x[r+4][c-12]='.';
	x[r+4][c-10]='//';
	x[r+4][c-9]='_';
	x[r+4][c-7]='_';
	x[r+4][c-6]='\\';
	x[r+4][c-5]='"';
	x[r+4][c-3]='(';
	x[r+4][c-1]='"';
	x[r+4][c+1]='"';
	x[r+4][c+2]='.';
	x[r+4][c+12]='"';
	x[r+4][c+13]='-';
	x[r+4][c+16]='"';
	x[r+4][c+17]='//';
	x[r+4][c+18]='"';
	x[r+4][c+19]='-';
	x[r+4][c+20]='-';
	x[r+4][c+21]='-';
	x[r+4][c+22]='-';
	x[r+4][c+23]='-';
	x[r+4][c+24]='.';
	x[r+4][c+25]='_';
	x[r+4][c+26]='"';
	x[r+4][c+27]='-';
	x[r+4][c+28]='.';
	x[r+4][c+29]='_';
	x[r+4][c+30]='_';

	// Row 5
	x[r+5][c-13]='"';
	x[r+5][c-12]='.';
	x[r+5][c-11]='.';
	x[r+5][c-10]='"';
	x[r+5][c-9]='0';
	x[r+5][c-7]='0';
	x[r+5][c-4]='"';
	x[r+5][c-3]='-';
	x[r+5][c-2]='r';
	x[r+5][c+2]='_';
	x[r+5][c+9]='.';
	x[r+5][c+10]='-';
	x[r+5][c+11]='.';
	x[r+5][c+19]='"';
	x[r+5][c+20]='-';
	x[r+5][c+21]='.';
	x[r+5][c+22]='_';
	x[r+5][c+24]='\\';


	// Row 6
	x[r+6][c-13]='"';
	x[r+6][c-12]='.';
	x[r+6][c-11]='\\';
	x[r+6][c-10]='.';
	x[r+6][c-8]='Y';
	x[r+6][c-6]='.';
	x[r+6][c-5]=')';
	x[r+6][c-4]='.';
	x[r+6][c-3]='"';
	x[r+6][c+5]='(';
	x[r+6][c+7]='.';
	x[r+6][c+8]='"';
	x[r+6][c+11]='.';
	x[r+6][c+18]='.';
	x[r+6][c+19]='\\';
	x[r+6][c+30]='"';
	x[r+6][c+31]='\\';
	x[r+6][c+32]='"';
	x[r+6][c+33]='.';

	// Row 7
	x[r+7][c-13]='.';
	x[r+7][c-12]='-';
	x[r+7][c-11]='"';
	x[r+7][c-10]=')';
	x[r+7][c-9]='"';
	x[r+7][c-8]='|';
	x[r+7][c-7]='"';
	x[r+7][c-6]='//';
	x[r+7][c-5]='"';
	x[r+7][c-4]='-';
	x[r+7][c-3]='.';
	x[r+7][c+6]='\\';
	x[r+7][c+7]=')';
	x[r+7][c+12]=')';
	x[r+7][c+19]='"';
	x[r+7][c+20]='"';
	x[r+7][c+21]=',';
	x[r+7][c+22]='_';
	x[r+7][c+29]='_';
	x[r+7][c+30]='.';
	x[r+7][c+31]='c';
	x[r+7][c+32]='_';
	x[r+7][c+33]='.';
	x[r+7][c+34]='\\';

	// Row 8
	x[r+8][c-11]='.';
	x[r+8][c-10]='<';
	x[r+8][c-9]=',';
	x[r+8][c-7]=',';
	x[r+8][c-6]='>';
	x[r+8][c-5]='.';
	x[r+8][c+6]='|';
	x[r+8][c+10]='_';
	x[r+8][c+11]='//';
	x[r+8][c+12]='\\';
	x[r+8][c+21]='.';
	x[r+8][c+23]='"';
	x[r+8][c+24]=',';
	x[r+8][c+28]=':';
	x[r+8][c+31]=':';
	x[r+8][c+34]='\\';
	x[r+8][c+35]='\\';

	// Row 9
	x[r+9][c-12]='.';
	x[r+9][c-11]='"';
	x[r+9][c-9]='\\';
	x[r+9][c-8]='_';
	x[r+9][c-7]='//';
	x[r+9][c-5]='"';
	x[r+9][c-4]='.';
	x[r+9][c+5]='//';
	x[r+9][c+8]='.';
	x[r+9][c+9]='"';
	x[r+9][c+13]='|';
	x[r+9][c+24]='"';
	x[r+9][c+25]='.';
	x[r+9][c+30]='.';
	x[r+9][c+31]='"';
	x[r+9][c+35]='\\';
	x[r+9][c+36]=')';

	// Row 10
	x[r+10][c+4]='//';
	x[r+10][c+6]='.';
	x[r+10][c+7]='-';
	x[r+10][c+8]='"';
	x[r+10][c+13]='"';
	x[r+10][c+14]='-';
	x[r+10][c+15]='.';
	x[r+10][c+24]=':';
	x[r+10][c+26]='\\';
	x[r+10][c+29]='_';
	x[r+10][c+30]=';';
	x[r+10][c+35]='|';
	x[r+10][c+36]='|';

	// Row 11
	x[r+11][c+3]='//';
	x[r+11][c+5]='//';
	x[r+11][c+10]='_';
	x[r+11][c+16]='\\';
	x[r+11][c+17]='_';
	x[r+11][c+24]='"';
	x[r+11][c+25]='.';
	x[r+11][c+26]='"';
	x[r+11][c+27]='\\';
	x[r+11][c+29]='"';
	x[r+11][c+31]='//';
	x[r+11][c+35]='|';
	x[r+11][c+36]='|';

	// Row 12
	x[r+12][c+2]='//';
	x[r+12][c+3]='.';
	x[r+12][c+4]='"';
	x[r+12][c+8]='.';
	x[r+12][c+9]='"';
	x[r+12][c+18]='\\';
	x[r+12][c+19]='_';
	x[r+12][c+26]='.';
	x[r+12][c+27]='|';
	x[r+12][c+31]='\\';
	x[r+12][c+35]='\\';
	x[r+12][c+36]='|';

	// Row 13
	x[r+13][c+1]='//';
	x[r+13][c+3]='//';
	x[r+13][c+7]='//';
	x[r+13][c+14]='_';
	x[r+13][c+15]='_';
	x[r+13][c+16]='.';
	x[r+13][c+17]='-';
	x[r+13][c+18]='-';
	x[r+13][c+19]='-';
	x[r+13][c+20]='"';
	x[r+13][c+27]='"';
	x[r+13][c+28]='.';
	x[r+13][c+29]='_';
	x[r+13][c+32]=';';
	x[r+13][c+35]='|';
	x[r+13][c+36]='|';

	// Row 14 
	x[r+14][c]='//';
	x[r+14][c+1]='.';
	x[r+14][c+2]='"';
	x[r+14][c+5]='_';
	x[r+14][c+6]=':';
	x[r+14][c+7]='-';
	x[r+14][c+8]='.';
	x[r+14][c+9]='_';
	x[r+14][c+10]='_';
	x[r+14][c+11]='_';
	x[r+14][c+12]='_';
	x[r+14][c+13]='<';
	x[r+14][c+15]=',';
	x[r+14][c+28]='"';
	x[r+14][c+29]='.';
	x[r+14][c+30]='\\';
	x[r+14][c+32]='\\';
	x[r+14][c+35]='|';
	x[r+14][c+36]='|';
	
	// Row 15
	x[r+15][c-1]='//';
	x[r+15][c]='//';
	x[r+15][c+2]='.';
	x[r+15][c+3]='-';
	x[r+15][c+4]='"';
	x[r+15][c+10]='"';
	x[r+15][c+11]='-';
	x[r+15][c+12]='.';
	x[r+15][c+13]='_';
	x[r+15][c+14]='_';
	x[r+15][c+17]='"';
	x[r+15][c+18]='-';
	x[r+15][c+19]='"';
	x[r+15][c+20]='-';
	x[r+15][c+21]='\\';
	x[r+15][c+22]='_';
	x[r+15][c+29]='"';
	x[r+15][c+30]='.';
	x[r+15][c+31]='\\';
	x[r+15][c+32]='/';
	x[r+15][c+33]='_';
	x[r+15][c+35]='\\';
	x[r+15][c+36]='|';

	// Row 16
	x[r+16][c-2]='(';
	x[r+16][c]='}';
	x[r+16][c+1]=';';
	x[r+16][c+2]='=';
	x[r+16][c+3]='=';
	x[r+16][c+4]='=';
	x[r+16][c+5]='=';
	x[r+16][c+6]='.';
	x[r+16][c+7]='=';
	x[r+16][c+8]='=';
	x[r+16][c+9]='=';
	x[r+16][c+10]='-';
	x[r+16][c+11]='=';
	x[r+16][c+12]='=';
	x[r+16][c+13]='=';
	x[r+16][c+14]='"';
	x[r+16][c+23]='"';
	x[r+16][c+24]='.';
	x[r+16][c+29]='.';
	x[r+16][c+32]='\\';
	x[r+16][c+33]='\\';
	x[r+16][c+34]=':';
	x[r+16][c+36]='\\';

	// Row 17
	x[r+17][c-1]='\\';
	x[r+17][c]='\\';
	x[r+17][c+2]='"';
	x[r+17][c+3]='.';
	x[r+17][c+4]='_';
	x[r+17][c+13]='//';
	x[r+17][c+24]=':';
	x[r+17][c+28]=',';
	x[r+17][c+29]='"';
	x[r+17][c+33]=')';
	x[r+17][c+34]='\\';
	x[r+17][c+35]='_';
	x[r+17][c+37]='\\';

	// Row 18
	x[r+18][c]='\\';
	x[r+18][c+1]='\\';
	x[r+18][c+5]='"';
	x[r+18][c+6]='-';
	x[r+18][c+7]='-';
	x[r+18][c+8]='-';
	x[r+18][c+9]='-';
	x[r+18][c+10]='-';
	x[r+18][c+11]='-';
	x[r+18][c+12]='//';
	x[r+18][c+25]='\\';
	x[r+18][c+27]='.';
	x[r+18][c+32]='//';
	x[r+18][c+36]=')';
	x[r+18][c+37]='//';

	// Row 19
	x[r+19][c+1]='\\';
	x[r+19][c+2]='|';
	x[r+19][c+11]='_';
	x[r+19][c+12]='|';
	x[r+19][c+26]=')';
	x[r+19][c+27]='Y';
	x[r+19][c+32]='|';
	x[r+19][c+36]='//';

	// Row 20
	x[r+20][c+2]='\\';
	x[r+20][c+3]='\\';
	x[r+20][c+10]='\\';
	x[r+20][c+24]='.';
	x[r+20][c+25]='"';
	x[r+20][c+26]=',';
	x[r+20][c+27]='"';
	x[r+20][c+31]='//';
	x[r+20][c+34]=',';
	x[r+20][c+35]='//';

	// Row 21
	x[r+21][c+3]='\\';
	x[r+21][c+4]='\\';
	x[r+20][c+9]='_';
	x[r+21][c+10]='//';
	x[r+21][c+23]='//';
	x[r+21][c+30]='_';
	x[r+21][c+31]='//';

	// Row 22
	x[r+22][c+4]='\\';
	x[r+22][c+5]='\\';
	x[r+22][c+9]='\\';
	x[r+22][c+21]='.';
	x[r+22][c+22]='"';
	x[r+22][c+27]='.';
	x[r+22][c+28]='"';

	// Row 23
	x[r+23][c+5]='"';
	x[r+23][c+6]='|';
	x[r+23][c+8]='"';
	x[r+23][c+9]='1';
	x[r+23][c+20]='//';
	x[r+23][c+25]='.';
	x[r+23][c+26]='"';

	// Row 24
	x[r+24][c+7]='"';
	x[r+24][c+8]='.';
	x[r+24][c+10]='\\';
	x[r+24][c+19]='|';
	x[r+24][c+20]=':';
	x[r+24][c+25]='//';

	// Row 25

	x[r+25][c+9]='\\';
	x[r+25][c+11]='|';
	x[r+25][c+19]='//';
	x[r+25][c+20]='"';
	x[r+25][c+21]=',';
	x[r+25][c+23]='.';
	x[r+25][c+24]='"';

	// Row 26
	x[r+26][c+10]='\\';
	x[r+26][c+11]='(';
	x[r+26][c+18]='(';
	x[r+26][c+20]=';';
	x[r+26][c+21]='z';
	x[r+26][c+22]='"';

	// Row 27
	x[r+27][c+11]='\\';
	x[r+27][c+12]=':';
	x[r+27][c+19]='\\';
	x[r+27][c+20]='"';
	x[r+27][c+21]='(';
	x[r+27][c+22]='_';

	// Row 28
	x[r+28][c+12]='\\';
	x[r+28][c+13]='_';
	x[r+28][c+14]=',';
	x[r+28][c+20]='"';
	x[r+28][c+21]='.';
	x[r+28][c+22]='_';
	x[r+28][c+24]='"';
	x[r+28][c+25]='-';
	x[r+28][c+26]='.';
	x[r+28][c+27]='_';
	x[r+28][c+28]='_';
	x[r+28][c+29]='_';
	DSF=1;
	break;
	}
	if (DSF==1||DSF==2)
	{
		// Row 0

		// Row 1

		// Row 2
		x[r+2][c]='-';
		x[r+2][c+1]='=';
		x[r+2][c+2]='=';
		x[r+2][c+3]='\\';
		x[r+2][c+4]='\\';
		x[r+2][c+30]='`';
		x[r+2][c+31]='//';
		x[r+2][c+32]='//';
		x[r+2][c+33]='~';
		x[r+2][c+34]='\\';
		x[r+2][c+35]='\\';
		x[r+2][c+39]='~';
		x[r+2][c+40]='~';
		x[r+2][c+41]='~';
		x[r+2][c+42]='~';
		x[r+2][c+43]='`';
		x[r+2][c+44]='-';
		x[r+2][c+45]='-';
		x[r+2][c+46]='-';
		x[r+2][c+47]='.';
		x[r+2][c+48]='_';
		x[r+2][c+49]='_';
		x[r+2][c+50]='_';
		x[r+2][c+51]='.';
		x[r+2][c+52]='-';
		x[r+2][c+53]='~';
		x[r+2][c+54]='~';

		// Row 3
		x[r+3][c-4]='_';
		x[r+3][c-3]='_';
		x[r+3][c-2]='_';
		x[r+3][c-1]='_';
		x[r+3][c]='_';
		x[r+3][c+1]='_';
		x[r+3][c+2]='-';
		x[r+3][c+3]='=';
		x[r+3][c+4]='=';
		x[r+3][c+5]='|';
		x[r+3][c+31]='|';
		x[r+3][c+33]='|';
		x[r+3][c+36]='\\';
		x[r+3][c+37]='\\';
		x[r+3][c+49]='_';
		x[r+3][c+50]='-';
		x[r+3][c+51]='~';
		x[r+3][c+52]='`';
		
		// Row 4
		x[r+4][c-10]='_';
		x[r+4][c-9]='_';
		x[r+4][c-8]='-';
		x[r+4][c-7]='-';
		x[r+4][c-6]='~';
		x[r+4][c-5]='~';
		x[r+4][c-4]='~';
		x[r+4][c-1]=',';
		x[r+4][c]='-';
		x[r+4][c+1]='//';
		x[r+4][c+2]='-';
		x[r+4][c+3]='=';
		x[r+4][c+4]='=';
		x[r+4][c+5]='\\';
		x[r+4][c+6]='\\';
		x[r+4][c+31]='|';
		x[r+4][c+33]='|';
		x[r+4][c+37]='`';
		x[r+4][c+38]='\\';
		x[r+4][c+47]=',';
		x[r+4][c+48]='"';

		// Row 5
		x[r+5][c-13]='_';
		x[r+5][c-12]='-';
		x[r+5][c-11]='~';
		x[r+5][c-3]='//';
		x[r+5][c-2]='"';
		x[r+5][c+3]='|';
		x[r+5][c+6]='\\';
		x[r+5][c+7]='\\';
		x[r+5][c+30]='//';
		x[r+5][c+32]='//';
		x[r+5][c+39]='\\';
		x[r+5][c+46]='//';

		// Row 6
		x[r+6][c-15]='.';
		x[r+6][c-14]='"';
		x[r+6][c-5]='//';
		x[r+6][c+3]='|';
		x[r+6][c+7]='\\';
		x[r+6][c+8]='\\';
		x[r+6][c+28]='//';
		x[r+6][c+29]='"';
		x[r+6][c+31]='//';
		x[r+6][c+40]='\\';
		x[r+6][c+44]='//';
		x[r+6][c+45]='"';

		// Row 7
		x[r+7][c-16]='//';
		x[r+7][c-13]='_';
		x[r+7][c-12]='_';
		x[r+7][c-11]='_';
		x[r+7][c-10]='_';
		x[r+7][c-7]='//';
		x[r+7][c+3]='|';
		x[r+7][c+8]='\\';
		x[r+7][c+9]='`';
		x[r+7][c+10]='\\';
		x[r+7][c+11]='.';
		x[r+7][c+12]='_';
		x[r+7][c+13]='_';
		x[r+7][c+14]='//';
		x[r+7][c+15]='-';
		x[r+7][c+16]='~';
		x[r+7][c+17]='~';
		x[r+7][c+19]='~';
		x[r+7][c+21]='\\';
		x[r+7][c+23]='_';
		x[r+7][c+25]='_';
		x[r+7][c+26]='//';
		x[r+7][c+27]='"';
		x[r+7][c+30]='/';
		x[r+7][c+41]='\\';
		x[r+7][c+42]='//';
		x[r+7][c+43]='"';

		// Row 8
		x[r+8][c-17]='/';
		x[r+8][c-16]='-';
		x[r+8][c-15]='"';
		x[r+8][c-14]='~';
		x[r+8][c-9]='~';
		x[r+8][c-8]='~';
		x[r+8][c-7]='~';
		x[r+8][c-6]='~';
		x[r+8][c-5]='~';
		x[r+8][c-4]='-';
		x[r+8][c-3]='-';
		x[r+8][c-2]='-';
		x[r+8][c-1]='_';
		x[r+8][c]='_';
		x[r+8][c+3]='|';
		x[r+8][c+8]='~';
		x[r+8][c+9]='-';
		x[r+8][c+10]='//';
		x[r+8][c+11]='~';
		x[r+8][c+21]='(';
		x[r+8][c+23]=')';
		x[r+8][c+27]='//';
		x[r+8][c+28]='"';
		x[r+8][c+37]='_';
		x[r+8][c+38]='-';
		x[r+8][c+39]='-';
		x[r+8][c+40]='~';
		x[r+8][c+41]='`';

		// Row 9
		x[r+9][c+1]='\\';
		x[r+9][c+2]='_';
		x[r+9][c+3]='|';
		x[r+9][c+10]='//';
		x[r+9][c+19]='_';
		x[r+9][c+20]=')';
		x[r+9][c+24]=';';
		x[r+9][c+27]=')';
		x[r+9][c+28]=',';
		x[r+9][c+31]='_';
		x[r+9][c+32]='_';
		x[r+9][c+33]='-';
		x[r+9][c+34]='-';
		x[r+9][c+35]='~';
		x[r+9][c+36]='~';

		// Row 10

		x[r+10][c+3]='"';
		x[r+10][c+4]='~';
		x[r+10][c+5]='~';
		x[r+10][c+6]='-';
		x[r+10][c+7]='-';
		x[r+10][c+8]='_';
		x[r+10][c+9]='//';
		x[r+10][c+16]='_';
		x[r+10][c+17]='-';
		x[r+10][c+18]='~';
		x[r+10][c+19]='/';
		x[r+10][c+20]='-';
		x[r+10][c+23]='//';
		x[r+10][c+25]='\\';
		x[r+10][c+29]='"';
		x[r+10][c+30]='-';
		x[r+10][c+31]='~';
		x[r+10][c+33]='\\';

		// Row 11
		x[r+11][c+2]='{';
		x[r+11][c+3]='\\';
		x[r+11][c+4]='_';
		x[r+11][c+5]='_';
		x[r+11][c+6]='-';
		x[r+11][c+7]='-';
		x[r+11][c+8]='_';
		x[r+11][c+9]='//';
		x[r+11][c+10]='}';
		x[r+11][c+15]='//';
		x[r+11][c+17]='\\';
		x[r+11][c+18]='\\';
		x[r+11][c+19]='_';
		x[r+11][c+20]='>';
		x[r+11][c+21]='-';
		x[r+11][c+23]=')';
		x[r+11][c+24]='<';
		x[r+11][c+25]='_';
		x[r+11][c+26]='_';
		x[r+11][c+27]='\\';
		x[r+11][c+34]='\\';

		// Row 12
		x[r+12][c+2]='//';
		x[r+12][c+3]='"';
		x[r+12][c+7]='(';
		x[r+12][c+8]='_';
		x[r+12][c+9]='//';
		x[r+12][c+12]='_';
		x[r+12][c+13]='-';
		x[r+12][c+14]='~';
		x[r+12][c+17]='|';
		x[r+12][c+19]='|';
		x[r+12][c+20]='_';
		x[r+12][c+21]='_';
		x[r+12][c+22]='>';
		x[r+12][c+23]='-';
		x[r+12][c+24]='-';
		x[r+12][c+25]='>';
		x[r+12][c+26]='_';
		x[r+12][c+27]='_';
		x[r+12][c+28]='|';
		x[r+12][c+30]='_';
		x[r+12][c+35]='|';

		// Row 13
		x[r+13][c+1]='|';
		x[r+13][c+2]='0';
		x[r+13][c+5]='0';
		x[r+13][c+7]='_';
		x[r+13][c+8]='/';
		x[r+13][c+9]=')';
		x[r+13][c+11]=')';
		x[r+13][c+12]='-';
		x[r+13][c+13]='~';
		x[r+13][c+19]='|';
		x[r+13][c+21]='|';
		x[r+13][c+22]='_';
		x[r+13][c+23]='_';
		x[r+13][c+24]='>';
		x[r+13][c+25]='-';
		x[r+13][c+26]='-';
		x[r+13][c+27]='<';
		x[r+13][c+28]='_';
		x[r+13][c+29]='_';
		x[r+13][c+30]='|';
		x[r+13][c+36]='|';

		// Row 14
		x[r+14][c+1]='//';
		x[r+14][c+3]='//';
		x[r+14][c+4]='~';
		x[r+14][c+6]=',';
		x[r+14][c+7]='_';
		x[r+14][c+8]='//';
		x[r+14][c+16]='//';
		x[r+14][c+18]='//';
		x[r+14][c+19]='_';
		x[r+14][c+20]='_';
		x[r+14][c+21]='>';
		x[r+14][c+22]='-';
		x[r+14][c+23]='-';
		x[r+14][c+24]='-';
		x[r+14][c+25]='<';
		x[r+14][c+26]='_';
		x[r+14][c+27]='_';
		x[r+14][c+28]='//';
		x[r+14][c+35]='|';

		// Row 15
		x[r+15][c]='o';
		x[r+15][c+2]='o';
		x[r+15][c+4]='_';
		x[r+15][c+5]='//';
		x[r+15][c+6]='//';
		x[r+15][c+15]='//';
		x[r+15][c+16]='-';
		x[r+15][c+17]='~';
		x[r+15][c+18]='_';
		x[r+15][c+19]='>';
		x[r+15][c+20]='-';
		x[r+15][c+21]='-';
		x[r+15][c+22]='-';
		x[r+15][c+23]='<';
		x[r+15][c+24]='_';
		x[r+15][c+25]='_';
		x[r+15][c+26]='-';
		x[r+15][c+27]='~';
		x[r+15][c+34]='//';

		// Row 16

		x[r+16][c]='(';
		x[r+16][c+1]='^';
		x[r+16][c+2]='(';
		x[r+16][c+3]='~';
		x[r+16][c+14]='//';
		x[r+16][c+15]='~';
		x[r+16][c+16]='_';
		x[r+16][c+17]='>';
		x[r+16][c+18]='-';
		x[r+16][c+19]='-';
		x[r+16][c+20]='-';
		x[r+16][c+21]='<';
		x[r+16][c+22]='_';
		x[r+16][c+23]='_';
		x[r+16][c+24]='-';
		x[r+16][c+31]='_';
		x[r+16][c+32]='-';
		x[r+16][c+33]='~';

		// Row 17

		x[r+17][c+13]='//';
		x[r+17][c+14]='_';
		x[r+17][c+15]='_';
		x[r+17][c+16]='>';
		x[r+17][c+17]='-';
		x[r+17][c+18]='-';
		x[r+17][c+19]='<';
		x[r+17][c+20]='_';
		x[r+17][c+21]='_';
		x[r+17][c+22]='//';
		x[r+17][c+28]='_';
		x[r+17][c+29]='-';
		x[r+17][c+30]='~';

		// Row 18

		x[r+18][c+12]='|';
		x[r+18][c+13]='_';
		x[r+18][c+14]='_';
		x[r+18][c+15]='>';
		x[r+18][c+16]='-';
		x[r+18][c+17]='-';
		x[r+18][c+18]='<';
		x[r+18][c+19]='_';
		x[r+18][c+20]='_';
		x[r+18][c+21]='|';
		x[r+18][c+27]='//';
		x[r+18][c+46]='.';
		x[r+18][c+47]='-';
		x[r+18][c+48]='-';
		x[r+18][c+49]='-';
		x[r+18][c+50]='-';
		x[r+18][c+51]='_';

		// Row 19
		x[r+19][c+12]='|';
		x[r+19][c+13]='_';
		x[r+19][c+14]='_';
		x[r+19][c+15]='>';
		x[r+19][c+16]='-';
		x[r+19][c+17]='-';
		x[r+19][c+18]='<';
		x[r+19][c+19]='_';
		x[r+19][c+20]='_';
		x[r+19][c+21]='|';
		x[r+19][c+26]='|';
		x[r+19][c+44]='//';
		x[r+19][c+45]='"';
		x[r+19][c+47]='_';
		x[r+19][c+48]='-';
		x[r+19][c+49]='-';
		x[r+19][c+50]='-';
		x[r+19][c+51]='_';
		x[r+19][c+52]='~';
		x[r+19][c+53]='\\';

		// Row 20
		x[r+20][c+12]='|';
		x[r+20][c+13]='_';
		x[r+20][c+14]='_';
		x[r+20][c+15]='>';
		x[r+20][c+16]='-';
		x[r+20][c+17]='-';
		x[r+20][c+18]='<';
		x[r+20][c+19]='_';
		x[r+20][c+20]='_';
		x[r+20][c+21]='|';
		x[r+20][c+26]='|';
		x[r+20][c+42]='//';
		x[r+20][c+43]='"';
		x[r+20][c+46]='//';
		x[r+20][c+52]='~';
		x[r+20][c+53]='\\';
		x[r+20][c+54]='`';
		x[r+20][c+55]='\\';



		// Row 21
		x[r+21][c+13]='\\';
		x[r+21][c+14]='_';
		x[r+21][c+15]='_';
		x[r+21][c+16]='>';
		x[r+21][c+17]='-';
		x[r+21][c+18]='-';
		x[r+21][c+19]='<';
		x[r+21][c+20]='_';
		x[r+21][c+21]='_';
		x[r+21][c+22]='\\';
		x[r+21][c+27]='\\';
		x[r+21][c+40]='//';
		x[r+20][c+41]='"';
		x[r+21][c+44]='//';
		x[r+21][c+45]='//';
		x[r+21][c+54]='|';
		x[r+21][c+55]='|';

		// Row 22
		x[r+22][c+14]='~';
		x[r+22][c+15]='-';
		x[r+22][c+16]='_';
		x[r+22][c+17]='_';
		x[r+22][c+18]='>';
		x[r+22][c+19]='-';
		x[r+22][c+20]='-';
		x[r+22][c+21]='<';
		x[r+22][c+22]='_';
		x[r+22][c+23]='~';
		x[r+22][c+24]='-';
		x[r+22][c+25]='_';
		x[r+22][c+28]='~';
		x[r+22][c+29]='-';
		x[r+22][c+30]='-';
		x[r+22][c+31]='_';
		x[r+22][c+32]='_';
		x[r+22][c+33]='_';
		x[r+22][c+34]='_';
		x[r+22][c+35]='-';
		x[r+22][c+36]='-';
		x[r+22][c+37]='-';
		x[r+22][c+38]='~';
		x[r+22][c+39]='"';
		x[r+22][c+41]='_';
		x[r+22][c+42]='//';
		x[r+22][c+43]='"';
		x[r+22][c+44]='//';
		x[r+22][c+53]='//';
		x[r+22][c+54]='"';

		// Row 23
		x[r+23][c+17]='~';
		x[r+23][c+18]='-';
		x[r+23][c+19]='_';
		x[r+23][c+20]='~';
		x[r+23][c+21]='>';
		x[r+23][c+22]='-';
		x[r+23][c+23]='-';
		x[r+23][c+24]='<';
		x[r+23][c+25]='_';
		x[r+23][c+26]='//';
		x[r+23][c+27]='-';
		x[r+23][c+28]='_';
		x[r+23][c+29]='_';
		x[r+23][c+37]='_';
		x[r+23][c+38]='_';
		x[r+23][c+39]='-';
		x[r+23][c+40]='~';
		x[r+23][c+42]='_';
		x[r+23][c+43]='//';

		// Row 24
		x[r+24][c+20]='~';
		x[r+24][c+21]='~';
		x[r+24][c+22]='-';
		x[r+24][c+23]='"';
		x[r+24][c+24]='_';
		x[r+24][c+25]='//';
		x[r+24][c+26]='_';
		x[r+24][c+27]='//';
		x[r+24][c+29]='//';
		for (int i=c+30;i<c+37;i++)
		{
			x[r+24][i]='~';
		}
		x[r+24][c+37]='_';
		x[r+24][c+38]='_';
		x[r+24][c+39]='-';
		x[r+24][c+40]='-';
		x[r+24][c+41]='~';
		// Row 25
		for (int i=c+27;i<c+37;i++)
		{
			x[r+25][i]='~';
		}
		
		if (DSF==1)
		{
			x[r+17][c-1]=',';
			x[r+17][c]='//';
			x[r+17][c+1]='|';

			// Row 18
			x[r+18][c-4]=',';
			x[r+18][c-3]='//';
			x[r+18][c-2]='//';
			x[r+18][c-1]='(';
			x[r+18][c]='"';
			x[r+18][c+1]='(';

			// Row 19
			x[r+19][c-5]='(';
			x[r+19][c-3]='(';
			x[r+19][c-2]='"';
			x[r+19][c-1]=')';
			x[r+19][c]=')';

			// Row 20
			x[r+20][c-8]='`';
			x[r+20][c-7]='-';
			x[r+20][c-6]=')';
			x[r+20][c-5]=')';
			x[r+20][c-3]=')';
			x[r+20][c-2]=')';
			x[r+20][c]='(';

			// Row 21
			x[r+21][c-9]=',';
			x[r+21][c-8]='//';
			x[r+21][c-7]=',';
			x[r+21][c-6]='"';
			x[r+21][c-5]='//';
			x[r+21][c-4]='//';
			x[r+21][c-3]='(';
			x[r+21][c-1]='(';

			// Row 22
			x[r+22][c-11]=',';
			x[r+22][c-10]='(';
			x[r+22][c-8]='(';
			x[r+22][c-6]='(';
			x[r+22][c-5]='(';
			x[r+22][c-4]='(';
			x[r+22][c-3]=',';
			x[r+22][c-1]=')';
			x[r+22][c]=')';

			// Row 23
			x[r+23][c-13]='`';
			x[r+23][c-12]='~';
			x[r+23][c-11]='//';
			x[r+23][c-7]=')';
			x[r+23][c-6]='~';
			x[r+23][c-4]=')';
			x[r+23][c-3]=',';
			x[r+23][c-2]='//';
			x[r+23][c-1]='|';

			// Row 24

			x[r+24][c-15]='.';
			x[r+24][c-14]='_';
			x[r+24][c-13]='-';
			x[r+24][c-12]='~';
			x[r+24][c-11]='//';
			x[r+24][c-10]='//';
			x[r+24][c-9]='(';
			x[r+24][c-7]=')';
			x[r+24][c-6]='//';
			x[r+24][c-4]=')';
			x[r+24][c-3]=')';
			x[r+24][c-1]='`';

			// Row 25
			x[r+25][c-14]=';';
			x[r+25][c-13]='"';
			x[r+25][c-12]='(';
			x[r+25][c-10]='"';
			x[r+25][c-9]=')';
			x[r+25][c-8]='//';
			x[r+25][c-6]=',';
			x[r+25][c-5]=')';
			x[r+25][c-4]='(';

			// Row 26

			x[r+26][c-15]='"';
			x[r+26][c-13]='"';
			x[r+26][c-12]=')';
			x[r+26][c-10]='"';
			x[r+26][c-9]='(';
			x[r+26][c-7]='(';
			x[r+26][c-6]='//';

			x[r+27][c-13]='"';
			x[r+27][c-9]='"';
			x[r+26][c-6]='`';
			DSF=2;
			break;



		}
		
		if (DSF==2)
		{
			x[r+17][c-1]=',';
			x[r+17][c]='\\';
			x[r+17][c+1]='|';

			// Row 18
			x[r+18][c-4]=',';
			x[r+18][c-3]='\\';
			x[r+18][c-2]='\\';
			x[r+18][c-1]=')';
			x[r+18][c]='"';
			x[r+18][c+1]=')';

			// Row 19
			x[r+19][c-5]=')';
			x[r+19][c-3]=')';
			x[r+19][c-2]='"';
			x[r+19][c-1]='(';
			x[r+19][c]='(';

			// Row 20
			x[r+20][c-8]='`';
			x[r+20][c-7]='-';
			x[r+20][c-6]='(';
			x[r+20][c-5]='(';
			x[r+20][c-3]='(';
			x[r+20][c-2]='(';
			x[r+20][c]=')';

			// Row 21
			x[r+21][c-9]=',';
			x[r+21][c-8]='\\';
			x[r+21][c-7]=',';
			x[r+21][c-6]='"';
			x[r+21][c-5]='\\';
			x[r+21][c-4]='\\';
			x[r+21][c-3]=')';
			x[r+21][c-1]=')';

			// Row 22
			x[r+22][c-11]=',';
			x[r+22][c-10]=')';
			x[r+22][c-8]=')';
			x[r+22][c-6]=')';
			x[r+22][c-5]=')';
			x[r+22][c-4]=')';
			x[r+22][c-3]=',';
			x[r+22][c-1]='(';
			x[r+22][c]='(';

			// Row 23
			x[r+23][c-13]='`';
			x[r+23][c-12]='~';
			x[r+23][c-11]='\\';
			x[r+23][c-7]='(';
			x[r+23][c-6]='~';
			x[r+23][c-4]='(';
			x[r+23][c-3]=',';
			x[r+23][c-2]='\\';
			x[r+23][c-1]='|';

			// Row 24

			x[r+24][c-15]='.';
			x[r+24][c-14]='_';
			x[r+24][c-13]='-';
			x[r+24][c-12]='~';
			x[r+24][c-11]='\\';
			x[r+24][c-10]='\\';
			x[r+24][c-9]=')';
			x[r+24][c-7]='(';
			x[r+24][c-6]='\\';
			x[r+24][c-4]='(';
			x[r+24][c-3]='(';
			x[r+24][c-1]='`';

			// Row 25
			x[r+25][c-14]=';';
			x[r+25][c-13]='"';
			x[r+25][c-12]=')';
			x[r+25][c-10]='"';
			x[r+25][c-9]='(';
			x[r+25][c-8]='\\';
			x[r+25][c-6]=',';
			x[r+25][c-5]='(';
			x[r+25][c-4]=')';

			// Row 26

			x[r+26][c-15]='"';
			x[r+26][c-13]='"';
			x[r+26][c-12]='(';
			x[r+26][c-10]='"';
			x[r+26][c-9]=')';
			x[r+26][c-7]=')';
			x[r+26][c-6]='\\';

			x[r+27][c-13]='"';
			x[r+27][c-9]='"';
			x[r+26][c-6]='`';
			DSF=0;
			break;
		}
		break;
		}

	}

}

// Princess
void Draw_Princess ( char x[][2560] , int r , int c)
{
	// row zero
	x[r][c]='=';
	x[r][c+1]='=';
	x[r][c+2]='=';
	// row one
	x[r+1][c-5]='(';
	x[r+1][c-4]='`';
	x[r+1][c-3]='\\';
	x[r+1][c-2]=',';
	x[r+1][c-1]=';';
	x[r+1][c]='+';
	x[r+1][c+1]='+';
	x[r+1][c+2]='+';
	x[r+1][c+3]=';';
	x[r+1][c+4]=',';
	x[r+1][c+5]='//';
	x[r+1][c+6]='`';
	x[r+1][c+7]=')';
	// row two
	x[r+2][c-6]='(';
	x[r+2][c-5]='-';
	x[r+2][c-3]='(';
	x[r+2][c-2]='(';
	x[r+2][c-1]='(';
	x[r+2][c]='^';
	x[r+2][c+1]='.';
	x[r+2][c+2]='^';
	x[r+2][c+3]=')';
	x[r+2][c+4]=')';
	x[r+2][c+5]=')';
	x[r+2][c+7]='-';
	x[r+2][c+8]=')';
	// row three
	x[r+3][c-7]='(';
	x[r+3][c-6]='-';
	x[r+3][c-2]=')';
	x[r+3][c-1]=')';
	x[r+3][c]='\\';
	x[r+3][c+1]='-';
	x[r+3][c+2]='//';
	x[r+3][c+3]='(';
	x[r+3][c+4]='(';
	x[r+3][c+8]='-';
	x[r+3][c+9]=')';
	// row four 
	x[r+4][c-7]='(';
	x[r+4][c-6]='-';
	x[r+4][c-2]='(';
	x[r+4][c-1]='(';
	x[r+4][c]=')';
	x[r+4][c+2]='(';
	x[r+4][c+3]=')';
	x[r+4][c+4]=')';
	x[r+4][c+8]='-';
	x[r+4][c+9]=')';
	// row five
	x[r+5][c-6]='\\';
	x[r+5][c-2]='`';
	x[r+5][c-1]='//';
	x[r+5][c]='`';
	x[r+5][c+1]='@';
	x[r+5][c+2]='`';
	x[r+5][c+3]='\\';
	x[r+5][c+4]='`';
	x[r+5][c+8]='//';
	// row six
	x[r+6][c-5]='\\';
	x[r+6][c-2]='//';
	x[r+6][c+4]='\\';
	x[r+6][c+7]='//';
	// row seven
	x[r+7][c-4]='\\';
	x[r+7][c-3]='//';
	x[r+7][c+5]='\\';
	x[r+7][c+6]='//';
	// row eight
	x[r+8][c-4]='//';
	x[r+8][c+6]='\\';
	// row nine 
	x[r+9][c-5]='//';
	x[r+9][c-4]='_';
	x[r+9][c-3]='//';
	x[r+9][c-2]='_';
	x[r+9][c-1]='//';
	x[r+9][c]='_';
	x[r+9][c+1]='|';
	x[r+9][c+2]='_';
	x[r+9][c+3]='\\';
	x[r+9][c+4]='_';
	x[r+9][c+5]='\\';
	x[r+9][c+6]='_';
	x[r+9][c+7]='\\';

}
void Move_Princess (int &r,int &ct)
{

	if (ct<5)
	{
	r-=2;
	ct++;
	}

}

// Mountain
void Draw_Mountain ( char x[][2560] , int r , int c )
{

	// row zero
	x[r][c]='//';
	x[r][c+1]='\\';
	x[r][c+2]='_';
	// row one
	x[r+1][c-2]='_';
	x[r+1][c-1]='//';
	x[r+1][c]='M';
	x[r+1][c+1]=';';
	x[r+1][c+3]='\\';
	// row two
	x[r+2][c-3]='//';
	x[r+2][c-2]='M';
	x[r+2][c-1]='M';
	x[r+2][c]='I';
	x[r+2][c+1]=':';
	x[r+2][c+4]='\\';
	// row three
	x[r+3][c-5]='//';
	x[r+3][c-4]='M';
	x[r+3][c-3]='M';
	x[r+3][c-2]='W';
	x[r+3][c-1]='I';
	x[r+3][c]='I';
	x[r+3][c+1]=';';
	x[r+3][c+5]='\\';
	//row four
	x[r+4][c-6]='//';
	x[r+4][c-5]='M';
	x[r+4][c-4]='M';
	x[r+4][c-3]='W';
	x[r+4][c-2]='I';
	x[r+4][c-1]='I';
	x[r+4][c]='I';
	x[r+4][c+1]='I';
	x[r+4][c+2]=';';
	x[r+4][c+6]='\\';
	// row five
	x[r+5][c-7]='//';
	x[r+5][c-5]='I';
	x[r+5][c-4]='M';
	x[r+5][c-3]='W';
	x[r+5][c-2]='I';
	x[r+5][c-1]='I';
	x[r+5][c]='I';
	x[r+5][c+1]='I';
	x[r+5][c+2]='I';
	x[r+5][c+3]=';';
	x[r+5][c+4]=':';
	x[r+5][c+8]='\\';
	x[r+5][c+9]='_';
	x[r+5][c+10]='_';
	x[r+5][c+11]='_';
	// row six
	x[r+6][c-8]='|';
	x[r+6][c-5]=';';
	x[r+6][c-4]='I';
	x[r+6][c-3]='M';
	x[r+6][c-2]='I';
	x[r+6][c-1]='I';
	x[r+6][c]='I';
	x[r+6][c+1]=';';
	x[r+6][c+2]=';';
	x[r+6][c+8]=':';
	x[r+6][c+9]=':';
	x[r+6][c+12]='\\';
	// row seven
	x[r+7][c-8]='|';
	x[r+7][c-5]=':';
	x[r+7][c-4]=';';
	x[r+7][c-3]='I';
	x[r+7][c-2]='M';
	x[r+7][c-1]='I';
	x[r+7][c]='I';
	x[r+7][c+1]='I';
	x[r+7][c+2]=';';
	x[r+7][c+3]=':';
	x[r+7][c+4]=':';
	x[r+7][c+5]=':';
	x[r+7][c+11]=':';
	x[r+7][c+13]='\\';
	// row eight
	x[r+8][c-8]='\\';
	x[r+8][c-6]=':';
	x[r+8][c-5]=':';
	x[r+8][c-4]=':';
	x[r+8][c-3]=':';
	x[r+8][c-2]=':';
	x[r+8][c-1]=':';
	x[r+8][c]=':';
	x[r+8][c+1]=':';
	x[r+8][c+2]=':';
	x[r+8][c+3]='.';
	x[r+8][c+4]='.';
	x[r+8][c+5]='.';
	x[r+8][c+6]='.';
	x[r+8][c+7]='.';
	x[r+8][c+8]=':';
	x[r+8][c+9]=':';
	x[r+8][c+14]='\\';
	}

// Fire
void Draw_Fire(char x[][2560],int r,int c,int &FSF)
{
	for ( ; ; )
	{
		if (FSF==0)
		{
		

			// Row 2
			x[r+2][c-11]=',';
			x[r+2][c-10]='(';
			x[r+2][c-8]='(';
			x[r+2][c-6]='(';
			x[r+2][c-5]='(';
			x[r+2][c-4]='(';
			x[r+2][c-3]=',';
			x[r+2][c-1]=')';
			x[r+2][c]=')';

			// Row 3
			x[r+3][c-13]='`';
			x[r+3][c-12]='~';
			x[r+3][c-11]='//';
			x[r+3][c-7]=')';
			x[r+3][c-6]='~';
			x[r+3][c-4]=')';
			x[r+3][c-3]=',';
			x[r+3][c-2]='//';
			x[r+3][c-1]='|';

			// Row 4

			x[r+4][c-15]='.';
			x[r+4][c-14]='_';
			x[r+4][c-13]='-';
			x[r+4][c-12]='~';
			x[r+4][c-11]='//';
			x[r+4][c-10]='//';
			x[r+4][c-9]='(';
			x[r+4][c-7]=')';
			x[r+4][c-6]='//';
			x[r+4][c-4]=')';
			x[r+4][c-3]=')';
			x[r+4][c-1]='`';
			FSF=1;
			break;



		}
		
		if (FSF==1)
		{
			

			// Row 2
			x[r+2][c-11]=',';
			x[r+2][c-10]=')';
			x[r+2][c-8]=')';
			x[r+2][c-6]=')';
			x[r+2][c-5]=')';
			x[r+2][c-4]=')';
			x[r+2][c-3]=',';
			x[r+2][c-1]='(';
			x[r+2][c]='(';

			// Row 3
			x[r+3][c-13]='`';
			x[r+3][c-12]='~';
			x[r+3][c-11]='\\';
			x[r+3][c-7]='(';
			x[r+3][c-6]='~';
			x[r+3][c-4]='(';
			x[r+3][c-3]=',';
			x[r+3][c-2]='\\';
			x[r+3][c-1]='|';

			// Row 4

			x[r+4][c-15]='.';
			x[r+4][c-14]='_';
			x[r+4][c-13]='-';
			x[r+4][c-12]='~';
			x[r+4][c-11]='\\';
			x[r+4][c-10]='\\';
			x[r+4][c-9]=')';
			x[r+4][c-7]='(';
			x[r+4][c-6]='\\';
			x[r+4][c-4]='(';
			x[r+4][c-3]='(';
			x[r+4][c-1]='`';

	
			FSF=0;
			break;
		}
		}
}
void Move_Fire(int &c,int &ct,int &FireFlag,int &MH,int &PrincessFlag)
{
	c+=2;
	ct++;
	if (ct==9)
	{
		FireFlag=0;
		ct=0;
		MH--;
		if (MH==0)
		{
			PrincessFlag=1;
		}
	}

}


// Oreo
void Draw_Oreo (char x[][2560],int r,int c)
{
	x[r][c]='_';
	x[r][c+1]='.';
	for (int i=c+2;i<=c+6;i++)
	{
		x[r][i]=':';
	}
	x[r][c+7]='.';
	x[r][c+8]='_';
	// Row One
	x[r+1][c-2]='.';
	x[r+1][c-1]=':';
	x[r+1][c]=':';
	x[r+1][c+1]=':';
	x[r+1][c+2]='"';
	x[r+1][c+3]='_';
	x[r+1][c+4]='|';
	x[r+1][c+5]='_';
	x[r+1][c+6]='"';
	x[r+1][c+7]=':';
	x[r+1][c+8]=':';
	x[r+1][c+9]=':';
	// Row Two
	x[r+2][c-3]='//';
	x[r+2][c-2]=':';
	x[r+2][c-1]=':';
	x[r+2][c]='"';
	x[r+2][c+2]='-';
	x[r+2][c+3]='-';
	x[r+2][c+4]='|';
	x[r+2][c+5]='-';
	x[r+2][c+6]='-';
	x[r+2][c+8]='"';
	x[r+2][c+9]=':';
	x[r+2][c+10]=':';
	x[r+2][c+11]='\\';
	// Row Three 
	x[r+3][c-4]='|';
	x[r+3][c-3]='"';
	x[r+3][c-2]=':';
	x[r+3][c]='.';
	x[r+3][c+1]='-';
	x[r+3][c+2]='-';
	x[r+3][c+3]='-';
	x[r+3][c+4]='"';
	x[r+3][c+5]='-';
	x[r+3][c+6]='-';
	x[r+3][c+7]='-';
	x[r+3][c+9]='.';
	x[r+3][c+10]='"';
	x[r+3][c+11]=':';
	x[r+3][c+12]='|';
	// Row Four
	x[r+4][c-4]='|';
	x[r+4][c-3]=':';
	x[r+4][c-1]='(';
	x[r+4][c+1]='O';
	x[r+4][c+3]='R';
	x[r+4][c+5]='E';
	x[r+4][c+7]='O';
	x[r+4][c+9]=')';
	x[r+4][c+11]=':';
	x[r+4][c+12]='|';
	// Row Five
	x[r+5][c-4]='|';
	x[r+5][c-2]=':';
	x[r+5][c-2]=':';
	x[r+5][c-1]='`';
	for (int i=c;i<=c+7;i++)
	{
		x[r+5][i]='-';
	}
	x[r+5][c+8]='"';
	x[r+5][c+10]=':';
	x[r+5][c+11]=':';
	x[r+5][c+12]='|';
	// Row Six
	x[r+6][c-3]='\\';
	x[r+6][c-2]=':';
	x[r+6][c-1]=':';
	x[r+6][c]=':';
	for (int i=c+1;i<=c+7;i++)
	{
		x[r+6][i]='.';
	}
	for (int i=c+8;i<=c+10;i++)
	{
		x[r+6][i]=':';
	}
	x[r+6][c+11]='//';
	// Row Seven
	x[r+7][c-2]='"';
	for (int i=c-1;i<=c+9;i++)
	{
		x[r+7][i]=':';
	}
	x[r+7][c+10]='"';
	// Row Eight
	x[r+8][c+1]='`';
	x[r+8][c+2]='"';
	x[r+8][c+3]='"';
	x[r+8][c+4]='"';
	x[r+8][c+5]='"';
	x[r+8][c+6]='`';


}

// Jump
void jump (int &rH,int &cH, int &JFlag, int &K,int &Jump_Dir)
{
	if (Jump_Dir==0)
	{
	if (K<4)
	{
		rH--;
		cH++;
		K++;
	}
	if (K>4)
	{
		rH++;
		cH++;
		K++;
		if (K==8)
		{ 
			K=0;
			JFlag=0;
		}
	}
	}
	if (Jump_Dir==1)
	{
	if (K<4)
	{
		rH--;
		cH--;
		K++;
	}
	if (K>4)
	{
		rH++;
		cH--;
		K++;
		if (K==8)
		{ 
			K=0;
			JFlag=0;
		}
	}
	}

}

// Horse
void Draw_Horse (char x[][2560],int r,int c)
{
	// Row Zero
	x[r][c]=',';
	x[r][c+1]=';';
	x[r][c+2]=';';
	x[r][c+3]='"';
	x[r][c+4]='\\';
	// Row One
	x[r+1][c-11]='_';
	x[r+1][c-10]='_';
	x[r+1][c-2]=',';
	x[r+1][c-1]=';';
	x[r+1][c]=';';
	x[r+1][c+1]='"';
	x[r+1][c+3]='"';
	x[r+1][c+5]='\\';
	// Row Two
	x[r+2][c-13]='//';
	x[r+2][c-12]='"';
	x[r+2][c-9]='"';
	x[r+2][c-8]='\\';
	x[r+2][c-7]='"';
	x[r+2][c-6]='~';
	x[r+2][c-5]='~';
	x[r+2][c-4]='"';
	x[r+2][c-3]='~';
	x[r+2][c-2]='"';
	x[r+2][c-1]='\\';
	x[r+2][c+1]='//';
	x[r+2][c+2]='"';
	x[r+2][c+3]='\\';
	x[r+2][c+4]='.';
	x[r+2][c+5]=')';
	// Row Three
	x[r+3][c-16]=',';
	x[r+3][c-15]=';';
	x[r+3][c-14]='(';
	x[r+3][c-7]=')';
	x[r+3][c-2]='//';
	x[r+3][c+1]='|';
	x[r+3][c+2]='.';
	// Row Four
	x[r+4][c-17]=',';
	x[r+4][c-16]=';';
	x[r+4][c-15]='"';
	x[r+4][c-13]='\\';
	x[r+4][c-8]='//';
	x[r+4][c-7]='.';
	x[r+4][c-6]='.';
	x[r+4][c-5]=',';
	x[r+4][c-4]=',';
	x[r+4][c-3]='(';
	x[r+4][c+1]=')';
	x[r+4][c+2]='\\';
	// Row Five
	x[r+5][c-12]=')';
	x[r+5][c-10]='//';
	x[r+5][c-3]=')';
	x[r+5][c-1]='//';
	x[r+5][c+1]=')';
	x[r+5][c+2]='|';
	// Row Six
	x[r+6][c-12]='|';
	x[r+6][c-11]='|';
	x[r+6][c-3]='|';
	x[r+6][c-2]='|';
	// Row Seven
	x[r+7][c-12]='(';
	x[r+7][c-11]='_';
	x[r+7][c-10]='\\';
	x[r+7][c-3]='(';
	x[r+7][c-2]='_';
	x[r+7][c-1]='\\';

}
void Draw_Hero_With_Horse (char x[][2560],int r,int c)
{
	// Row zero
	x[r][c]='(';
	x[r][c+1]=')';
	x[r][c+4]='//';
	x[r][c+5]='(';
	x[r][c+6]='.';
	x[r][c+7]='\\';
	// Row One
	x[r+1][c-1]='//';
	x[r+1][c]='\\';
	x[r+1][c+1]='_';
	x[r+1][c+2]='_';
	x[r+1][c+3]='//';
	x[r+1][c+4]='_';
	x[r+1][c+5]='//';
	x[r+1][c+6]='\\';
	x[r+1][c+7]=',';
	x[r+1][c+8]=')';
	// Row Two
	x[r+2][c-5]='_';
	x[r+2][c-4]=',';
	x[r+2][c-3]='-';
	x[r+2][c-2]='(';
	x[r+2][c-1]='(';
	x[r+2][c]='-';
	x[r+2][c+1]='"';
	x[r+2][c+2]='`';
	x[r+2][c+4]='//';
	// Row Three
	x[r+3][c-6]='//';
	x[r+3][c-5]='(';
	x[r+3][c-1]='d';
	x[r+3][c+4]=')';
	// Row Four
	x[r+4][c-7]='`';
	x[r+4][c-5]='\\';
	x[r+4][c-3]='//';
	x[r+4][c-2]='`';
	x[r+4][c-1]='"';
	x[r+4][c]='-';
	x[r+4][c+1]='-';
	x[r+4][c+2]='\\';
	x[r+4][c+3]='\\';
	// Row Five 
	x[r+5][c-4]=')';
	x[r+5][c-3]=')';
	x[r+5][c+3]=')';
	x[r+5][c+4]=')';
	// Row Six
	x[r+6][c-5]='//';
	x[r+6][c-4]='//';
	x[r+6][c+3]='^';
	// Row Seven 
	x[r+7][c-5]='^';




}
void Move_Hero_With_Horse (char x[][2560],int &CH,int &cH,int &HorseFlag,int &HorseCt,int &rH)
{
	if (HorseCt<80)
	{
		CH++;
		cH++;
		HorseCt++;
	}
	else 
	{
		HorseFlag=0;
		cH++;
		CH=400;
	}
}

// Boat
void Draw_Boat(char x[][2560],int r,int c)
{
	x[r][c]='~';
	x[r][c+1]='.';
	// Row One
	x[r+1][c+1]='|';
	x[r+1][c]='//';
	// Row Two
	x[r+2][c-1]='//';
	x[r+2][c+1]='|';
	// Row Three
	x[r+3][c-2]='//';
	x[r+3][c+1]='|';
	x[r+3][c-1]='_';
	x[r+3][c]='_';
	x[r+3][c+2]='_';
	x[r+3][c+3]='_';
	// Row Four
	x[r+4][c-4]='\\';
	for (int i=c-3;i<=c+4;i++)
	{
		x[r+4][i]='-';
	}
	x[r+4][c+5]='//';
	x[r+5][c-3]='`';
	x[r+5][c+3]='`';



}
void Draw_Hero_With_Boat(char x[][2560],int r,int c, int &BSF1)
{
	for ( ; ; )
	{
		if (BSF1==0)
		{
	    // Row 0
		x[r][c]=2;
		x[r][c+1]=',';
		// Row 1
		x[r+1][c]='//';
		x[r+1][c-1]='<';
		// Row Two
		x[r+2][c-4]='(';
		x[r+2][c-3]='`';
		for (int i=c-2;i<c+11;i++)
		{
			x[r+2][i]='-';
		}
		x[r+2][c+12]='"';
		x[r+2][c+13]=')';
		x[r+2][c-1]='/';
		// Row 3
		x[r+3][c-2]='@';
		BSF1=1;
		break;
		}
		if (BSF1==1)
		{
			// Row 0
			x[r][c]='_';
			x[r][c-1]=2;
			x[r][c+1]='//';
			x[r][c+2]='|';
			// Row 1
			x[r+1][c-1]='[';
			x[r+1][c]='\\';
			x[r+1][c+1]='_';
			x[r+1][c+2]='|';
			// Row 2
			x[r+2][c-4]='(';
			x[r+2][c-3]='`';
			for (int i=c-2;i<c+12;i++)
			{
				x[r+2][i]='-';
			}
			x[r+2][c+2]='|';
			x[r+2][c+12]='"';
			x[r+2][c+13]=')';
			// Row 3
			x[r+3][c+2]='@';

			BSF1=0;
			break;
		}
		}
	}
void Move_Hero_With_Boat(int &R_Hero,int &C_Hero,int &c,int &BoatFlag,int &ct)
{
	c++;
	ct++;
	if (ct==40)
	{
		C_Hero=1107;
		c=1097;
		R_Hero=43;
		BoatFlag=0;
	}
}

// Door
void Draw_Door (char x[][2560],int r,int c,int &DSF)
{
	if (DSF==0)
	{
	// Row Zero
	x[r][c]='.';
	for (int i=c+1;i<c+15;i++)
	{
		x[r][i]='_';
	}
	x[r][c+15]='.';
	x[r][c+16]='.';

	// Row One
	x[r+1][c]='|';
	x[r+1][c+1]='\\';
	for (int i=c+3;i<c+14;i++)
	{
		x[r+1][i]='_';
	}
	x[r+1][c+16]='|';
	x[r+1][c+15]='//';
	// From Row Two To Row 16
	for (int i=r+2;i<r+17;i++)
	{
		x[i][c]='|';
		x[i][c+2]='|';
		x[i][c+14]='|';
		x[i][c+16]='|';
	}
	x[r+2][c+5]='_';
	x[r+2][c+7]='_';
	x[r+2][c+9]='_';
	x[r+2][c+11]='_';

	x[r+3][c+4]='|';
	x[r+3][c+6]='|';
	x[r+3][c+8]='|';
	x[r+3][c+10]='|';
	x[r+3][c+12]='|';

	x[r+4][c+4]='|';
	x[r+4][c+5]='-';
	x[r+4][c+6]='+';
	x[r+4][c+7]='-';
	x[r+4][c+8]='+';
	x[r+4][c+9]='-';
	x[r+4][c+10]='+';
	x[r+4][c+11]='-';
	x[r+4][c+12]='|';

	x[r+5][c+4]='|';
	x[r+5][c+5]='-';
	x[r+5][c+6]='+';
	x[r+5][c+7]='-';
	x[r+5][c+8]='+';
	x[r+5][c+9]='-';
	x[r+5][c+10]='+';
	x[r+5][c+11]='-';
	x[r+5][c+12]='|';

	x[r+6][c+4]='|';
	x[r+6][c+6]='|';
	x[r+6][c+8]='|';
	x[r+6][c+10]='|';
	x[r+6][c+12]='|';

	x[r+6][c+5]='_';
	x[r+6][c+7]='_';
	x[r+6][c+9]='_';
	x[r+6][c+11]='_';

	x[r+7][c+8]='_';
	x[r+7][c+9]='_';
	x[r+7][c+10]='_';

	x[r+8][c+7]='//';
	x[r+8][c+8]='_';
	x[r+8][c+9]='_';
	x[r+8][c+10]='//';

	x[r+9][c+6]='[';
	x[r+9][c+7]='%';
	x[r+9][c+8]='=';
	x[r+9][c+9]='=';
	x[r+9][c+10]=']';
	x[r+9][c+12]='(';
	x[r+9][c+13]=')';

	x[r+10][c+12]='|';
	x[r+10][c+13]='|';

	x[r+11][c+12]='(';
	x[r+11][c+13]=')';

	x[r+16][c+1]='_';
	for (int i=c+3;i<c+14;i++)
	{
		x[r+16][i]='_';
	}
	x[r+16][c+15]='_';
	}
	// Open
	if (DSF==1)
	{
		// Row Zero
	x[r][c]='.';
	for (int i=c+1;i<c+15;i++)
	{
		x[r][i]='_';
	}
	x[r][c+15]='.';
	x[r][c+16]='.';

	// Row One
	x[r+1][c]='|';
	x[r+1][c+1]='\\';
	for (int i=c+3;i<c+14;i++)
	{
		x[r+1][i]='_';
	}
	x[r+1][c+16]='|';
	x[r+1][c+15]='//';
	// From Row Two To Row 16
	for (int i=r+2;i<r+17;i++)
	{
		x[i][c]='|';
		x[i][c+2]='|';
		x[i][c+14]='|';
		x[i][c+16]='|';
	}


	x[r+2][c+5]='//';
	x[r+2][c+6]='|';
	x[r+2][c+7]=',';
	x[r+2][c+8]='|';
	x[r+2][c+10]='|';

	x[r+3][c+4]='|';
	x[r+3][c+5]=',';
	x[r+3][c+6]='x';
	x[r+3][c+7]=',';
	x[r+3][c+8]='|';
	x[r+3][c+10]='|';

	x[r+4][c+4]='|';
	x[r+4][c+5]=',';
	x[r+4][c+6]='x';
	x[r+4][c+7]=',';
	x[r+4][c+8]='"';
	x[r+4][c+10]='|';

	x[r+5][c+4]='|';
	x[r+5][c+5]=',';
	x[r+5][c+6]='x';
	x[r+5][c+10]=',';

		x[r+6][c+4]='|';
	x[r+6][c+5]='//';
	x[r+6][c+10]='|';
	x[r+6][c+11]='%';
	x[r+6][c+12]='=';
	x[r+6][c+13]='=';

	x[r+7][c+7]='//';
	x[r+7][c+8]=']';
	x[r+7][c+10]=',';

	x[r+8][c+6]='[';
	x[r+8][c+7]='/';
	x[r+8][c+9]='(';
	x[r+8][c+10]=')';

	x[r+9][c+10]='|';
	x[r+10][c+10]='|';
	x[r+11][c+10]='|';
	x[r+12][c+10]='"';

	x[r+12][c+9]=',';

	x[r+14][c+7]='"';

	x[r+14][c+6]=',';

	x[r+16][c+4]='"';

	x[r+16][c+3]=',';
	x[r+16][c+1]='_';
	
	x[r+16][c+15]='_';
	

	}

}
// Robot
void Draw_Robot(char x[][2560],int r,int c)
{
	// Row 0
	x[r][c]='_';
	x[r][c+1]='_';
    x[r][c+2]='_';
	// Row 1
	x[r+1][c+1]='//';
	x[r+1][c+2]=']';
	x[r+1][c+3]='_';
	x[r+1][c+4]='//';
	// Row 2
	x[r+2][c]='|';
	x[r+2][c+1]='\\';
	x[r+2][c+2]='//';
	x[r+2][c+3]='|';
	x[r+2][c+4]='.';
	x[r+2][c+5]='-';
	x[r+2][c+6]='-';
	x[r+2][c+7]='//';
	x[r+2][c+8]='"';
	x[r+2][c+9]='-';
	x[r+2][c+10]='.';
	// Row 3
	x[r+3][c]='\\';
	x[r+3][c+1]='|';
	x[r+3][c+2]='//';
	x[r+3][c+3]=':';
	x[r+3][c+4]='o';
	x[r+3][c+6]='//';
	x[r+3][c+9]='//';
	x[r+3][c+10]='\\';
	x[r+3][c+15]='.';
	x[r+3][c+16]='_';
	x[r+3][c+17]=',';
	// Row 4
	x[r+4][c+3]='\\';
	x[r+4][c+4]='_';
	x[r+4][c+5]='//';
	x[r+4][c+6]='_';
	x[r+4][c+7]='.';
	x[r+4][c+8]='"';
	x[r+4][c+9]='0';
	x[r+4][c+10]='//';
	x[r+4][c+15]='_';
	x[r+4][c+16]='|';
	x[r+4][c+17]='_';
	// Row 5
	x[r+5][c+4]='\\';
	x[r+5][c+5]='_';
	x[r+5][c+6]='_';
	x[r+5][c+7]='_';
	x[r+5][c+8]='_';
	x[r+5][c+9]=']';
	x[r+5][c+10]=']';
	x[r+5][c+12]='(';
	x[r+5][c+13]='>';
	x[r+5][c+14]='[';
	x[r+5][c+15]='_';
	x[r+5][c+16]='_';
    x[r+5][c+17]='_';
	x[r+5][c+18]=']';
	x[r+5][c+19]='=';
	x[r+5][c+20]=']';
	x[r+5][c+21]=']';
    x[r+5][c+22]=']';
	x[r+5][c+23]='=';
    x[r+5][c+24]='=';
    x[r+5][c+25]='=';
	// Row 6
	x[r+6][c+4]='//';
	x[r+6][c+9]='\\';
	x[r+6][c+10]='_';
	x[r+6][c+11]='_';
	x[r+6][c+12]='_';
	x[r+6][c+13]='//';
	x[r+6][c+14]='P';
	x[r+6][c+15]='{';
	x[r+6][c+16]=']';
	// Row 7
	x[r+7][c+1]='_';
	x[r+7][c+2]='_';
	x[r+7][c+3]='//';
	x[r+7][c+4]='//';
	x[r+7][c+9]='//';
	x[r+7][c+10]='-';
	x[r+7][c+11]='-';
	x[r+7][c+12]='-';
	x[r+7][c+13]='\\';
	x[r+7][c+14]='//';
	// Row 8
	x[r+8][c]='(';
	x[r+8][c+1]='_';
	x[r+8][c+2]='[';
	x[r+8][c+3]='-';
	x[r+8][c+4]='"';
	x[r+8][c+5]='\\';
	x[r+8][c+6]='_';
	x[r+8][c+7]='_';
	x[r+8][c+8]='//';
	x[r+8][c+9]='_';
	// Row 9
	x[r+9][c+4]='//';
	x[r+9][c+6]='|';
	x[r+9][c+8]='|';
	x[r+9][c+10]='\\';
	// Row 10
	x[r+10][c+3]='"';
	x[r+10][c+4]='=';
	x[r+10][c+5]='=';
	x[r+10][c+6]='"';
	x[r+10][c+7]='=';
	x[r+10][c+8]='"';
	x[r+10][c+9]='"';
	x[r+10][c+10]='=';
	x[r+10][c+11]='=';
	x[r+10][c+12]='"';
	// Row 11
	x[r+11][c+2]='_';
	x[r+11][c+3]='_';
	x[r+11][c+4]='_';
	x[r+11][c+5]='_';
	x[r+11][c+6]='|';
	x[r+11][c+7]='|';
	x[r+11][c+8]='|';
	x[r+11][c+9]='|';
	x[r+11][c+10]='_';
	x[r+11][c+11]='_';
	x[r+11][c+12]='_';
	// Row 12
	x[r+12][c+1]='(';
	x[r+12][c+2]='_';
	x[r+12][c+3]='"';
	x[r+12][c+4]='"';
	x[r+12][c+5]='_';
	x[r+12][c+6]='/';
	x[r+12][c+7]='\\';
	x[r+12][c+8]='_';
	x[r+12][c+10]='"';
	x[r+12][c+11]='"';
	x[r+12][c+12]='_';
	x[r+12][c+13]=')';

}

void Draw_Robot_Rifle(char x[][2560],int r,int c)
{
	x[r][c]='_';
	x[r][c+1]='_';
	x[r][c+2]='_';
	x[r][c+3]='_';
	x[r][c+4]='q';
	x[r][c+5]='_';
	x[r][c+6]='_';
	x[r][c+7]='y';
	x[r][c+8]='_';
	x[r][c+9]='_';
	x[r][c+10]='_';
	x[r][c+11]='_';
	x[r][c+12]='_';
	x[r][c+13]='_';
	x[r][c+14]=',';
	x[r][c+15]='_';

	// Row 1

	x[r+1][c-1]='//';
	x[r+1][c]='_';
	x[r+1][c+1]='_';
	x[r+1][c+2]='.';
	x[r+1][c+3]='-';
	x[r+1][c+4]='^';
	x[r+1][c+5]='-';
	x[r+1][c+6]='|';
	x[r+1][c+7]='_';
	x[r+1][c+8]='|';
	x[r+1][c+9]='"';
	x[r+1][c+1]='`';
}

// Spell
void Draw_Spell(char x[][2560],int r,int c)
{
	// Row 0
	x[r][c]='_';
	x[r][c+1]='_';
	x[r][c+2]='_';
	x[r][c+3]='_';
	x[r][c+4]='_';
	// Row 1
	x[r+1][c-1]='`';
	x[r+1][c]='.';
	x[r+1][c+1]='_';
	x[r+1][c+2]='_';
	x[r+1][c+3]='_';
	x[r+1][c+4]=',';
	x[r+1][c+5]='`';
	// Row 2
	x[r+2][c]='(';
	x[r+2][c+1]='_';
	x[r+2][c+2]='_';
	x[r+2][c+3]='_';
	x[r+2][c+4]=')';
	// Row 3
	x[r+3][c]='<';
	x[r+3][c+4]='>';
	// Row 4
	x[r+4][c+1]=')';
	x[r+4][c+3]='(';
	// Row 5
	x[r+5][c]='//';
	x[r+5][c+1]='`';
	x[r+5][c+2]='-';
	x[r+5][c+3]='.';
	x[r+5][c+4]='\\';
	// Row 6
	x[r+6][c-1]='//';
	x[r+6][c+5]='\\';
	// row 7
	x[r+7][c-2]='//';
	x[r+7][c+6]='\\';
	x[r+7][c]='_';
	x[r+7][c+5]='_';
	// Row 8
	x[r+8][c-3]=':';
	x[r+8][c-2]=',';
	x[r+8][c-1]='"';
	x[r+8][c+1]='`';
	x[r+8][c+2]='-';
	x[r+8][c+3]='.';
	x[r+8][c+4]='"';
	x[r+8][c+6]='`';
	x[r+8][c+7]=':';

	// Row 9
	x[r+9][c+7]='|';
	x[r+9][c-3]='|';
	// Row 10
	x[r+10][c-3]=':';
	x[r+10][c+7]=';';
	// Row 11
	x[r+11][c+6]='//';
	x[r+11][c-2]='\\';
	// Row 12
	x[r+12][c-1]='`';
	x[r+12][c]='.';
	x[r+12][c+1]='_';
	x[r+12][c+2]='_';
	x[r+12][c+3]='_';
	x[r+12][c+4]='.';
	x[r+12][c+5]='"';











}

// Phesba 
void Draw_Phesba (char x[][2560],int r,int c)
{
	
	x[r][c]='\\';
	x[r+1][c+1]='\\';

	x[r+2][c+1]='-';
	x[r+2][c+2]=']';
	x[r+2][c]='//';
	for (int i=c-1;i>c-8;i--)
	{
		x[r+2][i]='_';
	}

	x[r+3][c-8]='//';
	for (int i=c;i>c-8;i--)
	{
		x[r+3][i]='-';
	}
	x[r+3][c+1]='=';
	x[r+3][c+2]='//';
	x[r+3][c+3]='\\';
	x[r+3][c+4]='_';

	x[r+4][c-9]='=';
	x[r+4][c-8]='=';
	x[r+4][c-7]='//';
	x[r+4][c-6]='_';
	x[r+4][c-5]='\\';
	x[r+4][c-4]='_';
	x[r+4][c-3]='#';
	x[r+4][c-2]='_';
	x[r+4][c-1]='[';
	x[r+4][c]='_';
	x[r+4][c+1]=']';
	x[r+4][c+2]='//';
	x[r+4][c+3]='\\';
	x[r+4][c+4]='\\';

	x[r+5][c-7]='\\';
	x[r+5][c-6]='_';
	x[r+5][c-5]='//';

	x[r+5][c+2]='\\';
	x[r+5][c+3]='_';
	x[r+5][c+4]='//';
	x[r+5][c+5]='_';
}
void Move_Hero_With_Phesba(int &C_Phesba,int &cH,int &PhesbaCt,int &PhesbaFlag)
{
	
	if (PhesbaCt<50)
	{
	C_Phesba++;
	PhesbaCt++;
	}
	if (PhesbaCt==50)
	{
		cH=C_Phesba+4;
		C_Phesba-=5;
		PhesbaCt++;
		PhesbaFlag=0;
	}
}	





void Draw_Hero_With_Phesba(char x[][2560],int r,int c,int &PSF)
{
	for ( ; ; )
	{
	if (PSF==0)
	{
	// Row 0
	x[r][c-3]='0';
	x[r][c-2]=')';
	x[r][c]='\\';

	// Row 1
	x[r+1][c+1]='\\';
	x[r+1][c-1]='_';
	x[r+1][c-2]='\\';
	x[r+1][c-3]=']';
	x[r+1][c-4]='[';



	x[r+2][c+1]='-';
	x[r+2][c+2]=']';
	x[r+2][c]='//';
	for (int i=c-1;i>c-8;i--)
	{
		x[r+2][i]='_';
	}
	x[r+2][c-3]='}';
	x[r+2][c-4]='}';

	x[r+3][c-8]='//';
	for (int i=c;i>c-8;i--)
	{
		x[r+3][i]='-';
	}
	x[r+3][c-2]='\\';
	x[r+3][c-3]='\\';
	x[r+3][c+1]='=';
	x[r+3][c+2]='//';
	x[r+3][c+3]='\\';
	x[r+3][c+4]='_';




	x[r+4][c-10]='o';
	x[r+4][c-11]='o';
	x[r+4][c-12]='0';
	x[r+4][c-13]='0';
	x[r+4][c-14]='O';
	x[r+4][c-15]='O';
	x[r+4][c-9]='.';
	x[r+4][c-8]='=';
	x[r+4][c-7]='//';
	x[r+4][c-6]='_';
	x[r+4][c-5]='\\';
	x[r+4][c-4]='_';
	x[r+4][c-3]='#';
	x[r+4][c-2]='|';
	x[r+4][c-1]='[';
	x[r+4][c]='_';
	x[r+4][c+1]=']';
	x[r+4][c+2]='//';
	x[r+4][c+3]='\\';
	x[r+4][c+4]='\\';

	x[r+5][c-7]='\\';
	x[r+5][c-6]='_';
	x[r+5][c-5]='//';

	x[r+5][c+2]='\\';
	x[r+5][c+3]='_';
	x[r+5][c+4]='//';
	x[r+5][c+5]='_';
	PSF=1;
	break;
	}
	if (PSF==1)
	{
		
		
	// Row 0
	x[r][c-3]='0';
	x[r][c-2]=')';
	x[r][c]='\\';

	// Row 1
	x[r+1][c+1]='\\';
	x[r+1][c-1]='_';
	x[r+1][c-2]='\\';
	x[r+1][c-3]=']';
	x[r+1][c-4]='[';



	x[r+2][c+1]='-';
	x[r+2][c+2]=']';
	x[r+2][c]='//';
	for (int i=c-1;i>c-8;i--)
	{
		x[r+2][i]='_';
	}
	x[r+2][c-3]='}';
	x[r+2][c-4]='}';

	x[r+3][c-8]='//';
	for (int i=c;i>c-8;i--)
	{
		x[r+3][i]='-';
	}
	x[r+3][c-2]='\\';
	x[r+3][c-3]='\\';
	x[r+3][c+1]='=';
	x[r+3][c+2]='//';
	x[r+3][c+3]='\\';
	x[r+3][c+4]='_';




	x[r+4][c-10]='`';
	x[r+4][c-11]='0';
	x[r+4][c-12]='0';
	x[r+4][c-13]='O';
	x[r+4][c-14]='o';
	x[r+4][c-15]='o';
	x[r+4][c-9]='.';
	x[r+4][c-8]='=';
	x[r+4][c-7]='//';
	x[r+4][c-6]='_';
	x[r+4][c-5]='\\';
	x[r+4][c-4]='_';
	x[r+4][c-3]='#';
	x[r+4][c-2]='|';
	x[r+4][c-1]='[';
	x[r+4][c]='_';
	x[r+4][c+1]=']';
	x[r+4][c+2]='//';
	x[r+4][c+3]='\\';
	x[r+4][c+4]='\\';

	
	x[r+5][c-6]='|';
	

	
	x[r+5][c+3]='|';
	
	x[r+5][c+5]='_';
	PSF=0;
	break;
	}
	}
}

// House
void Draw_House(char x[][2560],int r,int c)
{
	// Row 0
	x[r][c]='_';
	x[r][c+1]='|';
	x[r][c+2]='=';
	x[r][c+3]='|';

	for (int i = c+4;i<c+14;i++)
	{
		x[r][i]='_';
	}

	x[r+1][c+4]='//';
	x[r+1][c+19]='\\';

	x[r+2][c+3]='//';
	x[r+2][c+20]='\\';

	x[r+3][c+2]='//';
	x[r+3][c+21]='\\';
	for (int i=c+3;i<c+21;i++)
	{
		x[r+3][i]='_';
	}
	// Row 4
	x[r+4][c+3]='|';
	x[r+4][c+4]='|';
	x[r+4][c+7]='|';
	x[r+4][c+8]='|';
	x[r+4][c+10]='//';
	x[r+4][c+11]='-';
	x[r+4][c+12]='-';
	x[r+4][c+13]='\\';
	x[r+4][c+15]='|';
    x[r+4][c+16]='|';
	x[r+4][c+19]='|';
	x[r+4][c+20]='|';

	// Row 5

	x[r+5][c+3]='|';
	x[r+5][c+4]='|';
	x[r+5][c+5]='[';
	x[r+5][c+6]=']';
	x[r+5][c+7]='|';
	x[r+5][c+8]='|';
	x[r+5][c+10]='|';
	x[r+5][c+12]='.';
	x[r+5][c+13]='|';
	x[r+5][c+15]='|';
	x[r+5][c+16]='|';
	x[r+5][c+17]='[';
	x[r+5][c+18]=']';
	x[r+5][c+19]='|';
	x[r+5][c+20]='|';

	// Row 6
	x[r+6][c+1]='(';
	x[r+6][c+2]=')';
	x[r+6][c+3]='|';
	x[r+6][c+4]='|';
	x[r+6][c+5]='_';
	x[r+6][c+6]='_';
	x[r+6][c+7]='|';
	x[r+6][c+8]='|';
	x[r+6][c+9]='_';
	x[r+6][c+10]='|';
	x[r+6][c+11]='_';
	x[r+6][c+12]='_';
	x[r+6][c+13]='|';
	x[r+6][c+14]='_';
	x[r+6][c+15]='|';
	x[r+6][c+16]='|';
	x[r+6][c+17]='_';
	x[r+6][c+18]='_';
	x[r+6][c+19]='|';
	x[r+6][c+20]='|';
	x[r+6][c+21]='(';
	x[r+6][c+22]=')';

	// Row 7
	x[r+7][c]='(';
	x[r+7][c+2]=')';
	x[r+7][c+3]='|';
	x[r+7][c+4]='-';
	x[r+7][c+5]='|';
	x[r+7][c+6]='-';
	x[r+7][c+7]='|';
	x[r+7][c+8]='-';
	x[r+7][c+9]='|';
	x[r+7][c+10]='=';
	x[r+7][c+11]='=';
	x[r+7][c+12]='=';
	x[r+7][c+13]='=';
	x[r+7][c+14]='|';
	x[r+7][c+15]='-';
	x[r+7][c+16]='|';
	x[r+7][c+17]='-';
	x[r+7][c+18]='|';
	x[r+7][c+19]='-';
	x[r+7][c+20]='|';
	x[r+7][c+21]='(';
	x[r+7][c+23]=')';
	// Row 8
	for (int i=c;i<c+23;i++)
	{
		x[r+8][i]='^';
	}
	x[r+8][c+10]='=';
	x[r+8][c+11]='=';
	x[r+8][c+12]='=';
	x[r+8][c+13]='=';








}



// Bullets
void Draw_Bullet (char x[][2560],int r,int c,int &Bullet_Dir,int &Bullet_Sut)
{
	
	if (Bullet_Sut==0)
	{
		if (Bullet_Dir==0)
		{
			x[r][c+1]='X';
		}
		if (Bullet_Dir==1)
		{
		x[r][c-1]='X';
		}
	}
		if (Bullet_Sut==1)
	{
		if (Bullet_Dir==0)
		{
			x[r][c+2]='-';
		}
		if (Bullet_Dir==1)
		{
		x[r][c-2]='-';
		}
	}
	
	
}


void Move_Bullet(char x[][2560],int &r, int &c,int &BF,int &R_Hero, int &C_Hero,int &jb,int &C_Dog,int &R_Dog,int &DogHealth,int &Bullet_Dir,int &C_Bat,int &R_Bat,int &BatHealth,int C_Ant,int &QQ2,int AntFlag,int &C_Bear,int &BearHealth,int &RabbitHealth, int &MonkeyHealth,int &C_M,int &C_Dragon,int &DragonHealth)
{
	for ( ; ; )
	{
		// Bear Damage
		if (c>C_Bear-4&&r>36)
		{
			BearHealth--;
		}
		// Rabbit Damage
		if (c<302&&c>299)
		{
			RabbitHealth--;
		}
		// Monkey Damage
		if (c==C_M-3&&r<25)
		{
			MonkeyHealth--;
		}
		// Dragon Damage
		if (c>C_Dragon-7)
		{
			DragonHealth--;
		}

		if (x[r][c+1]==' '&&Bullet_Dir==0)
		{
			c++;
			break;
		}
		if (x[r][c-1]==' '&&Bullet_Dir==1)
		{
			c--;
			break;
		}
		if (x[r][c+1]!=' ')
		{
			for (int z=C_Dog-15;z<=C_Dog+10;z++)
			{
				if (z==c)
				{
				DogHealth--;
				break;
				}
			}
			jb++;
			break;
			
		}
		if (x[r][c-3]!=' ')
		{
			// Dog Damage
			for (int z=C_Dog-15;z<=C_Dog+10;z++)
			{
				if (z==c)
				{
				DogHealth--;
				break;
				}
			}
			// Bat Damage
			if (c<C_Bat+28&&r<37)
			{
			BatHealth--;
			break;
			}
	
			// Ant Damage
			for (int z=C_Ant+8;z<C_Ant+30&&AntFlag==1;z++)
			{
				if (z==c)
				{
					QQ2++;
				}
			}
			
			
			jb++;
			break;
		}
			break;
	}
}

// Treasure
void Draw_Treasure (char x[][2560],int r, int c)
{
	// Row zero
	x[r][c]='_';
	x[r][c+1]='.';
	x[r][c+2]='-';
	x[r][c+3]='-';
	x[r][c+4]='.';
	// Row one
	x[r+1][c-4]='_';
	x[r+1][c-3]='.';
	x[r+1][c-2]='-';
	x[r+1][c-1]='"';
	x[r+1][c]='_';
	x[r+1][c+1]=':';
	x[r+1][c+2]='-';
	x[r+1][c+3]='"';
	x[r+1][c+4]='|';
	x[r+1][c+5]='|';
	// Row two
	x[r+2][c-8]='_';
	x[r+2][c-7]='.';
	x[r+2][c-6]='-';
	x[r+2][c-5]='"';
	x[r+2][c-4]='_';
	x[r+2][c-3]='.';
	x[r+2][c-2]='-';
	x[r+2][c-1]=':';
	x[r+2][c]=':';
	x[r+2][c+1]=':';
	x[r+2][c+2]=':';
	x[r+2][c+3]='"';
	x[r+2][c+4]='|';
	x[r+2][c+5]='|';
	// Row three
	x[r+3][c-13]='_';
	x[r+3][c-12]='.';
	x[r+3][c-11]='-';
	x[r+3][c-10]=':';
	x[r+3][c-9]='"';
	x[r+3][c-8]='_';
	x[r+3][c-7]='.';
	x[r+3][c-6]='-';
	x[r+3][c-5]=':';
	x[r+3][c-4]=':';
	x[r+3][c-3]=':';
	x[r+3][c-2]=':';
	x[r+3][c-1]=':';
	x[r+3][c]=':';
	x[r+3][c+1]='"';
	x[r+3][c+4]='|';
	x[r+3][c+5]='|';
	// Row four
	x[r+4][c-15]='.';
	x[r+4][c-14]='"';
	x[r+4][c-13]='`';
	x[r+4][c-12]='-';
	x[r+4][c-11]='.';
	x[r+4][c-10]='-';
	x[r+4][c-9]=':';
	x[r+4][c-8]=':';
	x[r+4][c-7]=':';
	x[r+4][c-6]=':';
	x[r+4][c-5]=':';
	x[r+4][c-4]=':';
	x[r+4][c-3]=':';
	x[r+4][c-2]='"';
	x[r+4][c+4]='|';
	x[r+4][c+5]='|';
	// Row five
	x[r+5][c-16]='//';
	x[r+5][c-15]='.';
	x[r+5][c-14]='"';
	x[r+5][c-13]='`';
	x[r+5][c-12]=';';
	x[r+5][c-11]='|';
	x[r+5][c-10]=':';
	x[r+5][c-9]=':';
	x[r+5][c-8]=':';
	x[r+5][c-7]=':';
	x[r+5][c-6]=':';
	x[r+5][c-5]=':';
	x[r+5][c-4]=':';
	x[r+5][c-3]='"';
	x[r+5][c+4]='|';
	x[r+5][c+5]='|';
	x[r+5][c+6]='_';
	// Row six
	x[r+6][c-17]='|';
	x[r+6][c-16]='|';
	x[r+6][c-12]='|';
	x[r+6][c-11]='|';
	x[r+6][c-10]=':';
	x[r+6][c-9]=':';
	x[r+6][c-8]=':';
	x[r+6][c-7]=':';
	x[r+6][c-6]=':';
	x[r+6][c-5]=':';
	x[r+6][c-4]='"';
	x[r+6][c+2]='_';
	x[r+6][c+3]='.';
	x[r+6][c+4]=';';
	x[r+6][c+5]='.';
	x[r+6][c+6]='_';
	x[r+6][c+7]='"';
	x[r+6][c+8]='-';
	x[r+6][c+9]='.';
	x[r+6][c+10]='_';
	// Row seven
	x[r+7][c-17]='|';
	x[r+7][c-16]='|';
	x[r+7][c-12]='|';
	x[r+7][c-11]='|';
	x[r+7][c-10]=':';
	x[r+7][c-9]=':';
	x[r+7][c-8]=':';
	x[r+7][c-7]=':';
	x[r+7][c-6]=':';
	x[r+7][c-5]='"';
	x[r+7][c-2]='_';
	x[r+7][c-1]='.';
	x[r+7][c]='-';
	x[r+7][c+1]='!';
	x[r+7][c+2]='O';
	x[r+7][c+3]='O';
	x[r+7][c+5]='@';
	x[r+7][c+6]='.';
	x[r+7][c+7]='!';
	x[r+7][c+8]='-';
	x[r+7][c+9]='.';
	x[r+7][c+10]='_';
	x[r+7][c+11]='"';
	x[r+7][c+12]='-';
	x[r+7][c+13]='.';
	// Row eight
	x[r+8][c-17]='\\';
	x[r+8][c-16]='"';
	x[r+8][c-15]='.';
	x[r+8][c-12]='|';
	x[r+8][c-11]='|';
	x[r+8][c-10]=':';
	x[r+8][c-9]=':';
	x[r+8][c-8]=':';
	x[r+8][c-7]=':';
	x[r+8][c-6]=':';
	x[r+8][c-5]='.';
	x[r+8][c-4]='-';
	x[r+8][c-3]='!';
	x[r+8][c-2]='(';
	x[r+8][c-1]=')';
	x[r+8][c]='O';
	x[r+8][c+1]='O';
	x[r+8][c+3]='@';
	x[r+8][c+4]='!';
	x[r+8][c+5]='(';
	x[r+8][c+6]=')';
	x[r+8][c+7]='@';
	x[r+8][c+8]='.';
	x[r+8][c+9]='-';
	x[r+8][c+10]='"';
	x[r+8][c+11]='_';
	x[r+8][c+12]='.';
	x[r+8][c+13]='|';
	// Row nine
	x[r+9][c-16]='"';
	x[r+9][c-15]='.';
	x[r+9][c-14]='"';
	x[r+9][c-13]='-';
	x[r+9][c-12]=';';
	x[r+9][c-11]='|';
	x[r+9][c-10]=':';
	x[r+9][c-9]='.';
	x[r+9][c-8]='-';
	x[r+9][c-7]='"';
	x[r+9][c-6]='.';
	x[r+9][c-5]='&';
	x[r+9][c-4]='$';
	x[r+9][c-3]='@';
	x[r+9][c-2]='.';
	x[r+9][c-1]='&';
	x[r+9][c+1]='(';
	x[r+9][c+2]=')';
	x[r+9][c+3]='$';
	x[r+9][c+4]='%';
	x[r+9][c+5]='-';
	x[r+9][c+6]='"';
	x[r+9][c+7]='O';
	x[r+9][c+8]='.';
	x[r+9][c+9]='"';
	x[r+9][c+10]='\\';
	x[r+9][c+11]='U';
	x[r+9][c+12]='|';
	x[r+9][c+13]='|';
	// Row ten
	x[r+10][c-14]='`';
	x[r+10][c-13]='>';
	x[r+10][c-12]='"';
	x[r+10][c-11]='-';
	x[r+10][c-10]='.';
	x[r+10][c-9]='!';
	x[r+10][c-8]='@';
	x[r+10][c-7]='%';
	x[r+10][c-6]='(';
	x[r+10][c-5]=')';
	x[r+10][c-4]='@';
	x[r+10][c-3]='"';
	x[r+10][c-2]='@';
	x[r+10][c-1]='_';
	x[r+10][c]='%';
	x[r+10][c+1]='-';
	x[r+10][c+2]='"';
	x[r+10][c+3]='_';
	x[r+10][c+4]='.';
	x[r+10][c+5]='-';
	x[r+10][c+6]='O';
	x[r+10][c+8]='_';
	x[r+10][c+9]='.';
	x[r+10][c+10]='|';
	x[r+10][c+11]='"';
	x[r+10][c+12]='|';
	x[r+10][c+13]='|';
	// Row 11
	x[r+11][c-13]='|';
	x[r+11][c-12]='|';
	x[r+11][c-11]='-';
	x[r+11][c-10]='.';
	x[r+11][c-9]='_';
	x[r+11][c-8]='"';
	x[r+11][c-7]='-';
	x[r+11][c-6]='.';
	x[r+11][c-5]='@';
	x[r+11][c-4]='.';
	x[r+11][c-3]='-';
	x[r+11][c-2]='"';
	x[r+11][c-1]='_';
	x[r+11][c]='.';
	x[r+11][c+1]='-';
	x[r+11][c+2]='"';
	x[r+11][c+4]='_';
	x[r+11][c+5]='.';
	x[r+11][c+6]='-';
	x[r+11][c+7]='O';
	x[r+11][c+10]='|';
	x[r+11][c+11]='"';
	x[r+11][c+12]='|';
	x[r+11][c+13]='|';
	// Row tweleve
	x[r+12][c-13]='|';
	x[r+12][c-12]='|';
	x[r+12][c-11]='=';
	x[r+12][c-10]='[';
	x[r+12][c-9]='"';
	x[r+12][c-8]='-';
	x[r+12][c-7]='.';
	x[r+12][c-6]='_';
	x[r+12][c-5]='.';
	x[r+12][c-4]='-';
	x[r+12][c-3]='\\';
	x[r+12][c-2]='U';
	x[r+12][c-1]='//';
	x[r+12][c]='.';
	x[r+12][c+1]='-';
	x[r+12][c+2]='"';
	x[r+12][c+8]='O';
	x[r+12][c+10]='|';
	x[r+12][c+11]='"';
	x[r+12][c+12]='|';
	x[r+12][c+13]='|';
	// Row 13 
	x[r+13][c-13]='|';
	x[r+13][c-12]='|';
	x[r+13][c-10]='"';
	x[r+13][c-9]='-';
	x[r+13][c-8]='.';
	x[r+13][c-7]=']';
	x[r+13][c-6]='=';
	x[r+13][c-5]='|';
	x[r+13][c-4]='|';
	x[r+13][c-2]='|';
	x[r+13][c-1]='"';
	x[r+13][c]='|';
	x[r+13][c+7]='O';
	x[r+13][c+10]='|';
	x[r+13][c+11]='"';
	x[r+13][c+12]='|';
	x[r+13][c+13]='|';
	// Row 14
	x[r+14][c-13]='|';
	x[r+14][c-12]='|';
	x[r+14][c-5]='|';
	x[r+14][c-4]='|';
	x[r+14][c-2]='|';
	x[r+14][c-1]='"';
	x[r+14][c]='|';
	x[r+14][c+9]='_';
	x[r+14][c+10]='|';
	x[r+14][c+12]='"';
	x[r+14][c+13]=';';
	// Row 15
	x[r+15][c-13]='|';
	x[r+15][c-12]='|';
	x[r+15][c-5]='|';
	x[r+15][c-4]='|';
	x[r+15][c-2]='|';
	x[r+15][c-1]='"';
	x[r+15][c]='|';
	x[r+15][c+5]='_';
	x[r+15][c+6]='.';
	x[r+15][c+7]='-';
	x[r+15][c+8]='"';
	x[r+15][c+9]='_';
	x[r+15][c+10]='.';
	x[r+15][c+11]='-';
	x[r+15][c+12]='"';
	// Row 16
	x[r+16][c-13]='|';
	x[r+16][c-12]='"';
	x[r+16][c-11]='-';
	x[r+16][c-10]='.';
	x[r+16][c-9]='_';
	x[r+16][c-5]='|';
	x[r+16][c-4]='|';
	x[r+16][c-2]='|';
	x[r+16][c-1]='"';
	x[r+16][c]='|';
	x[r+16][c+1]='_';
	x[r+16][c+2]='.';
	x[r+16][c+3]='-';
	x[r+16][c+4]='"';
	x[r+16][c+5]='_';
	x[r+16][c+6]='.';
	x[r+16][c+7]='-';
	x[r+16][c+8]='"';
	// Row 17
	x[r+17][c-12]='"';
	x[r+17][c-11]='-';
	x[r+17][c-10]='.';
	x[r+17][c-9]='_';
	x[r+17][c-8]='"';
	x[r+17][c-7]='-';
	x[r+17][c-6]='.';
	x[r+17][c-5]='|';
	x[r+17][c-4]='|';
	x[r+17][c-2]='|';
	x[r+17][c-1]='"';
	x[r+17][c]='`';
	x[r+17][c+1]='_';
	x[r+17][c+2]='.';
	x[r+17][c+3]='-';
	x[r+17][c+4]='"';
	// Row 18
	x[r+18][c-8]='"';
	x[r+18][c-7]='-';
	x[r+18][c-6]='.';
	x[r+18][c-5]='|';
	x[r+18][c-4]='|';
	x[r+18][c-3]='_';
	x[r+18][c-2]='//';
	x[r+18][c-1]='.';
	x[r+18][c]='-';
	x[r+18][c+1]='"';


}

// Plane
void Move_Plane (char x[][2560], int &R_Plane, int &C_Plane, int &ctup, int &ctright, int &ctdown, int &planeflag,int &R_Hero,int &C_Hero)
{
	if(ctup<17)
	{
		R_Plane -- ;
		ctup++;
	}
	if(ctup==17 && ctright<80)
	{
		C_Plane ++;
		ctright ++;
	}
	if(ctup==17 && ctright==80 && ctdown<17)
	{
		R_Plane ++;
		ctdown ++;
	}
	if (ctdown==17)
	{
		planeflag=0;
		C_Hero=C_Plane+2;
		C_Plane-=80;
		// nktb l r hero w l chero 3shan ynzll 
	}
}
void Draw_Plane (char x[][2560], int r, int c)
{
	// row zero
	x[r][c]=',';
	x[r][c+1]='-';
	x[r][c+2]='.';
	// row one
	x[r+1][c-1]='/';
	x[r+1][c+2]='/';
	x[r+1][c-8]='.';
	x[r+1][c-9]=',';
	x[r+1][c-10]='_';
	// row two
	x[r+2][c-11]=';';
	x[r+2][c-9]='\\';
	x[r+2][c-8]='_';
	x[r+2][c-7]='_';
	x[r+2][c-6]='_';
	x[r+2][c-5]='_';
	x[r+2][c-4]=',';
	x[r+2][c-3]='-';
	x[r+2][c-2]='=';
	x[r+2][c-1]='=';
	x[r+2][c]='-';
	x[r+2][c+1]='.';
	x[r+2][c+2]='_';
	x[r+2][c+5]=')';
	// row three
	x[r+3][c-11]='/';
	x[r+3][c-10]='/';
	x[r+3][c-9]='_';
	x[r+3][c-4]='`';
	x[r+3][c-3]='-';
	x[r+3][c-2]='-';
	x[r+3][c-1]='-';
	x[r+3][c]='-';
	x[r+3][c+1]='`';
	x[r+3][c+3]='{';
	x[r+3][c+4]='+';
	x[r+3][c+5]='>';
	// row four
	x[r+4][c-11]='`';
	x[r+4][c-8]='`';
	x[r+4][c-7]='"';
	x[r+4][c-6]='-';
	x[r+4][c-5]='-';
	x[r+4][c-4]='/';
	x[r+4][c-1]='/';
	x[r+4][c]='-';
	x[r+4][c+1]='"';
	x[r+4][c+2]='`';
	x[r+4][c+3]='(';
	// row five
	x[r+5][c-5]='/';
	x[r+5][c-2]='/';
	// row six
	x[r+6][c-5]='`';
	x[r+6][c-4]='=';
	x[r+6][c-2]='"';
	
	

}

// Rabbit And Carrot
void Draw_Rabits (char x[][2560], int p, int o)
{
	// row zero
	x[p][o]='//';
	x[p][o-1]='//';
	// row one
	x[p+1][o-1]='//';
	x[p+1][o-2]='//';
	// row two
	x[p+1][o-3]='_';
	// row three
	x[p+2][o-1]=')';
	x[p+2][o-3]='_';
	x[p+2][o-4]='\\';
	// row four
	x[p+3][o-1]='\\';
	x[p+3][o-3]='//';
	x[p+3][o-4]='_';
	x[p+3][o-5]='_';
	// row five
	x[p+4][o]='\\';
	x[p+4][o-3]='//';
	x[p+4][o-4]='"';
	x[p+4][o-5]='"';
	x[p+4][o-2]='_';
	// row six
	x[p+5][o+1]='}';
	x[p+5][o]='//';
	x[p+5][o-3]='(';
	x[p+5][o-4]='_';
	// row seven
	x[p+6][o-1]='"';
	x[p+6][o-2]='"';
	x[p+6][o-3]='"';
	x[p+6][o-4]='"';
	x[p+6][o-5]='"';




}
void Draw_carrot (char x[][2560], int r, int c)
{
	// row zero
	x[r][c]='_';
	x[r][c+1]='_';
	x[r][c+2]='_';
	x[r][c+3]='_';
	x[r][c+4]='_';
	// row one
	x[r+1][c+5]='`';
	x[r+1][c+6]='~';
	x[r+1][c+7]='~';
	x[r+1][c+8]='"';
	x[r+1][c+9]='-';
	x[r+1][c+10]='-';
	x[r+1][c+11]='.';
	x[r+1][c+12]=',';
	x[r+1][c+13]='_';
	// row two
	x[r+2][c+14]='`';
	x[r+2][c+15]='~';
	x[r+2][c+16]='~';
	x[r+2][c+17]='"';
	x[r+2][c+18]='-';
	x[r+2][c+19]='-';
	x[r+2][c+20]='.';
	x[r+2][c+21]=',';
	x[r+2][c+22]='_';
	// row three
	x[r+3][c]='_';
	x[r+3][c+1]='_';
	x[r+3][c+2]='_';
	x[r+3][c+3]='_';
	x[r+3][c+4]='_';
	x[r+3][c+5]=',';
	x[r+3][c+6]=',';
	x[r+3][c+7]=',';
	x[r+3][c+8]=',';
	x[r+3][c+9]='-';
	x[r+3][c+10]='-';
	x[r+3][c+11]='-';
	x[r+3][c+12]='-';
	x[r+3][c+13]='"';
	x[r+3][c+14]='"';
	x[r+3][c+15]='"';
	x[r+3][c+16]='~';
	x[r+3][c+17]='~';
	x[r+3][c+18]='`';
	x[r+3][c+19]='`';
	x[r+3][c+20]='`';
	x[r+3][c+21]='"';
	// tail
	x[r+1][c-1]='/';
	x[r+2][c-1]='|';
	x[r+3][c-1]='"';
	x[r+3][c]='.';
	x[r+2][c-2]='>';
	x[r+2][c-3]='-';
	x[r+2][c-4]='-';
	x[r+2][c-5]='-';
	x[r+2][c-6]='-';
	x[r+2][c-7]='-';
	x[r+2][c-8]='-';
	x[r+1][c-3]='\\';
	x[r+1][c-4]='_';
	x[r+1][c-5]='.';
	x[r+1][c-6]='-';
	x[r+1][c-7]='`';
	x[r+3][c-3]='/';
	x[r+3][c-4]='"';
	x[r+3][c-5]='-';
	x[r+3][c-6]='.';
	x[r+3][c-7]='_';



	





	

}
void Move_carrot(int &r,int &c,int &ct,int &ctagain)
{
	
	if (ct<20)
	{
		c++;
		ct++;
	}
	
	if (ct>=20)
	{

	c=250;
	ctagain++;
	if (ctagain==3)
	{
		ct=0;
		ctagain=0;
	}

	}
}

// Crocodile
void Draw_Crocodile(char x[][2560], int r , int c,int &CrocoSwitchFlag)
{
	for ( ; ; )
	{
		if (CrocoSwitchFlag==0)
		{
	// Row zero
	x[r][c]='(';
	x[r][c+5]=')';
	// Row one
	x[r+1][c-1]='(';
	x[r+1][c]='(';
	x[r+1][c+1]='(';
	x[r+1][c+2]='(';
	x[r+1][c+3]=')';
	x[r+1][c+4]=')';
	x[r+1][c+5]=')';
	x[r+1][c+6]=')';
	// Row two
	x[r+2][c-1]='|';
	x[r+2][c]='o';
	x[r+2][c+1]='\\';
	x[r+2][c+2]=' ';
	x[r+2][c+3]='//';
	x[r+2][c+4]='o';
	x[r+2][c+5]=')';
	x[r+2][c+6]='|';
	// Row three
	x[r+3][c-1]='(';
	x[r+3][c]=' ';
	x[r+3][c+1]='(';
	x[r+3][c+3]='_';
	x[r+3][c+4]='"';
	x[r+3][c+5]=')';
	// Row four
	x[r+4][c]='(';
	x[r+4][c+1]='.';
	x[r+4][c+2]='_';
	x[r+4][c+3]='.';
	x[r+4][c+6]='//';
	x[r+4][c+7]='\\';
	x[r+4][c+8]='_';
	x[r+4][c+9]='_';
	// Row five
	x[r+5][c-1]=',';
	x[r+5][c]='\\';
	x[r+5][c+1]='_';
	x[r+5][c+2]='_';
	x[r+5][c+3]='_';
	x[r+5][c+4]=',';
	x[r+5][c+5]='//';
	x[r+5][c+6]=' ';
	x[r+5][c+7]='"';
	x[r+5][c+10]='"';
	x[r+5][c+11]=')';
	// Row six
	x[r+6][c-15]='"';
	x[r+6][c-14]='.';
	x[r+6][c-13]=',';
	x[r+6][c-12]='_';
	x[r+6][c-11]=',';
	x[r+6][c-10]=',';
	x[r+6][c-2]='(';
	x[r+6][c+1]='.';
	x[r+6][c+2]='-';
	x[r+6][c+4]='.';
	x[r+6][c+8]='.';
	x[r+6][c+13]=')';
	// Row seven
	x[r+7][c-14]='\\';
	x[r+7][c-10]='\\';
	x[r+7][c-9]='\\';
	x[r+7][c-3]='(';
	x[r+7][c-1]='"';
	x[r+7][c+8]=')';
	x[r+7][c+9]='(';
	x[r+7][c+14]=')';
	// Row eight
	x[r+8][c-13]='\\';
	x[r+8][c-9]='\\';
	x[r+8][c-8]='\\';
	x[r+8][c-3]='\\';
	x[r+8][c-2]='.';
	x[r+8][c+1]='_';
	x[r+8][c+2]='.';
	x[r+8][c+3]='_';
	x[r+8][c+4]='_';
	x[r+8][c+5]=' ';
	x[r+8][c+6]='_';
	x[r+8][c+7]='_';
	x[r+8][c+8]='_';
	x[r+8][c+9]='_';
	x[r+8][c+10]='(';
	x[r+8][c+11]=' ';
	x[r+8][c+12]='.';
	x[r+8][c+14]='|';
	// Row nine 
	x[r+9][c-12]='\\';
	x[r+9][c-10]='//';
	x[r+9][c-9]='\\';
	x[r+9][c-8]='\\';
	x[r+9][c-4]='.';
	x[r+9][c-3]='(';
	x[r+9][c+1]='.';
	x[r+9][c+2]='"';
	x[r+9][c+5]='//';
	x[r+9][c+6]='\\';
	x[r+9][c+9]='"';
	x[r+9][c+10]='.';
	x[r+9][c+13]=')';
	// Row ten
	x[r+10][c-11]='\\';
	x[r+10][c-10]='(';
	x[r+10][c-7]='\\';
	x[r+10][c-6]='\\';
	x[r+10][c-5]='.';
	x[r+10][c-4]='-';
	x[r+10][c-3]='"';
	x[r+10][c-1]='(';
	x[r+10][c]=' ';
	x[r+10][c+1]='//';
	x[r+10][c+6]='\\';
	x[r+10][c+7]='//';
	x[r+10][c+12]='\\';
	x[r+10][c+13]=')';
	// Row eleven
	x[r+11][c-10]='"';
	x[r+11][c-7]='(';
	x[r+11][c-6]=')';
	x[r+11][c-5]=')';
	x[r+11][c-4]=')';
	x[r+11][c-2]='_';
	x[r+11][c-1]='"';
	x[r+11][c]='.';
	x[r+11][c+1]='-';
	x[r+11][c+2]='|';
	x[r+11][c+3]='//';
	x[r+11][c+4]='\\';
	x[r+11][c+5]='//';
	x[r+11][c+6]='\\';
	x[r+11][c+7]='//';
	x[r+11][c+8]='\\';
	x[r+11][c+9]='//';
	x[r+11][c+10]='\\';
	x[r+11][c+11]='//';
	x[r+11][c+12]='\\';
	x[r+11][c+13]='|';
	// Row tweleve
	x[r+12][c-6]='"';
	x[r+12][c-5]='\\';
	x[r+12][c-4]='\\';
	x[r+12][c-2]='.';
	x[r+12][c-1]='(';
	x[r+12][c]=' ';
	x[r+12][c+2]='|';
	x[r+12][c+3]='\\';
	x[r+12][c+4]='//';
	x[r+12][c+5]='\\';
	x[r+12][c+6]='//';
	x[r+12][c+7]='\\';
	x[r+12][c+8]='//';
	x[r+12][c+9]='\\';
	x[r+12][c+10]='//';
	x[r+12][c+11]='\\';
	x[r+12][c+12]='//';
	x[r+12][c+13]='|';
	// Row 13
	x[r+13][c-5]='"';
	x[r+13][c-4]='(';
	x[r+13][c-3]='(';
	x[r+13][c]='\\';
	x[r+13][c+5]='//';
	x[r+13][c+6]='\\';
	x[r+13][c+11]='//';
	// Row 14
	x[r+14][c-5]='(';
	x[r+14][c-4]='(';
	x[r+14][c-3]='(';
	x[r+14][c-2]='(';
	x[r+14][c+1]='"';
	x[r+14][c+2]='.';
	x[r+14][c+3]='_';
	x[r+14][c+4]='_';
	x[r+14][c+5]='\\';
	x[r+14][c+6]='//';
	x[r+14][c+7]='_';
	x[r+14][c+8]='_';
	x[r+14][c+9]='.';
	x[r+14][c+10]='"';
	x[r+14][c+11]=')';
	// Row 15
	x[r+15][c-4]='(';
	x[r+15][c-3]='(';
	x[r+15][c-2]=',';
	x[r+15][c-1]=')';
	x[r+15][c]='//';
	x[r+15][c+4]='(';
	x[r+15][c+5]='(';
	x[r+15][c+6]='(';
	x[r+15][c+7]=')';
	x[r+15][c+11]=')';
	// Row 16
	x[r+16][c-3]='(';
	x[r+16][c-2]='(';
	x[r+16][c-1]=',';
	x[r+16][c]=')';
	x[r+16][c+2]='//';
	x[r+16][c+6]='(';
	x[r+16][c+7]='(';
	x[r+16][c+8]='(';
	x[r+16][c+9]=')';
	x[r+16][c+12]=')';
	// Row 17
	x[r+17][c-2]='"';
	x[r+17][c-1]='.';
	x[r+17][c]='.';
	x[r+17][c+1]='-';
	x[r+17][c+2]=',';
	x[r+17][c+5]='(';
	x[r+17][c+6]='(';
	x[r+17][c+7]=')';
	x[r+17][c+8]='(';
	x[r+17][c+9]='"';
	x[r+17][c+12]='//';
	// Row 18
	x[r+18][c-1]='_';
	x[r+18][c]='//';
	x[r+18][c+1]='//';
	x[r+18][c+2]='.';
	x[r+18][c+6]='(';
	x[r+18][c+7]='(';
	x[r+18][c+8]='(';
	x[r+18][c+9]=')';
	x[r+18][c+11]='.';
	x[r+18][c+12]='"';
	// Row 19
	x[r+19][c-10]='_';
	x[r+19][c-9]='_';
	x[r+19][c-8]='_';
	x[r+19][c-7]='_';
	x[r+19][c-6]='_';
	x[r+19][c-4]='//';
	x[r+19][c-3]='//';
	x[r+19][c-2]=',';
	x[r+19][c-1]='//';
	x[r+19][c]='"';
	x[r+19][c+2]='_';
	x[r+19][c+3]='_';
	x[r+19][c+4]='_';
	x[r+19][c+6]='(';
	x[r+19][c+7]='(';
	x[r+19][c+8]='(';
	x[r+19][c+11]=',';
	x[r+19][c+13]='_';
	x[r+19][c+14]='_';
	x[r+19][c+15]='_';
	// Row 20
	x[r+20][c+8]='(';
	x[r+20][c+9]='(';
	x[r+20][c+12]=')';
	// Row 21
	x[r+21][c+9]='//';
	x[r+21][c+11]='//';
	// Row 22
	x[r+22][c+8]='_';
	x[r+22][c+9]='//';
	x[r+22][c+10]=',';
	x[r+22][c+11]='//';
	x[r+22][c+12]='"';
	// Row 23
	x[r+23][c+6]='//';
	x[r+23][c+7]=',';
	x[r+23][c+8]='//';
	x[r+23][c+9]=',';
	x[r+23][c+10]='"';
	CrocoSwitchFlag=1;
	break;
	}
	if (CrocoSwitchFlag==1)
	{
			// Row zero
	x[r][c]='(';
	x[r][c+5]=')';
	// Row one
	x[r+1][c-1]='(';
	x[r+1][c]='(';
	x[r+1][c+1]='(';
	x[r+1][c+2]='(';
	x[r+1][c+3]=')';
	x[r+1][c+4]=')';
	x[r+1][c+5]=')';
	x[r+1][c+6]=')';
	// Row two
	x[r+2][c-1]='|';
	x[r+2][c]='o';
	x[r+2][c+1]='\\';
	x[r+2][c+2]=' ';
	x[r+2][c+3]='//';
	x[r+2][c+4]='o';
	x[r+2][c+5]=')';
	x[r+2][c+6]='|';
	// Row three
	x[r+3][c-1]='(';
	x[r+3][c]=' ';
	x[r+3][c+1]='(';
	x[r+3][c+3]='_';
	x[r+3][c+4]='"';
	x[r+3][c+5]=')';
	// Row four
	x[r+4][c]='(';
	x[r+4][c+1]='.';
	x[r+4][c+2]='_';
	x[r+4][c+3]='.';
	x[r+4][c+6]='//';
	x[r+4][c+7]='\\';
	x[r+4][c+8]='_';
	x[r+4][c+9]='_';
	// Row five
	x[r+5][c-1]=',';
	x[r+5][c]='\\';
	x[r+5][c+1]='_';
	x[r+5][c+2]='_';
	x[r+5][c+3]='_';
	x[r+5][c+4]=',';
	x[r+5][c+5]='//';
	x[r+5][c+6]=' ';
	x[r+5][c+7]='"';
	x[r+5][c+10]='"';
	x[r+5][c+11]=')';
	// Row six
	x[r+6][c-2]='(';
	x[r+6][c+1]='.';
	x[r+6][c+2]='-';
	x[r+6][c+4]='.';
	x[r+6][c+8]='.';
	x[r+6][c+13]=')';
	// Row seven

	x[r+7][c-3]='(';
	x[r+7][c-1]='"';
	x[r+7][c+8]=')';
	x[r+7][c+9]='(';
	x[r+7][c+14]=')';
	// Row eight
	x[r+8][c-3]='\\';
	x[r+8][c-2]='.';
	x[r+8][c+1]='_';
	x[r+8][c+2]='.';
	x[r+8][c+3]='_';
	x[r+8][c+4]='_';
	x[r+8][c+5]=' ';
	x[r+8][c+6]='_';
	x[r+8][c+7]='_';
	x[r+8][c+8]='_';
	x[r+8][c+9]='_';
	x[r+8][c+10]='(';
	x[r+8][c+11]=' ';
	x[r+8][c+12]='.';
	x[r+8][c+14]='|';
	// Row nine 

	x[r+9][c-4]='.';
	x[r+9][c-3]='(';
	x[r+9][c+1]='.';
	x[r+9][c+2]='"';
	x[r+9][c+5]='//';
	x[r+9][c+6]='\\';
	x[r+9][c+9]='"';
	x[r+9][c+10]='.';
	x[r+9][c+13]=')';
	// Row ten
	x[r+10][c-5]='.';
	x[r+10][c-4]='-';
	x[r+10][c-3]='"';
	x[r+10][c-1]='(';
	x[r+10][c]=' ';
	x[r+10][c+1]='//';
	x[r+10][c+6]='\\';
	x[r+10][c+7]='//';
	x[r+10][c+12]='\\';
	x[r+10][c+13]=')';
	// Row eleven
	x[r+11][c-12]='_';
	x[r+11][c-13]='_';
	x[r+11][c-14]='_';
	x[r+11][c-15]='_';
	x[r+11][c-16]='_';
	x[r+11][c-17]='_';
	x[r+11][c-18]='_';
	x[r+11][c-19]='_';
	x[r+11][c-20]='_';
	x[r+11][c-21]=')';
	x[r+11][c-11]='-';
	x[r+11][c-8]='-';
	x[r+11][c-9]='-';
	x[r+11][c-10]='-';
	x[r+11][c-7]='(';
	x[r+11][c-6]=')';
	x[r+11][c-5]=')';
	x[r+11][c-4]=')';
	x[r+11][c-2]='_';
	x[r+11][c-1]='"';
	x[r+11][c]='.';
	x[r+11][c+1]='-';
	x[r+11][c+2]='|';
	x[r+11][c+3]='//';
	x[r+11][c+4]='\\';
	x[r+11][c+5]='//';
	x[r+11][c+6]='\\';
	x[r+11][c+7]='//';
	x[r+11][c+8]='\\';
	x[r+11][c+9]='//';
	x[r+11][c+10]='\\';
	x[r+11][c+11]='//';
	x[r+11][c+12]='\\';
	x[r+11][c+13]='|';
	// Row tweleve
	x[r+12][c-12]='_';
	x[r+12][c-13]='_';
	x[r+12][c-14]='_';
	x[r+12][c-15]='_';
	x[r+12][c-16]='_';
	x[r+12][c-17]='_';
	x[r+12][c-18]='_';
	x[r+12][c-19]='_';
	x[r+12][c-20]='_';
	x[r+12][c-21]=')';
	x[r+12][c-11]='-';
	x[r+12][c-8]='-';
	x[r+12][c-9]='-';
	x[r+12][c-10]='-';
	x[r+12][c-6]='"';
	x[r+12][c-5]='\\';
	x[r+12][c-4]='\\';
	x[r+12][c-2]='.';
	x[r+12][c-1]='(';
	x[r+12][c]=' ';
	x[r+12][c+2]='|';
	x[r+12][c+3]='\\';
	x[r+12][c+4]='//';
	x[r+12][c+5]='\\';
	x[r+12][c+6]='//';
	x[r+12][c+7]='\\';
	x[r+12][c+8]='//';
	x[r+12][c+9]='\\';
	x[r+12][c+10]='//';
	x[r+12][c+11]='\\';
	x[r+12][c+12]='//';
	x[r+12][c+13]='|';
	// Row 13
	x[r+13][c-5]='"';
	x[r+13][c-4]='(';
	x[r+13][c-3]='(';
	x[r+13][c]='\\';
	x[r+13][c+5]='//';
	x[r+13][c+6]='\\';
	x[r+13][c+11]='//';
	// Row 14
	x[r+14][c-5]='(';
	x[r+14][c-4]='(';
	x[r+14][c-3]='(';
	x[r+14][c-2]='(';
	x[r+14][c+1]='"';
	x[r+14][c+2]='.';
	x[r+14][c+3]='_';
	x[r+14][c+4]='_';
	x[r+14][c+5]='\\';
	x[r+14][c+6]='//';
	x[r+14][c+7]='_';
	x[r+14][c+8]='_';
	x[r+14][c+9]='.';
	x[r+14][c+10]='"';
	x[r+14][c+11]=')';
	// Row 15
	x[r+15][c-4]='(';
	x[r+15][c-3]='(';
	x[r+15][c-2]=',';
	x[r+15][c-1]=')';
	x[r+15][c]='//';
	x[r+15][c+4]='(';
	x[r+15][c+5]='(';
	x[r+15][c+6]='(';
	x[r+15][c+7]=')';
	x[r+15][c+11]=')';
	// Row 16
	x[r+16][c-3]='(';
	x[r+16][c-2]='(';
	x[r+16][c-1]=',';
	x[r+16][c]=')';
	x[r+16][c+2]='//';
	x[r+16][c+6]='(';
	x[r+16][c+7]='(';
	x[r+16][c+8]='(';
	x[r+16][c+9]=')';
	x[r+16][c+12]=')';
	// Row 17
	x[r+17][c-2]='"';
	x[r+17][c-1]='.';
	x[r+17][c]='.';
	x[r+17][c+1]='-';
	x[r+17][c+2]=',';
	x[r+17][c+5]='(';
	x[r+17][c+6]='(';
	x[r+17][c+7]=')';
	x[r+17][c+8]='(';
	x[r+17][c+9]='"';
	x[r+17][c+12]='//';
	// Row 18
	x[r+18][c-1]='_';
	x[r+18][c]='//';
	x[r+18][c+1]='//';
	x[r+18][c+2]='.';
	x[r+18][c+6]='(';
	x[r+18][c+7]='(';
	x[r+18][c+8]='(';
	x[r+18][c+9]=')';
	x[r+18][c+11]='.';
	x[r+18][c+12]='"';
	// Row 19
	x[r+19][c-10]='_';
	x[r+19][c-9]='_';
	x[r+19][c-8]='_';
	x[r+19][c-7]='_';
	x[r+19][c-6]='_';
	x[r+19][c-4]='//';
	x[r+19][c-3]='//';
	x[r+19][c-2]=',';
	x[r+19][c-1]='//';
	x[r+19][c]='"';
	x[r+19][c+2]='_';
	x[r+19][c+3]='_';
	x[r+19][c+4]='_';
	x[r+19][c+6]='(';
	x[r+19][c+7]='(';
	x[r+19][c+8]='(';
	x[r+19][c+11]=',';
	x[r+19][c+13]='_';
	x[r+19][c+14]='_';
	x[r+19][c+15]='_';
	// Row 20
	x[r+20][c+8]='(';
	x[r+20][c+9]='(';
	x[r+20][c+12]=')';
	// Row 21
	x[r+21][c+9]='//';
	x[r+21][c+11]='//';
	// Row 22
	x[r+22][c+8]='_';
	x[r+22][c+9]='//';
	x[r+22][c+10]=',';
	x[r+22][c+11]='//';
	x[r+22][c+12]='"';
	// Row 23
	x[r+23][c+6]='//';
	x[r+23][c+7]=',';
	x[r+23][c+8]='//';
	x[r+23][c+9]=',';
	x[r+23][c+10]='"';
		CrocoSwitchFlag=0;
		break;
	}
}
}

// Bat
void Move_Bat(int &br, int &bc , int &Dir_Bat)
{
	if (Dir_Bat == 1)
	{
		br++;
		if (br>30)
		{
			Dir_Bat=-1;
		}
	}
	
	if (Dir_Bat == -1)
	{
		br--;
		if (br<=20)
		{
			Dir_Bat =  1;
		}
	}
}
void Draw_Bats(char x[][2560], int r , int c, int &BSF)
{
	for ( ; ; )
	{
	if (BSF==0)
	{
	// row zero
	x[r][c+1]='=';
	x[r][c+2]='//';
	x[r][c+3]='\\';
	x[r][c+21]='//';
	x[r][c+22]='\\';
	x[r][c+23]='=';
	// row one
	x[r+1][c+1]='//';
	x[r+1][c+2]=' ';
	x[r+1][c+3]='\\';
	x[r+1][c+4]='"';
	x[r+1][c+5]='.';
	x[r+1][c+6]='_';
	x[r+1][c+10]='(';
	x[r+1][c+11]='\\';
	x[r+1][c+12]='_';
	x[r+1][c+13]='//';
	x[r+1][c+14]=')';
	x[r+1][c+18]='_';
	x[r+1][c+19]='.';
	x[r+1][c+20]='"';
	x[r+1][c+21]='//';
	x[r+1][c+22]=' ';
	x[r+1][c+23]='\\';
	// row two
	x[r+2][c]='//';
	x[r+2][c+1]=' ';
	x[r+2][c+2]='.';
	x[r+2][c+3]='"';
	x[r+2][c+4]='"';
	x[r+2][c+5]='.';
	x[r+2][c+6]='_';
	x[r+2][c+7]='"';
	x[r+2][c+8]='-';
	x[r+2][c+9]='-';
	x[r+2][c+10]='(';
	x[r+2][c+11]='o';
	x[r+2][c+12]='.';
	x[r+2][c+13]='o';
	x[r+2][c+14]=')';
	x[r+2][c+15]='-';
	x[r+2][c+16]='-';
	x[r+2][c+17]='"';
	x[r+2][c+18]='_';
	x[r+2][c+19]='.';
	x[r+2][c+20]='"';
	x[r+2][c+21]='"';
	x[r+2][c+22]='.';
	x[r+2][c+23]='`';
	x[r+2][c+24]='\\';
	// row three
	x[r+3][c-1]='//';
	x[r+3][c]='.';
	x[r+3][c+1]='"';
	x[r+3][c+2]=' ';
	x[r+3][c+3]='_';
	x[r+3][c+4]='//';
	x[r+3][c+5]=' ';
	x[r+3][c+6]='|';
	x[r+3][c+7]='`';
	x[r+3][c+8]='"';
	x[r+3][c+9]='=';
	x[r+3][c+10]='//';
	x[r+3][c+11]=' ';
	x[r+3][c+12]='"';
	x[r+3][c+13]=' ';
	x[r+3][c+14]='\\';
	x[r+3][c+15]='=';
	x[r+3][c+16]='"';
	x[r+3][c+17]='`';
	x[r+3][c+18]='|';
	x[r+3][c+19]=' ';
	x[r+3][c+20]='\\';
	x[r+3][c+21]='_';
	x[r+3][c+22]=' ';
	x[r+3][c+23]='`';
	x[r+3][c+24]='.';
	x[r+3][c+25]='\\';
	
	//row four

	x[r+4][c-2]='//';
	x[r+4][c-1]='`';
	x[r+4][c]=' ';
	x[r+4][c+1]='.';
	x[r+4][c+2]='"';
	x[r+4][c+3]=' ';
	x[r+4][c+4]='`';
	x[r+4][c+5]='\\';
	x[r+4][c+6]=';';
	x[r+4][c+7]='-';
	x[r+4][c+8]=',';
	x[r+4][c+9]='"';
	x[r+4][c+10]='\\';
	x[r+4][c+11]='_';
	x[r+4][c+12]='_';
	x[r+4][c+13]='_';
	x[r+4][c+14]='//';
	x[r+4][c+15]='"';
	x[r+4][c+16]=',';
	x[r+4][c+17]='-';
	x[r+4][c+18]=';';
	x[r+4][c+19]='/';
	x[r+4][c+20]='`';
	x[r+4][c+21]=' ';
	x[r+4][c+22]='"';
	x[r+4][c+23]='.';
	x[r+4][c+24]=' ';
	x[r+4][c+25]='"';
	x[r+4][c+26]='\\';

	// row five 

	x[r+5][c-3]='//';
	x[r+5][c-2]='.';
	x[r+5][c-1]='-';
	x[r+5][c]='"';
	x[r+5][c+8]='`';
	x[r+5][c+9]='\\';
	x[r+5][c+10]='(';
	x[r+5][c+11]='-';
	x[r+5][c+12]='V';
	x[r+5][c+13]='-';
	x[r+5][c+14]=')';
	x[r+5][c+15]='//';
	x[r+5][c+16]='`';
	x[r+5][c+24]='`';
	x[r+5][c+25]='-';
	x[r+5][c+26]='.';
	x[r+5][c+27]='\\';

	// row six

	x[r+6][c-3]='`';
	x[r+6][c+10]='"';
	x[r+6][c+14]='"';
	x[r+6][c+27]='`';
	BSF=1;
	break;
	}
	if (BSF==1)
	{// row zero
	x[r][c]='/';
	x[r][c+1]='\\';
	x[r][c+19]='/';
	x[r][c+20]='\\';
	// row one
	x[r+1][c-1]='//';
	x[r+1][c]='\\';
	x[r+1][c+1]='`';
	x[r+1][c+2]='.';
	x[r+1][c+3]='_';
	x[r+1][c+8]='(';
	x[r+1][c+9]='\\';
	x[r+1][c+10]='_';
	x[r+1][c+11]='//';
	x[r+1][c+12]=')';
	x[r+1][c+17]='_';
	x[r+1][c+18]='.';
	x[r+1][c+19]='`';
	x[r+1][c+20]='//';
	x[r+1][c+21]='\\';
	// row two
	x[r+2][c]='.';
	x[r+2][c-1]='|';
	x[r+2][c+1]='`';
	x[r+2][c+2]='`';
	x[r+2][c+3]='.';
	x[r+2][c+4]='_';
	x[r+2][c+5]='`';
	x[r+2][c+6]='-';
	x[r+2][c+7]='-';
	x[r+2][c+8]='(';
	x[r+2][c+9]='o';
	x[r+2][c+10]='.';
	x[r+2][c+11]='o';
	x[r+2][c+12]=')';
	x[r+2][c+13]='-';
	x[r+2][c+14]='-';
	x[r+2][c+15]='`';
	x[r+2][c+16]='_';
	x[r+2][c+17]='.';
	x[r+2][c+18]='`';
	x[r+2][c+19]='`';
	x[r+2][c+20]='.';
	x[r+2][c+21]='|';
	// row three
	x[r+3][c]='\\';
	x[r+3][c+1]='_';
	x[r+3][c+3]='//';
	x[r+3][c+5]='`';
	x[r+3][c+6]=';';
	x[r+3][c+7]='=';
	x[r+3][c+8]='//';
	x[r+3][c+10]='"';
	x[r+3][c+12]='\\';
	x[r+3][c+13]='=';
	x[r+3][c+14]=';';
	x[r+3][c+16]='\\';
	x[r+3][c+18]='_';
	x[r+3][c+19]='//';
	// row four
	x[r+4][c+2]='`';
	x[r+4][c+3]='\\';
	x[r+4][c+4]='_';
	x[r+4][c+5]='_';
	x[r+4][c+6]='|';
	x[r+4][c+8]='\\';
	x[r+4][c+9]='_';
	x[r+4][c+10]='_';
	x[r+4][c+11]='_';
	x[r+4][c+12]='//';
	x[r+4][c+14]='|';
	x[r+4][c+14]='_';
	x[r+4][c+15]='_';
	x[r+4][c+16]='//';
	x[r+4][c+17]='`';
	// row five
	x[r+5][c+7]='\\';
	x[r+5][c+8]='(';
	x[r+5][c+9]='_';
	x[r+5][c+10]='|';
	x[r+5][c+11]='_';
	x[r+5][c+12]=')';
	x[r+5][c+13]='//';
	// row six
	x[r+6][c+8]='"';
	x[r+6][c+10]='`';
	x[r+6][c+12]='"';
	BSF=0;
	break;





	}
	}

}

// Monkey
void Draw_Monkey (char x[][2560], int r, int c)
{
	// Row zero
	x[r][c]='_';
	x[r][c+1]='_';
	// Row one
	x[r+1][c+2]=')';
	x[r+1][c+1]='.';
	x[r+1][c]='.';
	x[r+1][c-1]='(';
	x[r+1][c+3]='o';
	x[r+1][c-2]='c';
	x[r+1][c-4]='w';
	// row two
	x[r+2][c-1]='(';
	x[r+2][c+1]=')';
	x[r+2][c]='-';
	x[r+2][c-2]='_';
	x[r+2][c-3]='_';
	x[r+2][c-3]='\\';
	// row three
	x[r+3][c]='/';
	x[r+3][c+1]='\\';
	// row four
	x[r+4][c-1]='/';
	x[r+4][c]='(';
	x[r+4][c+1]='_';
	x[r+4][c+2]=')';
	// Tail
	x[r+4][c+3]='_';
	x[r+4][c+4]='_';
	x[r+4][c+5]='_';
	x[r+4][c+6]=')';
	x[r+3][c+5]='(';
	x[r+2][c+6]='_';
	x[r+2][c+7]='_';
	x[r+2][c+8]=')';
	x[r+1][c+7]='(';
	// row five
	x[r+5][c-1]='w';
	x[r+5][c+1]='//';
	x[r+5][c+2]='|';
	// row six
	x[r+6][c]='|';
	x[r+6][c+2]='\\';
	// row seven
	x[r+7][c-1]='m';
	x[r+7][c+2]='m';


}
void Move_Monkey (char x[][2560], int &C_M, int &DirMonkey)
{
	if (DirMonkey == 1)
	{
		C_M++;
		if (C_M>70)
		{
			DirMonkey=-1;
		}
	}
	
	if (DirMonkey == -1)
	{
		C_M--;
		if (C_M<=50)
		{
			DirMonkey =  1;
		}
	}
}

// Rain
void Draw_rain ( char x[][2560] , int R_rain , int C_rain , int &rainzigzag )
{
	for ( ; ; )
	{
	if ( rainzigzag == 0)
	{
		for (int r=R_rain ; r<R_rain+10 ; r++ )
		{
			if ( r % 2 == 0 )
			{
				for (int c=C_rain ; c<470 ; c+=3)
				{
					x[r][c]='//';
				}
			}
			if ( r % 2 != 0 )
			{
				for (int c=C_rain+1 ; c<470 ; c+=3)
				{
					x[r][c]='//';
				}
			}
		}
		rainzigzag = 1;
		break;
	}
	if ( rainzigzag == 1)
	{

		for (int r=R_rain ; r<R_rain+10 ; r++ )
		{
			if ( r % 2 == 0 )
			{
				for (int c=C_rain+1 ; c<470 ; c+=3)
				{
					x[r][c]='\\';
				}
			}
			if ( r % 2 != 0 )
			{
				for (int c=C_rain ; c<470 ; c+=3)
				{
					x[r][c]='\\';
				}
			}
		}
		rainzigzag=0;
		break;
	}
	}
}
void Move_rain ( char x[][2560] , int &rainflag , int R_Hero , int &C_Hero , int &R_rain , int&C_rain, int rainzigzag)
{
			R_rain+=2;
	
			if ( R_rain+2 == 44 )
			{
				R_rain=6;
			}
}

// Cookies
void Draw_Cookies (char x[][2560],int r, int c)
{
	// Row Zero
	x[r][c]='.';
	for (int i=1;i<28;i++)
	{
		x[r][c+i]='-';
	}
	x[r][c+28]='.';
	// Row one
	x[r+1][c-1]='//';
	x[r+1][c]='_';
	x[r+1][c+4]='_';
	x[r+1][c+8]='_';
	x[r+1][c+18]='_';
	x[r+1][c+19]='_';
	x[r+1][c+22]='_';
	x[r+1][c+23]='_';
	x[r+1][c+27]='//';
	x[r+1][c+28]='|';
	// Row Two
	x[r+2][c-2]='//';
	x[r+2][c-1]='//';
	x[r+2][c]=' ';
	x[r+2][c+1]='\\';
	x[r+2][c+2]=' ';
	x[r+2][c+3]='//';
	x[r+2][c+4]=' ';
	x[r+2][c+5]='\\';
	x[r+2][c+6]=' ';
	x[r+2][c+7]='//';
	x[r+2][c+8]=' ';
	x[r+2][c+9]='\\';
	x[r+2][c+10]=' ';
	x[r+2][c+11]='|';
	x[r+2][c+12]='_';
	x[r+2][c+13]='//';
	x[r+2][c+14]=' ';
	x[r+2][c+15]='|';
	x[r+2][c+16]=' ';
	x[r+2][c+17]='|';
	x[r+2][c+18]='_';
	x[r+2][c+19]=' ';
	x[r+2][c+20]=' ';
	x[r+2][c+21]='(';
	x[r+2][c+22]='_';
	x[r+2][c+23]=' ';
	x[r+2][c+24]=' ';
	x[r+2][c+25]=' ';
	x[r+2][c+26]='//';
	x[r+2][c+27]=' ';
	x[r+2][c+28]='|';
	// Row Three

	x[r+3][c-3]='//';
	x[r+3][c-2]=' ';
	x[r+3][c-1]='\\';
	x[r+3][c]='_';
	x[r+3][c+1]=' ';
	x[r+3][c+2]=' ';
	x[r+3][c+3]='\\';
	x[r+3][c+4]='_';
	x[r+3][c+5]='//';
	x[r+3][c+6]=' ';
	x[r+3][c+7]='\\';
	x[r+3][c+8]='_';
	x[r+3][c+9]='//';
	x[r+3][c+10]=' ';
	x[r+3][c+11]='|';
	x[r+3][c+12]=' ';
	x[r+3][c+13]='\\';
	x[r+3][c+14]=' ';
	x[r+3][c+15]='|';
	x[r+3][c+16]=' ';
	x[r+3][c+17]='|';
	x[r+3][c+18]='_';
	x[r+3][c+19]=' ';
	x[r+3][c+20]=',';
	x[r+3][c+21]='_';
	x[r+3][c+22]='//';
	x[r+3][c+23]=' ';
	x[r+3][c+24]=' ';
	x[r+3][c+25]='//';
	x[r+3][c+26]=' ';
	x[r+3][c+27]=' ';
	x[r+3][c+28]='|';
	// Row four
	x[r+4][c-4]=':';
	x[r+4][c-3]='.';
	for ( int i=-2 ; i<24 ; i++ )
	{
		x[r+4][c+i]='_';
	}
	x[r+4][c+24]='//';
	x[r+4][c+25]=' ';
	x[r+4][c+26]=' ';
	x[r+4][c+27]=' ';
	x[r+4][c+28]='//';

	// Row five 
	
	x[r+5][c-4]='|';
	x[r+5][c-3]=' ';
	x[r+5][c-2]=' ';
	x[r+5][c-1]='.';
	x[r+5][c]='-';
	x[r+5][c+1]='-';
	x[r+5][c+2]='.';
	x[r+5][c+3]=' ';
	x[r+5][c+4]='.';
	x[r+5][c+5]='-';
	x[r+5][c+6]='-';
	x[r+5][c+7]='.';
	x[r+5][c+8]=' ';
	x[r+5][c+9]=' ';
	x[r+5][c+10]=' ';
	x[r+5][c+11]='.';
	x[r+5][c+12]='-';
	x[r+5][c+13]='-';
	x[r+5][c+14]='.';
	x[r+5][c+15]=' ';
	x[r+5][c+16]=' ';
	x[r+5][c+17]=' ';
	x[r+5][c+18]='.';
	x[r+5][c+19]='-';
	x[r+5][c+20]='-';
	x[r+5][c+21]='.';
	x[r+5][c+22]=' ';
	x[r+5][c+23]=' ';
	x[r+5][c+24]='|';
	x[r+5][c+25]=' ';
	x[r+5][c+26]=' ';
	x[r+5][c+27]='//';

	// Row six

	x[r+6][c-4]='|';
	x[r+6][c-3]=' ';
	x[r+6][c-2]='(';
	x[r+6][c-1]=' ';
	x[r+6][c]=' ';
	x[r+6][c+1]=' ';
	x[r+6][c+2]=' ';
	x[r+6][c+3]=')';
	x[r+6][c+4]=' ';
	x[r+6][c+5]=' ';
	x[r+6][c+6]=' ';
	x[r+6][c+7]=' ';
	x[r+6][c+8]=')';
	x[r+6][c+9]=' ';
	x[r+6][c+10]='(';
	x[r+6][c+11]=' ';
	x[r+6][c+12]=' ';
	x[r+6][c+13]=' ';
	x[r+6][c+14]=' ';
	x[r+6][c+15]=')';
	x[r+6][c+16]=' ';
	x[r+6][c+17]='(';
	x[r+6][c+18]=' ';
	x[r+6][c+19]=' ';
	x[r+6][c+20]=' ';
	x[r+6][c+21]=' ';
	x[r+6][c+22]=')';
	x[r+6][c+23]=' ';
	x[r+6][c+24]='|';
	x[r+6][c+25]=' ';
	x[r+6][c+26]='//';

	// Row seven

	x[r+7][c-4]='|';
	x[r+7][c-3]=' ';
	x[r+7][c-2]=' ';
	x[r+7][c-1]='"';
	x[r+7][c]='_';
	x[r+7][c+1]='_';
	x[r+7][c+2]='"';
	x[r+7][c+3]=' ';
	x[r+7][c+4]='"';
	x[r+7][c+5]='_';
	x[r+7][c+6]='_';
	x[r+7][c+7]='"';
	x[r+7][c+8]=' ';
	x[r+7][c+9]=' ';
	x[r+7][c+10]=' ';
	x[r+7][c+11]='"';
	x[r+7][c+12]='_';
	x[r+7][c+13]='_';
	x[r+7][c+14]='"';
	x[r+7][c+15]=' ';
	x[r+7][c+16]=' ';
	x[r+7][c+17]=' ';
	x[r+7][c+18]='"';
	x[r+7][c+19]='_';
	x[r+7][c+20]='_';
	x[r+7][c+21]='"';
	x[r+7][c+22]=' ';
	x[r+7][c+23]=' ';
	x[r+7][c+24]='|';
	x[r+7][c+25]='//';

	// Row eight

	x[r+8][c-4]='"';

	for ( int i=-3 ; i<24 ; i++ )
	{
		x[r+8][c+i]='-';
	}

	x[r+8][c+24]='"';

}

// Dog
void Draw_Dog (char x[][2560],int r,int &c,int &ForwardFlag,int &ReverseFlag,int &Dog_Dir,int &DogCt)
{
for ( ; ; )
{
	if (ForwardFlag==1&&Dog_Dir==1)
	{
	// Dog To Right With Leg Up
	// Row Zeo
	x[r][c]=',';
	x[r][c+6]=',';
	x[r][c+7]='"';
	x[r][c+9]=',';
	x[r][c+10]='`';
	x[r][c+11]='-';
	x[r][c+12]='o';
	// Row One
	x[r+1][c-1]='(';
	x[r+1][c]='(';
	x[r+1][c+5]='(';
	x[r+1][c+8]='|';
	x[r+1][c+10]='_';
	x[r+1][c+11]=',';
	// Row Two
	x[r+2][c]='\\';
	x[r+2][c+1]='\\';
	x[r+2][c+2]='~';
	x[r+2][c+3]='-';
	x[r+2][c+4]='-';
	x[r+2][c+6]='"';
	x[r+2][c+7]='`';
	x[r+2][c+8]='-';
	x[r+2][c+9]='"';
	x[r+2][c+11]='(';
	x[r+2][c+12]='_';
	x[r+2][c+13]='_';
	// Row Three
	x[r+3][c]='(';
	x[r+3][c+9]='`';
	x[r+3][c+10]='-';
	x[r+3][c+11]='-';
	x[r+3][c+12]='.';
	x[r+3][c+13]='"';
	// Row Four
	x[r+4][c]='//';
	x[r+4][c+1]=')';
	x[r+4][c+4]='.';
	x[r+4][c+5]='_';
	x[r+4][c+6]='_';
	x[r+4][c+7]=',';
	x[r+4][c+8]='`';
	x[r+4][c+9]='-';
	x[r+4][c+10]='-';
	x[r+4][c+11]='~';
	x[r+4][c+12]='"';
	// Row Five
	x[r+5][c-1]='(';
	x[r+5][c]='(';
	x[r+5][c+3]='(';
	// Row Six
	x[r+6][c+1]='`';
	x[r+6][c+2]='"';
	x[r+6][c+3]='"';
	x[r+6][c+4]='"';
	c++;
	DogCt++;
	ForwardFlag=0;
	if (DogCt==15)
	{
		Dog_Dir=-1;
		DogCt=0;
	}
	break;
	}

	if (ForwardFlag==0&&Dog_Dir==1)
	{
	// Dog To Right With legs Down
	// Row Zero
	x[r][c]=',';
	x[r][c+6]=',';
	x[r][c+7]='"';
	x[r][c+9]='e';
	x[r][c+10]='`';
	x[r][c+11]='-';
	x[r][c+12]='o';
	// Row One
	x[r+1][c-1]='(';
	x[r+1][c]='(';
	x[r+1][c+5]='(';
	x[r+1][c+8]='|';
	x[r+1][c+10]='_';
	x[r+1][c+11]=',';
	// Row Two
	x[r+2][c]='\\';
	x[r+2][c+1]='\\';
	x[r+2][c+2]='~';
	x[r+2][c+3]='-';
	x[r+2][c+4]='-';
	x[r+2][c+6]='"';
	x[r+2][c+7]='`';
	x[r+2][c+8]='-';
	x[r+2][c+9]='"';
	x[r+2][c+10]='//';
	// Row Three
	x[r][c]='(';
	x[r][c+9]='//';
	// Row Four
	x[r+4][c]='//';
	x[r+4][c+1]=')';
	x[r+4][c+4]='.';
	x[r+4][c+5]='_';
	x[r+4][c+6]='_';
	x[r+4][c+7]='_';
	x[r+4][c+8]='.';
	x[r+4][c+9]=')';
	// Row Five
	x[r+5][c-1]='(';
	x[r+5][c]='(';
	x[r+5][c+3]='(';
	x[r+5][c+7]='(';
	x[r+5][c+8]='(';
	x[r+5][c+10]='(';
	// Row Six
	x[r+6][c]='`';
	x[r+6][c+1]='`';
	x[r+6][c+2]='-';
	x[r+6][c+3]='"';
	x[r+6][c+7]='`';
	x[r+6][c+8]='`';
	x[r+6][c+9]='-';
	x[r+6][c+10]='"';
	c++;
	DogCt++;
	ForwardFlag=1;
	if (DogCt==15)
	{
		Dog_Dir=-1;
		DogCt=0;
	}
	break;
	}
	if (ReverseFlag==1&&Dog_Dir==-1)
	{
	// Dog To Left With Leg UP
	// RowZero
	x[r][c]='.';
	x[r][c-6]='.';
	x[r][c-7]='"';
	x[r][c-9]='.';
	x[r][c-10]='"';
	x[r][c-11]='-';
	x[r][c-12]='o';
	// Row One
	x[r+1][c+1]='(';
	x[r+1][c]='(';
	x[r+1][c-5]='(';
	x[r+1][c-8]='|';
	x[r+1][c-10]='_';
	x[r+1][c-11]=',';
	// Row Two
	x[r+2][c]='\\';
	x[r+2][c-1]='\\';
	x[r+2][c-2]='~';
	x[r+2][c-3]='-';
	x[r+2][c-4]='-';
	x[r+2][c-6]='"';
	x[r+2][c-7]='`';
	x[r+2][c-8]='-';
	x[r+2][c-9]='"';
	x[r+2][c-11]='(';
	x[r+2][c-12]='_';
	x[r+2][c-13]='_';
	// Row Three
	x[r+3][c]='(';
	x[r+3][c-9]='`';
	x[r+3][c-10]='-';
	x[r+3][c-11]='-';
	x[r+3][c-12]='.';
	x[r+3][c-13]='"';
	// Row Four
	x[r+4][c]='//';
	x[r+4][c-1]=')';
	x[r+4][c-4]='.';
	x[r+4][c-5]='_';
	x[r+4][c-6]='_';
	x[r+4][c-7]=',';
	x[r+4][c-8]='`';
	x[r+4][c-9]='-';
	x[r+4][c-10]='-';
	x[r+4][c-11]='~';
	x[r+4][c-12]='"';
	// Row Five
	x[r+5][c+1]='(';
	x[r+5][c]='(';
	x[r+5][c-3]='(';
	// Row Six
	x[r+6][c-1]='`';
	x[r+6][c-2]='"';
	x[r+6][c-3]='"';
	x[r+6][c-4]='"';
	c--;
	DogCt++;
	ReverseFlag=0;
	if (DogCt==15)
	{
		Dog_Dir=1;
		DogCt=0;
	}
	break;
	}
	if (ReverseFlag==0&&Dog_Dir==-1)
	{
	// Dog To Left With legs Down
	// Row Zero
	x[r][c]=',';
	x[r][c-6]=',';
	x[r][c-7]='"';
	x[r][c-9]='e';
	x[r][c-10]='`';
	x[r][c-11]='-';
	x[r][c-12]='o';
	// Row One
	x[r+1][c+1]='(';
	x[r+1][c]='(';
	x[r+1][c-5]='(';
	x[r+1][c-8]='|';
	x[r+1][c-10]='_';
	x[r+1][c-11]=',';
	// Row Two
	x[r+2][c]='\\';
	x[r+2][c-1]='\\';
	x[r+2][c-2]='~';
	x[r+2][c-3]='-';
	x[r+2][c-4]='-';
	x[r+2][c-6]='"';
	x[r+2][c-7]='`';
	x[r+2][c-8]='-';
	x[r+2][c-9]='"';
	x[r+2][c-10]='//';
	// Row Three
	x[r][c]='(';
	x[r][c-9]='//';
	// Row Four
	x[r+4][c]='//';
	x[r+4][c-1]=')';
	x[r+4][c-4]='.';
	x[r+4][c-5]='_';
	x[r+4][c-6]='_';
	x[r+4][c-7]='_';
	x[r+4][c-8]='.';
	x[r+4][c-9]=')';
	// Row Five
	x[r+5][c+1]='(';
	x[r+5][c]='(';
	x[r+5][c-3]='(';
	x[r+5][c-7]='(';
	x[r+5][c-8]='(';
	x[r+5][c-10]='(';
	// Row Six
	x[r+6][c]='`';
	x[r+6][c-1]='`';
	x[r+6][c-2]='-';
	x[r+6][c-3]='"';
	x[r+6][c-7]='`';
	x[r+6][c-8]='`';
	x[r+6][c-9]='-';
	x[r+6][c-10]='"';
	c--;
	ReverseFlag=1;
	DogCt++;
	if (DogCt==15)
	{
		Dog_Dir=1;
		DogCt=0;
	}
	break;
	}
















	}













}
// Scroll
void Scroll (int &C_Hero, int &q,int &Jump_Dir)
{
	for ( ; ; )
	{
			if (C_Hero>40&&C_Hero<280)
			{
				if (Jump_Dir==0)
				{
				if (C_Hero>40||C_Hero>80||C_Hero>160||C_Hero>240||C_Hero>320)
				{
					q+=1;
					break;
				}
				}
				if (Jump_Dir==1)
				{
				if (C_Hero<40||C_Hero<80||C_Hero<160||C_Hero<240||C_Hero<320)
				{
					q-=1;
					break;
				}
				}
				
			}
			break;
	}
}

// Drawing
void Draw_Into_Mat(char x[][2560],int &PrisonFlag,int &SeaFlag,char Numbers[][100])
{	
	    // Space Loop
		for (int r=0; r<50;r++)
		{
			for (int c=0; c<2560;c++)
			{
				x[r][c] = ' ';
			}
		}
		for (int r=0; r<50;r++)
		{
			for (int c=0; c<100;c++)
			{
				Numbers[r][c] = ' ';
			}
		}
		// Ground Loops
		for (int r=47; r<50;r++)
		{
			for (int c=0; c<2560;c++)
			{
				if (c<1050||c>1100)
				x[r][c] = 254;
			}
		}

		// Second Floor Loops

		for (int i=0;i<85;i++)
		{
		x[37][i]=205;
		x[38][i]=205;
		}
		// Wall
		for (int y=18;y<47;y++)
		{
			x[y][120]=186;
		}
		
		x[18][120]=187;
		// Third Floor

		for (int i=19;i<120;i++)
		{
		x[18][i]=205;
		}
		// Prison For Dope
		for (int i=20;i<37;i++)
		{
			x[i][950]=186;
		}
		x[37][950]=200;
		for (int i=951;i<1000;i++)
		{
			x[37][i]=205;
		}
		x[19][950]=201;
		for (int i=951;i<970;i++)
		{
			x[19][i]=205;
		}

		if (PrisonFlag==1)
		{
		for (int i=20;i<37;i++)
		{
			x[i][970]=186;
		}
		}

		x[37][970]=202;
		x[19][970]=187;
		// Sea
		for ( ; ; )
		{
		if (SeaFlag==0)
		{
		for (int r=47; r<50;r++)
		{
			if (r%2==0)
			{
			for (int c=1050; c<1100;c+=2)
			{
				x[r][c] = '~';
			}
			}
			if (r%2!=0)
			{
			for (int c=1051;c<1100;c+=2)
			{
				x[r][c]='~';
			}
			}
		}
		SeaFlag=1;
		break;
		}
		if (SeaFlag==1)
		{
			for (int r=47; r<50;r++)
		{
			if (r%2==0)
			{
			for (int c=1051; c<1100;c+=2)
			{
				x[r][c] = '~';
			}
			}
			if (r%2!=0)
			{
			for (int c=1050;c<1100;c+=2)
			{
				x[r][c]='~';
			}
			}
		}
			SeaFlag=0;
			break;
		}

		}
		
		// Room

		for (int y=18;y<32;y++)
		{
			x[y][1208]=186;
		}
		
		x[17][1208]=201;
		for (int i=1209;i<1290;i++)
		{
		x[17][i]=205;
		}
		x[17][1290]=187;

		for (int y=18;y<38;y++)
		{
			x[y][1290]=186;
		}
		
}

// Key
void Draw_Key (char x[][2560],int r,int c)
{
	// Row Zero
	x[r][c]='_';
	x[r][c+1]='_';
	// Row One
	x[r+1][c-1]='//';
	x[r+1][c+1]='o';
	x[r+1][c+2]='\\';
	// Row Two
	x[r+2][c-1]='\\';
	x[r+2][c]='_';
	x[r+2][c+2]='//';
	// Row 3,4,5
	x[r+3][c]='<';
	x[r+3][c+1]='|';
	x[r+4][c]='<';
	x[r+4][c+1]='|';
	x[r+5][c]='<';
	x[r+5][c+1]='|';




}

// Elevators
void Draw_Elevator (char x[][2560],int r,int c)
{
	// Row Zero
	x[r][c]='.';
	x[r][c+1]='-';
	x[r][c+2]='-';
	x[r][c+3]='-';
	x[r][c+4]='.';
	// Row One
	x[r+1][c-1]='/';
	x[r+1][c]='_';
	x[r+1][c+1]='_';
	x[r+1][c+2]='\\';
	x[r+1][c+3]='_';
	x[r+1][c+4]='_';
	x[r+1][c+5]='\\';
	// Row Two
	x[r+2][c-7]='.';
	for (int i=r+2;i<r+10;i++)
	{
		x[i][c+2]='|';
	}
	for (int i=-6;i<=10;i++)
	{
		x[r+2][c+i]='-';
	}
	x[r+2][c+11]='.';
	// Row 3,4,5,6,7,8,9
	int k=3;
	for (int i=3 ;i<10 ;i++ )
	{
		if (i<6)
		{
		x[r+i][c+11]='|';
		x[r+i][c+10]='|';
		}
		x[r+k][c-7]='|';
		x[r+k][c-6]='|';
		k++;
	}
	// Row Ten
	x[r+10][c+11]='.';
	x[r+10][c-7]='.';
	for (int i=c-6;i<c+11;i++)
	{
		x[r+10][i]='-';
	}

}
void Move_Elevator (char x[][2560],int &Re ,int &DirElv,int &rH,int ElevatorFlag)
{
	
	if (DirElv==1)
	{
		Re++;
		if (Re+11>47)
		{
			DirElv=-1;
		}
	}
	if (DirElv==-1)
	{
		Re--;
		if (Re+11<30)
		{
			DirElv=1;
			if (ElevatorFlag==1)
			{
			rH-=2;
			}
		}
	}
}
void Move_Elevator2 (char x[][2560],int &Re ,int &DirElv,int &rH,int ElevatorFlag2)
{
	
	if (DirElv==1)
	{
		Re++;
		if (Re+11>38)
		{
			DirElv=-1;

		}
	}
	if (DirElv==-1)
	{
		Re--;
		if (Re+11<18)
		{
			DirElv=1;
			if (ElevatorFlag2==1)
			{
			rH-=2;
			}
		}
	}
}
void Move_GElevator (char x[][2560],int &Re ,int &DirElv,int &rH,int ElevatorFlag2)
{
	
	if (DirElv==1)
	{
		Re++;
		if (Re+11>48)
		{
			DirElv=-1;

		}
	}
	if (DirElv==-1)
	{
		Re--;
		if (Re+11<18)
		{
			DirElv=1;
			if (ElevatorFlag2==1)
			{
			rH-=2;
			}
		}
	}
}

void Move_Hero_With_Elevator (char x[][2560],int &rE,int DirElv)
{
	if (DirElv==-1)
	{
	rE--;
	}
	if (DirElv==1)
	{
		rE++;
	}
	
}
void Move_Hero_With_Elevator2 (char x[][2560],int &rE,int DirElv2)
{
	if (DirElv2==-1)
	{
	rE--;
	}
	if (DirElv2==1)
	{
		rE++;
	}
	
}
void Move_Hero_With_ElevatorG (char x[][2560],int &rE,int DirElv)
{
	if (DirElv==-1)
	{
	rE--;
	}
	if (DirElv==1)
	{
		rE++;
	}
	
}
void Draw_Elevator3 (char x[][2560],int r,int c)
{
	// Row Zero
	x[r][c]='.';
	x[r][c+1]='-';
	x[r][c+2]='-';
	x[r][c+3]='-';
	x[r][c+4]='.';
	// Row One
	x[r+1][c-1]='/';
	x[r+1][c]='_';
	x[r+1][c+1]='_';
	x[r+1][c+2]='\\';
	x[r+1][c+3]='_';
	x[r+1][c+4]='_';
	x[r+1][c+5]='\\';
	// Row Two
	x[r+2][c-7]='.';
	for (int i=r+2;i<r+10;i++)
	{
		x[i][c+2]='|';
	}
	for (int i=-6;i<=10;i++)
	{
		x[r+2][c+i]='-';
	}
	x[r+2][c+11]='.';
	// Row 3,4,5,6,7,8,9
	int k=3;
	for (int i=3 ;i<10 ;i++ )
	{
		
		x[r+i][c+11]='|';
		x[r+i][c+10]='|';
		if (i<6)
		{
		x[r+k][c-7]='|';
		x[r+k][c-6]='|';
		}
		k++;
	}
	// Row Ten
	x[r+10][c+11]='.';
	x[r+10][c-7]='.';
	for (int i=c-6;i<c+11;i++)
	{
		x[r+10][i]='-';
	}

}
void Move_Elevator3 (char x[][2560],int &Re ,int &DirElv,int &rH,int ElevatorFlag)
{
	
	if (DirElv==1)
	{
		Re++;
		if (Re+11>47)
		{
			DirElv=-1;
		}
	}
	if (DirElv==-1)
	{
		Re--;
		if (Re+11<30)
		{
			DirElv=1;
			if (ElevatorFlag==1)
			{
			rH-=2;
			}
		}
	}
}
void Move_Hero_With_Elevator3 (char x[][2560],int &rE,int DirElv2)
{
	if (DirElv2==-1)
	{
	rE--;
	}
	if (DirElv2==1)
	{
		rE++;
	}
	
}
void Draw_GElevator (char x[][2560],int r,int c)
{
	
	for (int i=c-6;i<c+11;i++)
	{
		x[r+10][i]='-';
	}

}



// Drawing Hero
void Draw_Hero__Into_Mat(char x[][2560] , int rH, int &cH,int &walkflag,int &JFlag,int &RunFlag,int &RSF,int &RunFlagLeft,int &RST,int &Jump_Dir,int &Hero_Sut,int &Hero_Dir,int &ShootingFlag,int &BigHeroSwitch,int &HWSF,int &NMF,int &NJF,int &NFF)
{

	// small hero
if (Hero_Sut==0&&ShootingFlag==0)
	{
		// Standing
	if (JFlag==0&&RunFlag==0&&RunFlagLeft==0)
	{
	int ct=0;
	x[rH][cH]		= 2;
	x[rH+1][cH]		= '|';
	x[rH+1][cH+1]		= '\\';
	x[rH+1][cH-1]		= '//';
	x[rH+2][cH]		= '|';
	x[rH+3][cH+1]='\\';
	x[rH+3][cH+2]='_';
	x[rH+3][cH-1]	= '/';
	x[rH+3][cH-2]	= '_';

	}
	// Jump To Right
	if (JFlag==1&&Jump_Dir==0)
	{
		x[rH][cH]=2;
		x[rH][cH-1]='\\';
		x[rH][cH+1]='_';
		x[rH+1][cH-1]='//';
		x[rH+2][cH-1]='\\';
		x[rH+2][cH-2]='//';
		x[rH+2][cH-3]='_';
		x[rH+3][cH-3]='`';
		x[rH+3][cH-1]='//';
		x[rH+4][cH-1]='`';
	}
	// Jump To Left
	if (JFlag==1&&Jump_Dir==1)
	{
		x[rH][cH]=2;
		x[rH][cH+1]='//';
		x[rH][cH-1]='_';
		x[rH+1][cH+1]='\\';
		x[rH+2][cH+1]='//';
		x[rH+2][cH+2]='\\';
		x[rH+2][cH+3]='_';
		x[rH+3][cH+3]='`';
		x[rH+3][cH+1]='\\';
		x[rH+4][cH+1]='`';
	}
	// Walk To Right
	for (;RunFlag==1;)
	{
	if (RunFlag==1&&RSF==0)
	{
		x[rH][cH]=2;
		x[rH][cH-1]='_';
		x[rH][cH-2]='_';
		// Row One
		x[rH+1][cH]='\\';
		x[rH+1][cH-1]='//';
		x[rH+1][cH-3]='//';
		x[rH+1][cH+1]='_';
		x[rH+1][cH+2]=',';
		// Row Two
		x[rH+2][cH-1]='\\';
		x[rH+2][cH-2]='//';
		x[rH+2][cH-3]='_';
		x[rH+2][cH-4]='_';
		x[rH+2][cH-5]='_';
		// Row Three 
		x[rH+3][cH-1]='//';
		x[rH+3][cH]='_';
		RSF=1;
		break;
	}
	if (RunFlag==1&&RSF==1)
	{
		x[rH][cH]=2;
		x[rH+1][cH-1]='//';
		x[rH+2][cH-1]='\\';
		x[rH+2][cH-2]='//';
		x[rH+2][cH-3]='_';
		x[rH+2][cH-4]='_';
		// Row Three 
		x[rH+3][cH-1]='//';
		RSF=0;
		RunFlag=0;
		break;

	}
	}
	// Walk To Left
	for ( ;RunFlagLeft==1; )
	{
		if (RunFlagLeft==1&&RST==0)
		{
		x[rH][cH]=2;
		x[rH][cH+1]='_';
		x[rH][cH+2]='_';
		// Row One
		x[rH+1][cH]='\\';
		x[rH+1][cH-1]='//';
		x[rH+1][cH+3]='//';
		x[rH+1][cH-2]='_';
		x[rH+1][cH-3]=',';
		// Row Two
		x[rH+2][cH+1]='\\';
		x[rH+2][cH]='//';
		x[rH+2][cH+2]='_';
		x[rH+2][cH+3]='_';
		x[rH+2][cH+4]='_';
		// Row Three 
		x[rH+3][cH]='\\';
		x[rH+3][cH-1]='_';
		RST=1;
		break;
		}
		if (RunFlagLeft==1&&RST==1)
		{
		x[rH][cH]=2;
		x[rH+1][cH]='\\';
		x[rH+2][cH]='//';
		x[rH+2][cH+1]='\\';
		x[rH+2][cH+3]='_';
		x[rH+2][cH+2]='_';
		// Row Three 
		x[rH+3][cH]='\\';
		x[rH+3][cH-1]='_';
	
		RST=0;
		RunFlagLeft=0;
		break;
		}


	}
	}
	// Sword Hero
	if (Hero_Sut==2&&ShootingFlag==0)
	{
		// Standing To Right
		if (JFlag==0&&RunFlag==0&&RunFlagLeft==0&&Hero_Dir==0&&HWSF==0)
		{
			x[rH-2][cH]=2;
			x[rH-1][cH]='|';
			x[rH][cH]='|';
			x[rH][cH+1]='\\';
			x[rH][cH+2]='_';
			x[rH][cH+2]='|';
			x[rH][cH+3]='}';
			x[rH][cH-1]='//';
			x[rH][cH-2]='_';
			x[rH][cH-3]='M';
			x[rH-1][cH-4]='\\';
			x[rH-1][cH-5]='_';
			x[rH-2][cH-5]='\\';
			x[rH-3][cH-6]='\\';
			x[rH-1][cH-3]='|';
			x[rH+1][cH+2]='}';
			x[rH-1][cH+2]='}';
			x[rH+1][cH]='|';
			x[rH+2][cH+1]='\\';
			x[rH+2][cH-1]='//';
			x[rH+3][cH-2]='//';
			x[rH+3][cH+2]='\\';
			x[rH+3][cH+3]='_';
			x[rH+3][cH-3]='_';
		}
	if (JFlag==1&&Jump_Dir==0)
	{
		x[rH-2][cH]=2;
			x[rH-1][cH]='|';
			x[rH][cH]='|';
			x[rH][cH+1]='\\';
			x[rH][cH+2]='_';
			x[rH][cH+2]='|';
			x[rH][cH+3]='}';
			x[rH][cH-1]='//';
			x[rH][cH-2]='_';
			x[rH][cH-3]='M';
			x[rH-1][cH-4]='\\';
			x[rH-1][cH-5]='_';
			x[rH-2][cH-5]='\\';
			x[rH-3][cH-6]='\\';
			x[rH-1][cH-3]='|';
			x[rH+1][cH+2]='}';
			x[rH-1][cH+2]='}';
			x[rH+1][cH]='|';
			x[rH+2][cH]='|';
			x[rH+3][cH]='|';
		
	}
	if (JFlag==1&&Jump_Dir==1)
	{
		x[rH-2][cH]=2;
			x[rH-1][cH]='|';
			x[rH][cH]='|';
			x[rH][cH-1]='//';
			x[rH][cH-2]='_';
			x[rH][cH-2]='|';
			x[rH][cH-3]='{';
			x[rH][cH+1]='\\';
			x[rH][cH+2]='_';
			x[rH][cH+3]='M';
			x[rH-1][cH+4]='//';
			x[rH-1][cH+5]='_';
			x[rH-2][cH+5]='//';
			x[rH-3][cH+6]='//';
			x[rH-1][cH+3]='|';
			x[rH+1][cH-2]='{';
			x[rH-1][cH-2]='{';
			x[rH+1][cH]='|';
			x[rH+2][cH]='|';
			x[rH+3][cH]='|';



	}
		// Standing To Left
	if (JFlag==0&&RunFlag==0&&RunFlagLeft==0&&Hero_Dir==1&&HWSF==0)
	{			x[rH-2][cH]=2;
			x[rH-1][cH]='|';
			x[rH][cH]='|';
			x[rH][cH-1]='//';
			x[rH][cH-2]='_';
			x[rH][cH-2]='|';
			x[rH][cH-3]='{';
			x[rH][cH+1]='\\';
			x[rH][cH+2]='_';
			x[rH][cH+3]='M';
			x[rH-1][cH+4]='//';
			x[rH-1][cH+5]='_';
			x[rH-2][cH+5]='//';
			x[rH-3][cH+6]='//';
			x[rH-1][cH+3]='|';
			x[rH+1][cH-2]='{';
			x[rH-1][cH-2]='{';
			x[rH+1][cH]='|';
			// Legs
			x[rH+2][cH+1]='\\';
			x[rH+2][cH-1]='//';
			x[rH+3][cH-2]='//';
			x[rH+3][cH+2]='\\';
			x[rH+3][cH+3]='_';
			x[rH+3][cH-3]='_';
	}
	if (HWSF==1)
	{

		x[rH-2][cH]=2;
			x[rH-1][cH]='|';
			x[rH][cH]='|';
			x[rH][cH-1]='//';
			x[rH][cH-2]='_';
			x[rH][cH-2]='|';
			x[rH][cH-3]='{';
			x[rH][cH+1]='\\';
			x[rH][cH+3]='M';
			x[rH][cH+4]='-';
			x[rH][cH+5]='-';
			x[rH][cH+6]='-';
			x[rH][cH+7]='-';
			x[rH][cH+8]='-';
			x[rH][cH+9]='-';
			x[rH+1][cH-2]='{';
			x[rH-1][cH-2]='{';
			x[rH+1][cH]='|';
			// Legs
			x[rH+2][cH+1]='\\';
			x[rH+2][cH-1]='//';
			x[rH+3][cH-2]='//';
			x[rH+3][cH+2]='\\';
			x[rH+3][cH+3]='_';
			x[rH+3][cH-3]='_';
















		HWSF=0;
	}
	//walk To Right
	for (;RunFlag==1;)
	{
	if (RunFlag==1&&RSF==0)
	{
		x[rH-2][cH]=2;
			x[rH-1][cH]='|';
			x[rH][cH]='|';
			x[rH][cH+1]='\\';
			x[rH][cH+2]='_';
			x[rH][cH+2]='|';
			x[rH][cH+3]='}';
			x[rH][cH-1]='//';
			x[rH][cH-2]='_';
			x[rH][cH-3]='M';
			x[rH-1][cH-4]='\\';
			x[rH-1][cH-5]='_';
			x[rH-2][cH-5]='\\';
			x[rH-3][cH-6]='\\';
			x[rH-1][cH-3]='|';
			x[rH+1][cH+2]='}';
			x[rH-1][cH+2]='}';
			x[rH+1][cH]='|';
			// legs
			x[rH+2][cH+1]='\\';
			x[rH+2][cH-1]='//';
			x[rH+3][cH-2]='//';
			x[rH+3][cH+2]='\\';
			x[rH+3][cH+3]='_';
			x[rH+3][cH-3]='_';
		RSF=1;
		break;
	}
	if (RunFlag==1&&RSF==1)
	{
		x[rH-2][cH]=2;
			x[rH-1][cH]='|';
			x[rH][cH]='|';
			x[rH][cH+1]='\\';
			x[rH][cH+2]='_';
			x[rH][cH+2]='|';
			x[rH][cH+3]='}';
			x[rH][cH-1]='//';
			x[rH][cH-2]='_';
			x[rH][cH-3]='M';
			x[rH-1][cH-4]='\\';
			x[rH-1][cH-5]='_';
			x[rH-2][cH-5]='\\';
			x[rH-3][cH-6]='\\';
			x[rH-1][cH-3]='|';
			x[rH+1][cH+2]='}';
			x[rH-1][cH+2]='}';
			x[rH+1][cH]='|';
			x[rH+2][cH]='|';
			x[rH+3][cH]='|';
		RSF=0;
		RunFlag=0;
		break;

	}
	}
	// walk To left
	for ( ;RunFlagLeft==1&&Hero_Dir==1; )
	{
		if (RunFlagLeft==1&&RST==0&&Hero_Dir==1)
		{


			x[rH-2][cH]=2;
			x[rH-1][cH]='|';
			x[rH][cH]='|';
			x[rH][cH-1]='//';
			x[rH][cH-2]='_';
			x[rH][cH-2]='|';
			x[rH][cH-3]='{';
			x[rH][cH+1]='\\';
			x[rH][cH+2]='_';
			x[rH][cH+3]='M';
			x[rH-1][cH+4]='//';
			x[rH-1][cH+5]='_';
			x[rH-2][cH+5]='//';
			x[rH-3][cH+6]='//';
			x[rH-1][cH+3]='|';
			x[rH+1][cH-2]='{';
			x[rH-1][cH-2]='{';
			x[rH+1][cH]='|';
			// Legs
			x[rH+2][cH+1]='\\';
			x[rH+2][cH-1]='//';
			x[rH+3][cH-2]='//';
			x[rH+3][cH+2]='\\';
			x[rH+3][cH+3]='_';
			x[rH+3][cH-3]='_';
		
		RST=1;
		break;
		}
		if (RunFlagLeft==1&&RST==1&&Hero_Dir==1)
		{
			x[rH-2][cH]=2;
			x[rH-1][cH]='|';
			x[rH][cH]='|';
			x[rH][cH-1]='//';
			x[rH][cH-2]='_';
			x[rH][cH-2]='|';
			x[rH][cH-3]='{';
			x[rH][cH+1]='\\';
			x[rH][cH+2]='_';
			x[rH][cH+3]='M';
			x[rH-1][cH+4]='//';
			x[rH-1][cH+5]='_';
			x[rH-2][cH+5]='//';
			x[rH-3][cH+6]='//';
			x[rH-1][cH+3]='|';
			x[rH+1][cH-2]='{';
			x[rH-1][cH-2]='{';
			x[rH+1][cH]='|';
			x[rH+2][cH]='|';
			x[rH+3][cH]='|';
		
	
		RST=0;
		RunFlagLeft=0;
		break;
		}


	}

}    
    // Big Hero
  if (Hero_Sut==1)
	{
	rH-=4;
	// Stand To Right
	if (JFlag==0&&RunFlag==0&&RunFlagLeft==0&&Hero_Dir==0)
	{
	// Row Zero
	x[rH][cH]='(';
	x[rH][cH+1]='_';
	x[rH][cH+2]=')';
	// Row One
	x[rH+1][cH+1]=';';
	x[rH+1][cH]='_';
	x[rH+1][cH+2]='_';
	// Row Two
	x[rH+2][cH+1]='|';
	x[rH+2][cH-1]='//';
	x[rH+2][cH+3]='\\';
	//Row Three
	x[rH+3][cH+1]='|';
	x[rH+3][cH-1]='\\';
	x[rH+3][cH+4]='\\';
	// Row Four
	x[rH+4][cH]='`';
	x[rH+4][cH+5]='`';
	x[rH+4][cH+1]='|';
	x[rH+4][cH+2]='\\';
	// Row Five
	x[rH+5][cH+1]='|';
	x[rH+5][cH+3]='\\';
	// Row Six
	x[rH+6][cH+3]='//';
	x[rH+6][cH]='//';
	// Row Seven
	x[rH+7][cH+2]='//';
	x[rH+7][cH-1]='//';
	}
	// Stand To Left
	if (JFlag==0&&RunFlag==0&&RunFlagLeft==0&&Hero_Dir==1)
	{
	// Row Zero
	x[rH][cH]='(';
	x[rH][cH+1]='_';
	x[rH][cH+2]=')';
	// Row One
	x[rH+1][cH+1]=';';
	x[rH+1][cH]='_';
	x[rH+1][cH+2]='_';
	// Row Two
	x[rH+2][cH+1]='|';
	x[rH+2][cH-1]='//';
	x[rH+2][cH+3]='\\';
	//Row Three
	x[rH+3][cH+1]='|';
	x[rH+3][cH+3]='//';
	x[rH+3][cH-2]='//';
	
	// Row Four
	x[rH+4][cH+1]='|';
	x[rH+4][cH]='/';
	x[rH+4][cH+2]='`';
	x[rH+4][cH-3]='`';
	// Row Five
	x[rH+5][cH+1]='|';
	x[rH+5][cH-1]='//';
	// Row Six
	x[rH+6][cH-1]='\\';
	x[rH+6][cH+2]='\\';
	// Row Seven
	x[rH+7][cH]='\\';
	x[rH+7][cH+3]='\\';
	}

	// Jumping
	if (JFlag==1&&Jump_Dir==0)
	{// Row Zero
	x[rH][cH]='(';
	x[rH][cH+1]='_';
	x[rH][cH+2]=')';
	// Row One
	x[rH+1][cH+1]=';';
	// Row Two
	x[rH+2][cH+1]='|';

	//Row Three
	x[rH+3][cH+1]='|';

	// Row Four
	x[rH+4][cH+1]='|';
	// Row Five
	x[rH+5][cH+1]='|';
	x[rH+6][cH+1]='|';
	// Hands
	x[rH+2][cH-1]='//';
	x[rH+2][cH+3]='\\';
		x[rH+4][cH]='`';
	x[rH+4][cH+5]='`';

	x[rH+3][cH-1]='\\';
	x[rH+3][cH+4]='\\';

	}
	// Jumping To left
	if (JFlag==1&&Jump_Dir==1)
	{// Row Zero
	x[rH][cH]='(';
	x[rH][cH+1]='_';
	x[rH][cH+2]=')';
	// Row One
	x[rH+1][cH+1]=';';
	x[rH+1][cH]='_';
	x[rH+1][cH+2]='_';
	// Row Two
	x[rH+2][cH+1]='|';

	//Row Three
	x[rH+3][cH+1]='|';
	
	// Row Four
	x[rH+4][cH+1]='|';
	// Row Five
	x[rH+5][cH+1]='|';
	// Row Six
	x[rH+6][cH+1]='|';
	// Row Seven
	x[rH+3][cH+3]='//';
	x[rH+3][cH-2]='//';
	x[rH+2][cH-1]='//';
	x[rH+2][cH+3]='\\';
	x[rH+4][cH+2]='`';
	x[rH+4][cH-3]='`';


	}
	// Left Moving Loop
	for ( ;RunFlagLeft==1&&Hero_Dir==1; )
	{
		if (BigHeroSwitch==0)
		{
		// Row Zero
	x[rH][cH]='(';
	x[rH][cH+1]='_';
	x[rH][cH+2]=')';
	// Row One
	x[rH+1][cH+1]=';';
	x[rH+1][cH]='_';
	x[rH+1][cH+2]='_';
	// Row Two
	x[rH+2][cH+1]='|';
	x[rH+2][cH-1]='//';
	x[rH+2][cH+3]='\\';
	//Row Three
	x[rH+3][cH+1]='|';
	x[rH+3][cH+3]='//';
	x[rH+3][cH-2]='//';
	
	// Row Four
	x[rH+4][cH+1]='|';
	x[rH+4][cH]='/';
	x[rH+4][cH+2]='`';
	x[rH+4][cH-3]='`';
	// Row Five
	x[rH+5][cH+1]='|';
	x[rH+5][cH-1]='//';
	// Row Six
	x[rH+6][cH-1]='\\';
	x[rH+6][cH+2]='\\';
	// Row Seven
	x[rH+7][cH]='\\';
	x[rH+7][cH+3]='\\';

			BigHeroSwitch=1;
			break;
		}
	if (BigHeroSwitch==1)
	{
	// Row Zero
	x[rH][cH]='(';
	x[rH][cH+1]='_';
	x[rH][cH+2]=')';
	// Row One
	x[rH+1][cH+1]=';';
	x[rH+1][cH]='_';
	x[rH+1][cH+2]='_';
	// Row Two
	x[rH+2][cH+1]='|';

	//Row Three
	x[rH+3][cH+1]='|';
	
	// Row Four
	x[rH+4][cH+1]='|';
	// Row Five
	x[rH+5][cH+1]='|';
	// Row Six
	x[rH+6][cH+1]='|';
	// Row Seven
	x[rH+7][cH+1]='|';
	BigHeroSwitch=0;
	RunFlagLeft=0;
	break;
		}
	}
	// Right Moving Loop
	for ( ;RunFlag==1; )
	{
	if (BigHeroSwitch==0)
	{
	// Row Zero
	x[rH][cH]='(';
	x[rH][cH+1]='_';
	x[rH][cH+2]=')';
	// Row One
	x[rH+1][cH+1]=';';
	x[rH+1][cH]='_';
	x[rH+1][cH+2]='_';
	// Row Two
	x[rH+2][cH+1]='|';
	x[rH+2][cH-1]='//';
	x[rH+2][cH+3]='\\';
	//Row Three
	x[rH+3][cH+1]='|';
	x[rH+3][cH-1]='\\';
	x[rH+3][cH+4]='\\';
	// Row Four
	x[rH+4][cH]='`';
	x[rH+4][cH+5]='`';
	x[rH+4][cH+1]='|';
	x[rH+4][cH+2]='\\';
	// Row Five
	x[rH+5][cH+1]='|';
	x[rH+5][cH+3]='\\';
	// Row Six
	x[rH+6][cH+3]='//';
	x[rH+6][cH]='//';
	// Row Seven
	x[rH+7][cH+2]='//';
	x[rH+7][cH-1]='//';
	BigHeroSwitch=1;
	break;
	}
	if (BigHeroSwitch==1)
	{
	// Row Zero
	x[rH][cH]='(';
	x[rH][cH+1]='_';
	x[rH][cH+2]=')';
	// Row One
	x[rH+1][cH+1]=';';
	// Row Two
	x[rH+2][cH+1]='|';

	//Row Three
	x[rH+3][cH+1]='|';

	// Row Four
	x[rH+4][cH+1]='|';
	// Row Five
	x[rH+5][cH+1]='|';
	x[rH+6][cH+1]='|';
	x[rH+7][cH+1]='|';
	// Row Six
	// Row Seven
	BigHeroSwitch=0;
	RunFlag=0;
	break;
	}
	}
	}

	// Ninja Hero
	if (Hero_Sut==3)
	{
		// Standing 
		if (RunFlag==0&&RunFlagLeft==0&&NMF==0&&NJF==0&&NFF==0)
		{
		x[rH][cH]=2;
		x[rH+1][cH]='|';
		x[rH+1][cH+1]='>';
		x[rH+1][cH-1]='<';
		x[rH+2][cH]='|';
		x[rH+3][cH+1]=')';
		x[rH+3][cH-1]='(';
		}
	// Walk To Right
	for (;RunFlag==1;)
	{
	if (RunFlag==1&&RSF==0)
	{
		x[rH][cH]=2;
		x[rH+1][cH]='|';
		x[rH+1][cH+1]='>';
		x[rH+1][cH-1]='<';
		x[rH+2][cH]='|';
		x[rH+3][cH]='|';
		RSF=1;
		break;
	}
	if (RunFlag==1&&RSF==1)
	{
	x[rH][cH]=2;
		x[rH+1][cH]='|';
		x[rH+1][cH+1]='>';
		x[rH+1][cH-1]='<';
		x[rH+2][cH]='|';
		x[rH+3][cH+1]=')';
		x[rH+3][cH-1]='(';
		RSF=0;
		RunFlag=0;
		break;

	}
	}
	// Walk To Left
	for ( ;RunFlagLeft==1; )
	{
		if (RunFlagLeft==1&&RST==0)
		{
					x[rH][cH]=2;
		x[rH+1][cH]='|';
		x[rH+1][cH+1]='>';
		x[rH+1][cH-1]='<';
		x[rH+2][cH]='|';
		x[rH+3][cH]='|';
		RST=1;
		break;
		}
		if (RunFlagLeft==1&&RST==1)
		{
		x[rH][cH]=2;
		x[rH+1][cH]='|';
		x[rH+1][cH+1]='>';
		x[rH+1][cH-1]='<';
		x[rH+2][cH]='|';
		x[rH+3][cH+1]=')';
		x[rH+3][cH-1]='(';
	
		RST=0;
		RunFlagLeft=0;
		break;
		}


	}
	// Kicking
	if (NMF==1&&Hero_Dir==0)
	{
		x[rH][cH]=2;
		x[rH][cH+3]='//';
		x[rH][cH+4]='`';
		x[rH+1][cH]='//';
		x[rH+1][cH+1]='\\';
		x[rH+1][cH+2]='//';
		x[rH+2][cH+1]='<';
		NMF=0;
	}
	if (NMF==1&&Hero_Dir==1)
	{
		x[rH][cH]=2;
		x[rH][cH-3]='\\';
		x[rH][cH-4]='`';
		x[rH+1][cH]='\\';
		x[rH+1][cH-1]='//';
		x[rH+1][cH-2]='\\';
		x[rH+2][cH-1]='>';
		NMF=0;
	}
	// Boxing
	if (NMF==2&&Hero_Dir==0)
	{
		x[rH][cH]=2;
		x[rH][cH+1]='_';
		x[rH][cH+2]='_';
        x[rH+1][cH]='|';
		x[rH+1][cH-1]='<';
		x[rH+2][cH+1]='}';
		x[rH+2][cH-1]='//';
		x[rH+3][cH-2]='//';
		NMF=0;

	}
	if (NMF==2&&Hero_Dir==1)
	{
		x[rH][cH]=2;
		x[rH][cH-1]='_';
		x[rH][cH-2]='_';
        x[rH+1][cH]='|';
		x[rH+1][cH+1]='>';
		x[rH+2][cH-1]='{';
		x[rH+2][cH+1]='\\';
		x[rH+3][cH+2]='\\';
		NMF=0;
	}
	// Fire
	if (NFF==1)
	{
		x[rH][cH]=2;

		x[rH+1][cH]='M';
		x[rH+1][cH+1]='=';
		x[rH+1][cH+2]='-';
		x[rH+1][cH+3]='-';
		x[rH+1][cH+4]='~';
		x[rH+1][cH-1]='=';
		x[rH+1][cH-2]='-';
		x[rH+1][cH-3]='-';
		x[rH+1][cH-4]='~';
		x[rH+1][cH-5]='~';

		x[rH+2][cH]='"';
		x[rH+2][cH+1]='\\';
		x[rH+2][cH-1]='//';
		x[rH+2][cH-2]='_';
		x[rH+2][cH-3]='_';


		x[rH+3][cH-3]='"';
		x[rH+3][cH+1]='|';
		x[rH+3][cH+2]='_';
		NFF=0;
	}

	// Flapping

	// Jumpping
	if (NJF>0)
	{
		for ( ; ; )
		{
		if (NJF==1)
		{
			x[rH+1][cH]=2;
			x[rH+1][cH-1]='\\';
			x[rH+2][cH]='|';
			x[rH+3][cH]='|';

			NJF=2;
			break;
		}
		if (NJF==2)
		{
			x[rH+1][cH]=2;
			x[rH+1][cH-1]='_';
			x[rH+1][cH-2]='_';
			x[rH+2][cH]='|';
			x[rH+3][cH]='|';

			NJF=3;
			break;
		}
		if (NJF==3)
		{
			x[rH+1][cH]=2;
			x[rH+2][cH]='|';
			x[rH+2][cH-1]='//';
			x[rH+3][cH-1]='<';
			x[rH+3][cH-2]='<';

			NJF=4;
			break;
		}
		if (NJF==4)
		{
			x[rH+1][cH]=2;
			x[rH+2][cH]='|';
			x[rH+2][cH+1]='\\';
			x[rH+3][cH-1]='<';
			x[rH+3][cH-2]='<';

			NJF=5;
			break;
		}

		if (NJF==5)
		{
			x[rH+1][cH]=2;
			x[rH+1][cH-1]='\\';
			x[rH+2][cH]='|';
			x[rH+3][cH-1]='<';
			x[rH+3][cH-2]='<';

			NJF=6;
			break;
		}


		if (NJF==6)
		{
			x[rH][cH]='|';
			x[rH][cH+1]=2;
			x[rH+1][cH]='//';
			x[rH+2][cH-1]='|';
			NJF=7;
			break;
		}

		if (NJF==7)
		{
			x[rH-10][cH+6]='|';
			x[rH-9][cH+7]=2;
			x[rH-9][cH+7]='/';
			x[rH-9][cH+6]='|';
			x[rH-9][cH+5]='//';

			NJF=8;
			break;
		}

		if (NJF==8)
		{
			x[rH-10][cH+8]='>';
			x[rH-10][cH+9]='>';
			x[rH-9][cH+9]='\\';
			x[rH-9][cH+10]='|';
			x[rH-9][cH+11]=2;
			NJF=9;
			break;
		}

		if (NJF==9)
		{
			x[rH-10][cH+14]='//';
			x[rH-10][cH+15]='\\';
			x[rH-10][cH+16]='//';
			x[rH-9][cH+14]='\\';
			x[rH-9][cH+13]=2;

			NJF=10;
			break;
		}

		if (NJF==10)
		{
			x[rH-10][cH+18]=2;
			x[rH-10][cH+19]='_';
			x[rH-10][cH+20]='_';
			x[rH-9][cH+18]='|';
			x[rH-9][cH+21]='\\';


			NJF=11;
			break;
		}

		if (NJF==11)
		{
			x[rH+1][cH+18]=2;
			x[rH+1][cH+17]='_';
			x[rH+2][cH+19]='\\';
			x[rH+3][cH+20]='<';
			x[rH+3][cH+18]='<';

			NJF=12;
			break;
		}

		if (NJF==12)
		{
			x[rH+1][cH+18]=2;
			x[rH+1][cH+19]='/';
			x[rH+2][cH+18]='|';
			x[rH+3][cH+19]='\\';
			x[rH+3][cH+17]='<';
			cH+=20;
			NJF=0;
			break;
		}





	}
	}

	}

	// Shooting Hero
	if (ShootingFlag==1&&Hero_Dir==0&&Hero_Sut!=1)
	{
		x[rH][cH]=2;
		x[rH+1][cH]='Y';
		x[rH+1][cH-1]='(';
		x[rH+1][cH+1]='o';
		x[rH+1][cH+2]='=';
		x[rH+1][cH+3]='=';
		x[rH+1][cH+4]='-';
		x[rH+1][cH+5]='-';
		x[rH+2][cH]='_';
		x[rH+2][cH-1]='//';
		x[rH+2][cH+1]='\\';
		x[rH+3][cH-1]='//';
		x[rH+3][cH+1]='>';
		ShootingFlag=0;
	}
	if (ShootingFlag==1&&Hero_Dir==1&&Hero_Sut!=1)
	{
		x[rH][cH]=2;
		x[rH+1][cH]='Y';
		x[rH+1][cH+1]=')';
		x[rH+1][cH-1]='o';
		x[rH+1][cH-2]='=';
		x[rH+1][cH-3]='=';
		x[rH+1][cH-4]='-';
		x[rH+1][cH-5]='-';
		x[rH+2][cH]='_';
		x[rH+2][cH+1]='\\';
		x[rH+2][cH-1]='//';
		x[rH+3][cH-1]='//';
		x[rH+3][cH-1]='<';
		ShootingFlag=0;
	}
}
	
// Gravity
void Gravity (char x[][2560],int &rH,int &cH)
{
	if (x[rH+4][cH+1]==' '&&x[rH+4][cH-1]==' ')
	{
		rH++;
	}
}
void Draw_Enmy__Into_Mat(char x[][2560] , int rE, int cE)
{
	x[rE][cE]		= 1;
	x[rE][cE-1]		= 186;
	x[rE][cE+1]		= 186;
	x[rE][cE-2]		= '=';
	x[rE][cE+2]		= '=';
}

void Move_Enmy(int &rE, int &cE, int &Dir_Enmy)
{
	if (Dir_Enmy == 1)
	{
		cE++;
		if (cE>78)
		{
			Dir_Enmy=-1;
		}
	}
	
	if (Dir_Enmy == -1)
	{
		cE--;
		if (cE<=0)
		{
			Dir_Enmy =  1;
		}
	}
}

void Move_Hero(int & R_Hero, int & C_Hero , char a,int &Hero_Dir)
{
	if ( a == 'w' || a == 'W')
	{
		R_Hero--;
	}

	if ( a == 's' && Hero_Dir==0 || a == 'S'&& Hero_Dir==0)
	{
		C_Hero+=5;
	}
	if ( a == 's' && Hero_Dir==1 || a == 'S'&& Hero_Dir==1)
	{
		C_Hero-=5;
	}

	if ( a == 'a' || a == 'A')
	{
		C_Hero--;
	}
	if ( a == 'd' || a == 'D')
	{
		C_Hero++;
	}
}

// Ninja Enemy
void Draw_NinjaEnemy (char x[][2560],int r,int c,int &NEF1)
{

	for ( ; ; )
	{
		if (NEF1==0)
		{
			x[r][c]='@';
			x[r+1][c]='/';
			x[r+1][c+1]='\\';
			x[r+1][c-1]='_';
			x[r+1][c-2]='_';
			x[r+1][c-3]='.';
			x[r+1][c-4]='_';
			x[r+1][c-5]='_';
			x[r+1][c-6]='_';
			x[r+2][c]='//';
			x[r+2][c+2]='\\';
			x[r+3][c]='\\';
			x[r+3][c+3]='\\';
			NEF1=1;
			break;
		}
		if (NEF1==1)
		{
			x[r][c]='@';
			x[r+1][c]='//';
			x[r+1][c+1]='\\';
			x[r+1][c-1]='_';
			x[r+1][c-2]='_';
			x[r+1][c-3]='\\';
			x[r][c-4]='\\';
			x[r-1][c-5]='\\';
			x[r+2][c-2]='\\';
			x[r+2][c]='//';
			x[r+2][c+2]='\\';
			x[r+3][c]='\\';
			x[r+3][c+3]='\\';
			NEF1=0;
			break;
		}
	}




}
void Move_NinjaEnemy (int &c, int &ct,int &Enemy_Dir)
{
	if (Enemy_Dir==0)
	{
		c++;
		ct++;
		if (ct==10)
		{
			Enemy_Dir=1;
			ct=0;
		}
	}
	if (Enemy_Dir==1)
	{
		c--;
		ct++;
		if (ct==10)
		{
			Enemy_Dir=0;
			ct=0;
		}
	}
}
void Draw_BigNinjaEnemy (char x[][2560],int rH,int cH,int &NEF2)
{
	for ( ; ; )
	{
	if (NEF2==0)
	{
	x[rH][cH]='(';
	x[rH][cH+1]='_';
	x[rH][cH+2]=')';
	// Row One
	x[rH+1][cH+1]=';';
	x[rH+1][cH]='_';
	x[rH+1][cH+2]='_';
	// Row Two
	x[rH+2][cH+1]='|';
	x[rH+2][cH-1]='//';
	x[rH+2][cH+3]='\\';
	//Row Three
	x[rH+3][cH+1]='|';
	x[rH+3][cH+3]='//';
	x[rH+3][cH-2]='//';
	
	// Row Four
	x[rH+4][cH+1]='|';
	x[rH+4][cH]='/';
	x[rH+4][cH+2]='`';
	x[rH+4][cH-3]='`';
	// Row Five
	x[rH+5][cH+1]='|';
	x[rH+5][cH-1]='//';
	// Row Six
	x[rH+6][cH-1]='\\';
	x[rH+6][cH+2]='\\';
	// Row Seven
	x[rH+7][cH]='\\';
	x[rH+7][cH+3]='\\';
	NEF2=1;
	break;
	}

	if (NEF2==1)
	{
		// Row Zero
	x[rH][cH]='(';
	x[rH][cH+1]='_';
	x[rH][cH+2]=')';
	// Row One
	x[rH+1][cH+1]=';';
	x[rH+1][cH]='_';
	x[rH+1][cH+2]='_';
	// Row Two
	x[rH+2][cH+1]='|';

	//Row Three
	x[rH+3][cH+1]='|';
	
	// Row Four
	x[rH+4][cH+1]='|';
	// Row Five
	x[rH+5][cH+1]='|';
	// Row Six
	x[rH+6][cH+1]='|';
	// Row Seven
	x[rH+7][cH+1]='|';
	}
	NEF2=0;
	break;
	}
}
void Move_BigNinjaEnemy (int &c,int &ct,int &Enemy_Dir)
{
	if (Enemy_Dir==0)
	{
		c++;
		ct++;
		if (ct==6)
		{
			Enemy_Dir=1;
			ct=0;
		}
	}
	if (Enemy_Dir==1)
	{
		c--;
		ct++;
		if (ct==6)
		{
			Enemy_Dir=0;
			ct=0;
		}
	}



}

// Dope
void Draw_Dope(char x[][2560],int r,int c)
{
	// Row Zero
	x[r][c]='_';
	x[r][c+1]='_';
	x[r][c+2]='_';
    x[r][c+3]='_';
	x[r][c+4]='_';
	// Row One
	x[r+1][c-1]='//';
	x[r+1][c+5]='\\';
	// Row Two
	x[r+2][c-3]='//';
	x[r+2][c-2]='-';
	x[r+2][c]='(';
	x[r+2][c+1]='*';
	x[r+2][c+2]=')';
	x[r+2][c+4]='|';
	x[r+2][c+5]='*';
	x[r+2][c+6]=')';
	x[r+2][c+7]='\\';
	// Row Three
	x[r+3][c-3]='|';
	x[r+3][c-2]='//';
	x[r+3][c-1]='\\';
	x[r+3][c]='.';
	x[r+3][c+3]='_';
	x[r+3][c+4]='>';
	x[r+3][c+5]='//';
	x[r+3][c+6]='\\';
	x[r+3][c+7]='|';
	// Row Four
	x[r+4][c+1]='\\';
	x[r+4][c+2]='_';
	x[r+4][c+3]='_';
	x[r+4][c+4]='//';
	x[r+4][c+9]='|';
	x[r+4][c+10]='\\';
	// Row Five
	x[r+5][c]='_';
	x[r+5][c+1]='|';
	x[r+5][c+3]='|';
	x[r+5][c+4]='_';
	x[r+5][c+8]='\\';
	x[r+5][c+9]='-';
	x[r+5][c+10]='//';
	// Row Six
	x[r+6][c-1]='//';
	x[r+6][c]='|';
	x[r+6][c+1]='\\';
	x[r+6][c+2]='_';
	x[r+6][c+3]='_';
	x[r+6][c+4]='|';
	x[r+6][c+5]='\\';
	x[r+6][c+9]='//';
	x[r+6][c+10]='//';
	// Row Seven
	x[r+7][c-2]='|';
	x[r+7][c-1]='//';
	x[r+7][c]='|';
	x[r+7][c+4]='|';
	x[r+7][c+5]='\\';
	x[r+7][c+6]='\\';
	x[r+7][c+7]='//';
	x[r+7][c+8]='//';
	// Row Eight
	x[r+8][c-2]='|';
	x[r+8][c-1]='|';
	x[r+8][c]='|';
	x[r+8][c+4]='|';
	x[r+8][c+6]='~';
	x[r+8][c+7]='"';
	// Row Nine
	x[r+9][c-2]='|';
	x[r+9][c-1]='|';
	x[r+9][c]='|';
	x[r+9][c+2]='_';
	x[r+9][c+3]='_';
	x[r+9][c+4]='|';
	// Row Ten
	x[r+10][c-2]='//';
	x[r+10][c-1]='_';
	x[r+10][c]='\\';
	x[r+10][c+1]='|';
	x[r+10][c+3]='|';
	x[r+10][c+4]='|';
	// Row Eleven
	x[r+11][c-2]='\\';
	x[r+11][c-1]='_';
	x[r+11][c]='//';
	x[r+11][c+1]='|';
	x[r+11][c+3]='|';
	x[r+11][c+4]='|';
	// Row Twelve
	x[r+12][c]='|';
	x[r+12][c+1]='|';
	x[r+12][c+3]='|';
	x[r+12][c+4]='|';
	// Row Thirteen
	x[r+13][c]='|';
	x[r+13][c+1]='|';
	x[r+13][c+3]='|';
	x[r+13][c+4]='|';
	// Row Fourteen
	x[r+14][c]='|';
	x[r+14][c+1]='|';
		x[r+14][c+3]='|';
	x[r+14][c+4]='|';
	// Row Fifteen
	x[r+15][c]='//';
	x[r+15][c+1]='\\';
		x[r+15][c+3]='\\';
	x[r+15][c+4]='\\';
	// Row Sixteen
	x[r+16][c-1]='^^';
	x[r+16][c]='^^';
	x[r+16][c+1]='^^';
	x[r+16][c+2]='^^';
	x[r+16][c+4]='^^';
	x[r+16][c+5]='^^';
	x[r+16][c+6]='^^';





}



// Egg And Ants
void Draw_Egg(char x[][2560],int &r, int &c,int &EggCt)
{
	if (EggCt<12)
	{
	x[r][c]='O';
	r+=2;
	EggCt+=2;
	}
}

void Draw_Ant (char x[][2560],int &r, int &c)
{
	x[r][c]='_';
	x[r][c+1]='.';
	x[r][c+2]='.';
	x[r][c+3]='.';
	x[r][c+4]='_';
	x[r-1][c+8]='//';
	x[r-1][c+10]='//';
	x[r-1][c+11]='\\';
	x[r-1][c+9]='\\';
	x[r][c+7]='//';
	x[r][c+9]='//';
	x[r+1][c-1]='(';
	x[r+1][c]='_';
	x[r+1][c+1]='.';
	x[r+1][c+2]='.';
	x[r+1][c+3]='.';
	x[r+1][c+4]='_';
	x[r+1][c+5]=')';
	x[r+1][c+6]='(';
	x[r+1][c+8]='"';
	x[r+1][c+9]=')';
	x[r+2][c]='//';
	x[r+2][c+1]='//';
	x[r+2][c+3]='\\';
	x[r+2][c+4]='\\';





}

void Move_Ant (int &c)
{
	c++;
}
// Parachute
void Draw_Parachute (char x[][2560],int r,int c )
{
	// Row zero
	x[r][c]='_';
	x[r][c+1]='_';
	x[r][c+2]='.';
	x[r][c+3]='_';
	x[r][c+4]='_';
	// Row one
	x[r+1][c-3]='.';
	x[r+1][c-2]='m';
	x[r+1][c-1]='"';
	x[r+1][c]='M';
	x[r+1][c+1]='M';
	x[r+1][c+2]='M';
	x[r+1][c+3]='M';
	x[r+1][c+4]='M';
	x[r+1][c+5]='"';
	x[r+1][c+6]='m';
	x[r+1][c+7]='.';
	// Row two
	x[r+2][c-5]='.';
	x[r+2][c-4]='m';
	x[r+2][c-3]='M';
	x[r+2][c-2]='.';
	x[r+2][c-1]='M';
	x[r+2][c]='M';
	x[r+2][c+1]='M';
	x[r+2][c+2]='M';
	x[r+2][c+3]='M';
	x[r+2][c+4]='M';
	x[r+2][c+5]='M';
	x[r+2][c+6]='.';
	x[r+2][c+7]='M';
	x[r+2][c+8]='m';
	x[r+2][c+9]='.';
	// Row three
	x[r+3][c-5]='m';
	x[r+3][c-4]='M';
	x[r+3][c-3]='`';
	x[r+3][c-2]=' ';
	x[r+3][c-1]='`';
	x[r+3][c]='m';
	x[r+3][c+1]='`';
	x[r+3][c+2]=' ';
	x[r+3][c+3]='`';
	x[r+3][c+4]='m';
	x[r+3][c+5]='`';
	x[r+3][c+6]=' ';
	x[r+3][c+7]='`';
	x[r+3][c+8]='M';
	x[r+3][c+9]='m';
	// Row four
	x[r+4][c-4]='\\';
	x[r+4][c-3]=' ';
	x[r+4][c-2]=' ';
	x[r+4][c-1]=' ';
	x[r+4][c]='\\';
	x[r+4][c+1]=' ';
	x[r+4][c+2]=' ';
	x[r+4][c+3]=' ';
	x[r+4][c+4]='//';
	x[r+4][c+5]=' ';
	x[r+4][c+6]=' ';
	x[r+4][c+7]=' ';
	x[r+4][c+8]='//';
	// Row five
	x[r+5][c-3]='`';
	x[r+5][c-2]='\\';
	x[r+5][c-1]=' ';
	x[r+5][c]=' ';
	x[r+5][c+1]='\\';
	x[r+5][c+2]=' ';
	x[r+5][c+3]='//';
	x[r+5][c+4]=' ';
	x[r+5][c+5]=' ';
	x[r+5][c+6]='//';
	x[r+5][c+7]='"';
	// Row six
	x[r+6][c-1]='`';
	x[r+6][c]='\\';
	x[r+6][c+1]=' ';
	x[r+6][c+2]='Y';
	x[r+6][c+3]=' ';
	x[r+6][c+4]='//';
	x[r+6][c+5]='"';
	// Row seven
	x[r+7][c+1]='`';
	x[r+7][c+2]='|';
	x[r+7][c+3]='"';

}
void Draw_Hero_with_Parachute (char x[][2560],int r, int c )
{
	// Row zero
	x[r][c]='_';
	x[r][c+1]='_';
	x[r][c+2]='.';
	x[r][c+3]='_';
	x[r][c+4]='_';
	// Row one
	x[r+1][c-3]='.';
	x[r+1][c-2]='m';
	x[r+1][c-1]='"';
	x[r+1][c]='M';
	x[r+1][c+1]='M';
	x[r+1][c+2]='M';
	x[r+1][c+3]='M';
	x[r+1][c+4]='M';
	x[r+1][c+5]='"';
	x[r+1][c+6]='m';
	x[r+1][c+7]='.';
	// Row two
	x[r+2][c-5]='.';
	x[r+2][c-4]='m';
	x[r+2][c-3]='M';
	x[r+2][c-2]='.';
	x[r+2][c-1]='M';
	x[r+2][c]='M';
	x[r+2][c+1]='M';
	x[r+2][c+2]='M';
	x[r+2][c+3]='M';
	x[r+2][c+4]='M';
	x[r+2][c+5]='M';
	x[r+2][c+6]='.';
	x[r+2][c+7]='M';
	x[r+2][c+8]='m';
	x[r+2][c+9]='.';
	// Row three
	x[r+3][c-5]='m';
	x[r+3][c-4]='M';
	x[r+3][c-3]='`';
	x[r+3][c-2]=' ';
	x[r+3][c-1]='`';
	x[r+3][c]='m';
	x[r+3][c+1]='`';
	x[r+3][c+2]=' ';
	x[r+3][c+3]='`';
	x[r+3][c+4]='m';
	x[r+3][c+5]='`';
	x[r+3][c+6]=' ';
	x[r+3][c+7]='`';
	x[r+3][c+8]='M';
	x[r+3][c+9]='m';
	// Row four
	x[r+4][c-4]='\\';
	x[r+4][c-3]=' ';
	x[r+4][c-2]=' ';
	x[r+4][c-1]=' ';
	x[r+4][c]='\\';
	x[r+4][c+1]=' ';
	x[r+4][c+2]=' ';
	x[r+4][c+3]=' ';
	x[r+4][c+4]='//';
	x[r+4][c+5]=' ';
	x[r+4][c+6]=' ';
	x[r+4][c+7]=' ';
	x[r+4][c+8]='//';
	// Row five
	x[r+5][c-3]='`';
	x[r+5][c-2]='\\';
	x[r+5][c-1]=' ';
	x[r+5][c]=' ';
	x[r+5][c+1]='\\';
	x[r+5][c+2]=' ';
	x[r+5][c+3]='//';
	x[r+5][c+4]=' ';
	x[r+5][c+5]=' ';
	x[r+5][c+6]='//';
	x[r+5][c+7]='"';
	// Row six
	x[r+6][c-1]='`';
	x[r+6][c]='\\';
	x[r+6][c+1]=' ';
	x[r+6][c+2]='Y';
	x[r+6][c+3]=' ';
	x[r+6][c+4]='//';
	x[r+6][c+5]='"';
	// Row seven
	x[r+7][c+1]='`';
	x[r+7][c+2]='|';
	x[r+7][c+3]='"';
	// Row eight
	x[r+8][c+2]='(';
	x[r+8][c+3]=')';
	// Row nine
	x[r+9][c]='-';
	x[r+9][c+1]='-';
	x[r+9][c+2]='[';
	x[r+9][c+3]=']';
	x[r+9][c+4]='-';
	x[r+9][c+5]='-';
	// Row ten
	x[r+10][c+2]='\\';
	x[r+10][c+3]='\\';
	// Row eleven
	x[r+11][c+2]='//';
	x[r+11][c+3]='//';
	// Row tweleve 
	x[r+12][c+2]='`';
	x[r+12][c+3]='`';
	}
void Move_Hero_with_Parachute ( char x[][2560],int &C_Hp,int &Parachuteflag, int &R_Hp , int &R_Hero,int &C_Hero)
{
	for ( ; ; )
	{
		R_Hp++;
		C_Hp++;
		if ( R_Hp+12 == 47 )
		{
			Parachuteflag=0;
			R_Hero=R_Hp+8;
			C_Hero=C_Hp+3;
			break;
		}
		break;
	}
}

void main()
{
	char X[50][2560];
	int q=0;
	int RunFlagLeft=0;
	int RST=0;
	int Jump_Dir=0;
	int SeaFlag=0;

	// Elevator Variables
	int DirElv=1;
	int ElevatorFlag =0;
	int DirElv2=1;
	int ElevatorFlag2 =0;
	int Re=35; int Rc=92;
	int KA=-8;
	int ER2=27;
	int EC2=7;
	int ER3=25;
	int EC3=1005;
	int DirElv3=1;
	int ElevatorFlag3=0;

	// Dog Variables
	int Dog_Dir=1;
	int ForwardFlag=1;
	int ReverseFlag=0;
	int C_Dog=40;
	int R_Dog=40;
	int DogCt=0;
	int DogHealth=3;

	// Hero Variables
	int R_Hero = 43, C_Hero = 12;
	int Hero_Sut=0;
	int Hero_Dir=0;
	int R_Enmy = 20, C_Enmy = 15;
	int RunFlag=0;
	int RSF=0;
	int Dir_Enmy = 1;
	int K=0;
	int JFlag=0;
	int U=0;
	int ShootingFlag=0;
	int HWSF=0;
	int NinjaMoveFlag =0;
	int NinjaJumpFlag=0;
	int NinjaFireFlag=0;
	int Hero_Health=7;

	// BigHeroVariables
	int BigHeroFlag=0;
	int BigHeroSwitch=0;
	int BigHeroWalkFlag=0;
	int BigHero_Dir=0;

	// Oreo Variables
	int R_Oreo = 38;
	int	C_Oreo = 220;

	// Horse Variables
	int R_Horse = 39;
	int C_Horse = 400;
	int HorseFlag=0;
	int HorseCt=0;

	// Bullets Variables
	int BulletFlag=0;
	int R_B=R_Hero+2;
	int C_B=C_Hero+1;
	int rp=0;
	int cp=0;
	int NumOfBullets=0;
	int bulletspos[200][3];
	int jb=0;
	char a;
	int walkflag=0,walkct=0;
	int Bullet_Sut=0;

	// Rain Varaiables
	int R_rain = 6;
	int C_rain = 400;
	int rainflag=0;
	int rainzigzag=0;

	// Bats Variables
	int Dir_Bat = 1;
	int Bat_R = 20;
	int Bat_C = 20;
	int BatHealth = 1;
	int BSF=0;

	// Cookies Variables 
	int R_Cookies=37;
	int C_Cookies = 660;

	// Monkey Variables
	int R_M = 10;
	int C_M = 50;
	int Dir_Monkey=1;
	int MonkeyHealth=1;

	// Rabbit Values
	int R_Rabit = 40;
	int C_Rabit = 300;
	int RabbitHealth =2;

	// Carrot Varaibles
	int R_Car=41;
	int C_Car=250;
	int CarrotCt=0;
	int ctagian=0;

	// Egg Variables
	int R_Eg= Bat_R+6;
	int C_Eg=Bat_C+12;
	int EggCt=0;
	int EggCtAgain =0;

	// Ant Variables
	int AntPos[3][2]={34,24,34,16,34,8};
	int AntFlag=1;
	int BugsFlag=0;
	int QQ=0;
	int QQ2=0;

	// Parachute Varaibles
	int R_Para = 6;
	int C_Para = 117;
	int Parachuteflag=0;

	// Crocodile varaibles
	int R_croco=23;
	int C_croco=750;
	int CrocoSwitchFlag=0;
	int CrocodileHealth=2;

	// Plane variables
	int R_Plane=40;
	int C_Plane=240;
	int planeflag=0;
	int ctup=0;
	int ctright=0;
	int ctdown=0;

	// Bear Variables
	int R_Bear = 34;
	int C_Bear=190;
	int BearHealth =3;

	// Castle variables
	int R_castle=30;
	int C_castle=490;

	// Last Level Variables 
	int LastLevelFlag=0;

	// Treasure variables
	int R_T=27;
	int C_T=800;

	// Yin_Yang_Variables
	int R_Yin=38;
	int C_Yin=860;
	int YinFlag=1;

	// Ninja Eneimes
	int R_NE1=43;
	int C_NE1=880;
	// E1
	int NinjaEnemyFlag1=0;
	int NinjaEnemyCt=0 , NinjaEnemyDir=0;
	int NinjaEnemyHealth=1;
	// E2
	int NinjaEnemyFlag2=0;
	int R_NE2=39;
	int C_NE2=920;
	int NinjaBigEnemyCt = 0 , NinjaBigEnemy_Dir=0 , NinjaBigEnemyHealth = 2;

	// Dope Variables
	int R_Dope=20;
	int C_Dope=955;

	// Phesba Variables
	int R_Phesba = 41;
	int C_Phesba = 1570;
	int PhesbaSwitchFlag=0;
	int PhesbaFlag=0;
	int PhesbaCt=0;


	// Key Variables
	int R_Key=40;
	int C_Key=960;
	int KeyFlag=1;
	int PrisonFlag=1;

	// Beach Variables
	int R_Beach= 38;
	int C_Beach= 1106;

	// Boat Variables
	int R_Boat=42;
	int C_Boat=1050;
	int BoatFlag=0;
	int BoatSwitchFlag1=0;
	int BoatCt=0;

	// Door Variables
	int R_Door=30;
	int C_Door=1200;
	int DoorSwitchFlag=0;

	// Dragon Variables
	int R_Dragon=15;
	int C_Dragon=1370;
	int DragonSwitchFlag=-1;
	int DragonFireSwitchFlag=0;
	int DragonHealth=25;

	// TNT Variables
	int GetTNTFlag=0;
	int TNTSwitchFlag=0;
	int TNTThrowFlag=0;
	int TNT_Ct=0;
	int R_TNT;
	int C_TNT;

	// Display Variables
	int OutputFlag=0;

	// Princess Variables
	int R_Princess=38;
	int C_Princess=1505;
	int PrincessFlag=0;
	int PrincessCt=0;



	// Robot Variables
	int R_Robot=33;
	int C_Robot=1240;
	int RobotFlag=1;
	int RobotRifleFlag=1;
	int R_Rifle=44;
	int C_Rifle = 1240;

	// Clock Variables
	int R_Clock=30;
	int C_Clock=961;
	int ClockFlag=0;

	

	// Spell
	int SpellFlag=1;

	// Ground Elevator
	int R_GroundElv = 35 , DirElvGro = 1 , GroundElevatorFlag = 0;

	// Fire Variables
	int R_Fire;
	int C_Fire;
	int FireSwitchFlag=0;
	int FireFlag=0;
	int FireCt=0;

	// Mountain Variables
	int R_Mountain=38;
	int C_Mountain=1500;
	int MountainHealth=2;

	// Numbers ( Password )
	char Numbers [50][100];
	int Square1Flag=0;
	int Square2Flag=0;
	int Square3Flag=0;
	int VPuzzle=1;
	char **Pnumbers;
	Pnumbers=new char*[10];
	for (int Fa=0;Fa<10;Fa++)
	{
		Pnumbers[Fa]=new char[1];
		itoa(Fa,Pnumbers[Fa],10);
	}



	for(;;)
	{
		for (;		!kbhit()	;)
		{
			// BackGround
			Draw_Into_Mat(X,PrisonFlag,SeaFlag,Numbers);
			Draw_Clouds(X,0,7);
			Draw_Numbers(Numbers,Pnumbers,Square1Flag,Square2Flag,Square3Flag,25);
			Draw_rain (X,R_rain,C_rain,rainzigzag);

			// Dope
			Draw_Dope(X,R_Dope,C_Dope);

			// Door
			Draw_Door(X,R_Door,C_Door,DoorSwitchFlag);

			// Phesba
		
			if (PhesbaFlag!=1)
			{
			Draw_Phesba(X,R_Phesba,C_Phesba);
			}
			
			if (PhesbaFlag==1)
			{
			Draw_Hero_With_Phesba(X,R_Hero-2,C_Phesba,PhesbaSwitchFlag);
			Move_Hero_With_Phesba(C_Phesba,C_Hero,PhesbaCt,PhesbaFlag);
			q++;
			}


			// House
			Draw_House(X,38,1650);

			// Fire
			if (FireFlag==1)
			{
			Draw_Fire(X,R_Fire,C_Fire,FireSwitchFlag);
			Move_Fire(C_Fire,FireCt,FireFlag,MountainHealth,PrincessFlag);
			}

			// Mountain
			if (MountainHealth>0)
			{
				Draw_Mountain(X,R_Mountain,C_Mountain);
			}

			// Spell
			if (SpellFlag==1&&DragonHealth<0)
			{
			Draw_Spell(X,R_Dragon+19,C_Dragon+10);
			}

			// Dragon
			if (DragonHealth>0)
			{
			Draw_Dragon(X,R_Dragon,C_Dragon,DragonSwitchFlag,DragonFireSwitchFlag);
			}

			// Robot
			if (RobotFlag==1)
			{
				Draw_Robot(X,R_Robot,C_Robot);
			}
			if (RobotRifleFlag==1&&RobotFlag==0)
			{
				Draw_Robot_Rifle(X,R_Rifle,C_Rifle);
			}

			// Princess Variables
			if (PrincessFlag==1)
			{
				Draw_Princess(X,R_Princess,C_Princess);
				Move_Princess(R_Princess,PrincessCt);
			}


			// Password Puzzle
			if (VPuzzle==1)
			{
			Draw_Arrow(Numbers,12,25);
			}
			if (VPuzzle==2)
			{
			Draw_Arrow(Numbers,12,48);
			}
			if (VPuzzle==3)
			{
			Draw_Arrow(Numbers,12,73);
			}

			// Clock
			if (PrisonFlag==0&&ClockFlag==0)
			{

			Draw_Clock(X,R_Clock,C_Clock,Pnumbers);
			}

			// Monkey
			if (MonkeyHealth>0)
			{
			Draw_Monkey(X,R_M,C_M);
			Move_Monkey(X,C_M,Dir_Monkey);
			}
			// TNT
			if (GetTNTFlag==0)
			{
				GetTNT(X,41,1170);
			}
			if (TNTThrowFlag==1)
			{
				Draw_TNT(X,R_TNT,C_TNT,TNTSwitchFlag,TNT_Ct,RobotFlag,RobotRifleFlag);

			}

			// Boat
			if (BoatFlag==0)
			{
			Draw_Boat(X,R_Boat,C_Boat);
			}
			if (BoatFlag==1)
			{
				Draw_Hero_With_Boat(X,R_Boat+3,C_Boat,BoatSwitchFlag1);
				Move_Hero_With_Boat(R_Hero,C_Hero,C_Boat,BoatFlag,BoatCt);
				q++;

			}

			Draw_Beach(X,R_Beach,C_Beach);


			// Last level
			Draw_castle(X,R_castle,C_castle);
			Draw_Background(X);
			Draw_Treasure(X,R_T,C_T);
			if (CrocodileHealth>0)
			{
			Draw_Crocodile(X,R_croco,C_croco,CrocoSwitchFlag);
			}


			// Bear
			if (BearHealth>0)
			{
			Draw_Bear(X,R_Bear,C_Bear);
			}

			// Hero With Sowrd
			if (Hero_Sut!=2)
			{
			Draw_Cookies(X,R_Cookies,C_Cookies);
			}

			// Rabbit
			if (RabbitHealth>0)
			{
			Draw_Rabits(X,R_Rabit,C_Rabit);
			}

			// Yin And Yang
			if (YinFlag==1)
			{
			Draw_Yin(X,R_Yin,C_Yin);
			}

			// Carrot
			if (ctagian==0)
			{
			Draw_carrot(X,R_Car,C_Car);
			}
			Move_carrot(R_Car,C_Car,CarrotCt,ctagian);

			// Elevator
			Draw_Elevator (X,Re,Rc);
			Draw_Elevator (X,ER2,EC2);
			Draw_Elevator3(X,ER3,EC3);

			Draw_GElevator(X,R_GroundElv,1330);
			Move_GElevator(X,R_GroundElv,DirElvGro,R_Hero,GroundElevatorFlag);

			Move_Elevator3(X,ER3,DirElv3,R_Hero,ElevatorFlag3);
			Move_Elevator(X,Re,DirElv,R_Hero,ElevatorFlag);
			Move_Elevator2(X,ER2,DirElv2,R_Hero,ElevatorFlag2);



			// Parachute
			if ( Parachuteflag == 0 )
			{
				Draw_Parachute ( X,R_Para,C_Para );
			}
			if ( R_Hero==R_Para+8&&C_Hero==C_Para+2 || R_Hero+1==R_Para&&C_Hero==C_Para )
			{
				Parachuteflag=1;
			}
			if ( Parachuteflag==1 )
			{
				Draw_Hero_with_Parachute ( X,R_Hero,C_Hero );
				Move_Hero_with_Parachute ( X,C_Hero,Parachuteflag,R_Hero,R_Hero,C_Hero );
				if (C_Hero>40&&C_Hero<1200)
			{
				if (C_Hero>40&&a=='d'||C_Hero>80&&a=='d'||C_Hero>160&&a=='d'||C_Hero>240&&a=='d'||C_Hero>320&&a=='d')
				{
					q+=1;
				}
				if (C_Hero<40&&a=='a'||C_Hero<80&&a=='a'||C_Hero<160&&a=='a'||C_Hero<240&&a=='a'||C_Hero<320&&a=='a')
				{
					q-=1;
				}
			}
			}

			// Oreo
			if (Hero_Sut!=1)
			{
			Draw_Oreo(X,R_Oreo,C_Oreo);
			}

			// Hero With Horse 
			if (HorseFlag==1)
			{
			Draw_Hero_With_Horse(X,R_Horse,C_Horse);
			Move_Hero_With_Horse(X,C_Horse,C_Hero,HorseFlag,HorseCt,R_Hero);
			if (C_Hero>40&&C_Hero<1200)
			{
				if (C_Hero>40&&a=='d'||C_Hero>80&&a=='d'||C_Hero>160&&a=='d'||C_Hero>240&&a=='d'||C_Hero>320&&a=='d')
				{
					q+=1;
				}
				if (C_Hero<40&&a=='a'||C_Hero<80&&a=='a'||C_Hero<160&&a=='a'||C_Hero<240&&a=='a'||C_Hero<320&&a=='a')
				{
					q-=1;
				}
			}
			}

			// Horse
			if (HorseFlag==0)
			{
			Draw_Horse(X,R_Horse,C_Horse);
			}
			if (NinjaEnemyHealth>0)
			{
			// NinjaEnimes
			Draw_NinjaEnemy(X,R_NE1,C_NE1,NinjaEnemyFlag1);
			Move_NinjaEnemy(C_NE1,NinjaEnemyCt,NinjaEnemyDir);
			}
			if (NinjaBigEnemyHealth>0)
			{
			Draw_BigNinjaEnemy(X,R_NE2,C_NE2,NinjaEnemyFlag2);
			Move_BigNinjaEnemy(C_NE2,NinjaBigEnemyCt,NinjaBigEnemy_Dir);
			}

			// Key
			if (KeyFlag==1)
			{
			Draw_Key(X,R_Key,C_Key);
			}


			// Bat 
			if (BatHealth>0)
			{
			Draw_Bats(X,Bat_R,Bat_C,BSF);
			Move_Bat(Bat_R,Bat_C,Dir_Bat);
			}

			// Bugs For Bat ( Ants )
			R_Eg=Bat_R+6;
			if (BugsFlag==1)
			{
			if (BatHealth>0&&EggCt<12)
			{
				Draw_Egg(X,R_Eg,C_Eg,EggCt);
				EggCtAgain++;
			}
			else
			{
				
				AntFlag=1;
				EggCtAgain++;
				if (EggCtAgain==40)
				{
					EggCtAgain=0;
					R_Eg=24;
					EggCt=0;
				}
				
			}
			if (AntFlag==1)
			{
				for (QQ=QQ2;QQ<3;QQ++)
				{
				Draw_Ant(X,AntPos[QQ][0],AntPos[QQ][1]);
				Move_Ant(AntPos[QQ][1]);
				}
			}
			}

			// Rain Moving
				Move_rain ( X , rainflag , R_Hero , C_Hero , R_rain ,C_rain,rainzigzag );

			// Hero Drawing
			if (BigHeroFlag==0&&HorseFlag==0&&Parachuteflag==0&&planeflag==0&&BoatFlag==0&&PhesbaFlag==0)
			{
			Draw_Hero__Into_Mat(X , R_Hero, C_Hero,walkflag,JFlag,RunFlag,RSF,RunFlagLeft,RST,Jump_Dir,Hero_Sut,Hero_Dir,ShootingFlag,BigHeroSwitch,HWSF,NinjaMoveFlag,NinjaJumpFlag,NinjaFireFlag);

			}

			// Ninja Big Jump
			if (NinjaJumpFlag>0)
			{
			if (C_Hero>40&&C_Hero<1200)
			{
				if (C_Hero>40&&a=='g'||C_Hero>80&&a=='d'||C_Hero>160&&a=='d'||C_Hero>240&&a=='d'||C_Hero>320&&a=='d')
				{
					q+=1;
				}
				if (C_Hero<40&&a=='a'||C_Hero<80&&a=='a'||C_Hero<160&&a=='a'||C_Hero<240&&a=='a'||C_Hero<320&&a=='a')
				{
					q-=1;
				}
			}
			}

			// Hero Jumping
			if (JFlag==1)
			{
				jump (R_Hero,C_Hero,JFlag,U,Jump_Dir);
				Scroll (C_Hero,q,Jump_Dir);
			
				U++;
				if (U==8)
				{
				JFlag=0;
				U=0;
				}
			}

			// Plane
			Draw_Plane(X,R_Plane,C_Plane);
			if (C_Hero==C_Plane-4)
			{
				planeflag=1;
			}
			if (planeflag==1)
			{
				Move_Plane(X,R_Plane,C_Plane,ctup,ctright,ctdown,planeflag,R_Hero,C_Hero);
			if (C_Hero>40&&C_Hero<1200&&ctup>16&&ctdown<=1)
			{
				if (C_Hero>40&&a=='d'||C_Hero>80&&a=='d'||C_Hero>160&&a=='d'||C_Hero>240&&a=='d'||C_Hero>320&&a=='d')
				{
					q+=1;
				}
				if (C_Hero<40&&a=='a'||C_Hero<80&&a=='a'||C_Hero<160&&a=='a'||C_Hero<240&&a=='a'||C_Hero<320&&a=='a')
				{
					q-=1;
				}
			}
			}
			
			// Hero Inside Elevator 
			if (ElevatorFlag==1)
			{
				Move_Hero_With_Elevator(X,R_Hero,DirElv);
			}
			if (ElevatorFlag2==1)
			{
				Move_Hero_With_Elevator2(X,R_Hero,DirElv2);
			}
			if (ElevatorFlag3==1)
			{
				Move_Hero_With_Elevator3(X,R_Hero,DirElv3);
			}

			if (GroundElevatorFlag==1)
			{
				Move_Hero_With_ElevatorG(X,R_Hero,DirElvGro);
			}
		
			// Dog 
			if (DogHealth>0)
			{
			Draw_Dog(X,R_Dog,C_Dog,ForwardFlag,ReverseFlag,Dog_Dir,DogCt);
			}

			// Bullets
			if (BulletFlag==1)
			{
				int QQ3=0;
				for (int os=jb;os<NumOfBullets;os++)
				{
				Move_Bullet(X,bulletspos[os][0],bulletspos[os][1],BulletFlag,R_Hero,C_Hero,jb,C_Dog,R_Dog,DogHealth,bulletspos[os][2],Bat_C,Bat_R,BatHealth,AntPos[QQ3][1],QQ2,AntFlag,C_Bear,BearHealth,RabbitHealth,MonkeyHealth,C_M,C_Dragon,DragonHealth);
				Draw_Bullet(X,bulletspos[os][0],bulletspos[os][1],bulletspos[os][2],Bullet_Sut);
				QQ3++;
				}
			
			}

			// Output
			Cout_From_Mat(X,q,OutputFlag,Numbers);

			// Elevator Check
			for (int Che=-7;Che<12;Che++)
			{
				if (R_Hero+3==Re+10&&C_Hero+1==Rc+Che)
				{
					ElevatorFlag=1;
					break;
				}
				else
				{
				ElevatorFlag=0;
				}
				
			}

			for (int Che=-7;Che<12;Che++)
			{
				if (R_Hero+3==ER2+10&&C_Hero+1==EC2+Che)
				{
					ElevatorFlag2=1;
					break;
				}
				else
				{
				ElevatorFlag2=0;
				}
				
			}

			for (int Che=-7;Che<12;Che++)
			{
				if (R_Hero+3==ER3+10&&C_Hero+1==EC3+Che)
				{
					ElevatorFlag3=1;
					break;
				}
				else
				{
				ElevatorFlag3=0;
				}
				
			}

			// Ground Elevator
			for (int Che=-7;Che<12;Che++)
			{
				if (R_Hero+3==R_GroundElv+10&&C_Hero+1==1330+Che)
				{
					GroundElevatorFlag=1;
					break;
				}
				else
				{
				GroundElevatorFlag=0;
				}
				
			}
			// Hero Damage
		if (C_Hero==C_NE1-3||C_Hero==C_NE1-4)
		{
			Hero_Health--;
		}

			if (Hero_Health<1)
			{
				C_Hero=820;
				q=800;
				Hero_Sut=0;
				Hero_Health=7;
			}


			
			// Horse Turn On
			if (C_Hero==C_Horse)
			{
				HorseFlag=1;
			}
			// Gravity
			if (JFlag==0&&ElevatorFlag==0&&ElevatorFlag2==0&&Parachuteflag==0&&GroundElevatorFlag==0&&ElevatorFlag3==0)
			{
				Gravity(X,R_Hero,C_Hero);
			}
				if (Square1Flag==9&&Square2Flag==3&&Square3Flag==6)
		{
			OutputFlag=0;
			DoorSwitchFlag=1;
		}




				
		


		}

		// Moving Hero
		a = getch();
		if (OutputFlag==0)
		{
		Move_Hero(R_Hero, C_Hero , a,Hero_Dir);
		}

		// Turn on Jump
		if (a=='j'||a=='J')
		{
			JFlag=1;
		}
		if (a=='d'||a=='a')
		{
			walkflag=1;
		}

		// Riding Boat
		if (C_Hero==C_Boat-2)
		{
			BoatFlag=1;
		}

		// GetTNT
		if (C_Hero==1170)
		{
			GetTNTFlag=1;
		}
		if (a=='t' || a=='T')
		{
			TNTThrowFlag=1;
		}

		// Fire Shooting (Bullets)
		if (a=='x')
		{
			ShootingFlag=1;
			if (Hero_Dir==0)
			{
			bulletspos[NumOfBullets][0]=R_Hero+1;
			bulletspos[NumOfBullets][1]=C_Hero+5;
			bulletspos[NumOfBullets][2]=Hero_Dir;
			}
			if (Hero_Dir==1)
			{
			bulletspos[NumOfBullets][0]=R_Hero+1;
			bulletspos[NumOfBullets][1]=C_Hero-5;
			bulletspos[NumOfBullets][2]=Hero_Dir;
			}
			NumOfBullets++;
			BulletFlag=1;
		}

		// Eating Oreo
		if (R_Hero==R_Oreo+5&&C_Hero==C_Oreo-4)
		{
			Hero_Sut=1;
		}

		//Phesba Check
		if (C_Hero==C_Phesba-9)
		{
			PhesbaFlag=1;
		}


		// Eating Cookies Box
		if (C_Hero==C_Cookies-4)
		{
			Hero_Sut=2;
		}

		// Walking To Right
		if (a=='d')
		{
			RunFlag=1;
		}

		// / Walking To Left
		if (a=='a')
		{
			RunFlagLeft=1;
		}

		// Jump To Right
		if (a=='d')
		{
			Jump_Dir=0;
		}

		// Jump To Left
		if (a=='a')
		{
			Jump_Dir=1;
		}

		if (a=='d'&&BigHeroFlag==1||a=='a'&&BigHeroFlag==1)
		{
			BigHeroWalkFlag=1;
		}

		// Hero Direction
		if (a=='d')
		{
			Hero_Dir=0;
		}

		if (a=='a')
		{
			Hero_Dir=1;
		}

		// Ants Turn on
		if (R_Hero<36&&C_Hero==78)
		{
			BugsFlag=1;
		}
		if (a==' ')
		{
			HWSF=1;
		}

		// Last Level
		if (C_Hero==C_castle+34)
		{
			LastLevelFlag=1;
		}
		if (LastLevelFlag==1)
		{
			q=600;
			C_Hero=640;
			LastLevelFlag=0;

		}
		if (C_Hero+9>C_croco+4&&a==' ')
		{
			CrocodileHealth--;
		}
		if (C_Hero==C_Clock+16&&R_Hero<37)
		{
			ClockFlag=1;
		}
		if (a=='c'&&ClockFlag==1)
		{
			Draw_Clock(X,R_Hero-9,C_Hero-10,Pnumbers);
			Cout_From_Mat(X,q,OutputFlag,Numbers);
		}


	    // Display Password
		for ( ; ; )
		{
		if (a=='p' || a=='P')
		{
			if (OutputFlag==0)
			{
				OutputFlag=1;
				break;
			}
			if (OutputFlag==1)
			{
				OutputFlag=0;
				break;
			}
		}
		break;
		}
		if (OutputFlag==1&&a=='s')
		{
			if (VPuzzle==1&&Square1Flag>=0&&Square1Flag<9)
			{
			Square1Flag++;
			}
			if (VPuzzle==2&&Square2Flag>=0&&Square2Flag<9)
			{
			Square2Flag++;
			}
			if (VPuzzle==3&&Square2Flag>=0&&Square2Flag<9)
			{
			Square3Flag++;
			}

		}
		if (OutputFlag==1&&a=='w')
		{
			if (Square1Flag<=9&&Square1Flag>0&&VPuzzle==1)
			{
			Square1Flag--;
			}
			if (Square2Flag<=9&&Square2Flag>0&&VPuzzle==2)
			{
			Square2Flag--;
			}
			if (Square3Flag<=9&&Square3Flag>0&&VPuzzle==3)
			{
			Square3Flag--;
			}
		}
		if (OutputFlag==1&&a=='d')
		{
			if (VPuzzle<3)
			{
			VPuzzle++;
			}
		}
			if (OutputFlag==1&&a=='a')
		{
			if (VPuzzle>0&&VPuzzle<=3)
			{
			VPuzzle--;
			}
		}

		// Ninja
		if (C_Hero==C_Yin)
		{
			Hero_Sut=3;
			YinFlag=0;
		}
		
		// NinjaKick
		if (a=='k')
		{
			NinjaMoveFlag=1;
		}

		// NinjaBox
		if (a=='b')
		{
			NinjaMoveFlag=2;
		}

		// Ninja SuperJump
		if (a=='g')
		{
			NinjaJumpFlag=1;
		}

		// Damage For Small Stickman
		if (C_Hero==C_NE1)
		{
			NinjaEnemyHealth--;
		}

		// Damage For Big Stickman
		if (C_Hero==C_NE2)
		{
			NinjaBigEnemyHealth--;
		}

		// Taking Key
		if (C_Hero==C_Key)
		{
			KeyFlag=0;
		}

		// Open Prison For Dope
		if (a=='q'&&KeyFlag==0)
		{
			PrisonFlag=0;
		}

		// TNT Throw
		if (a=='t' || a=='T')
		{
			TNTThrowFlag=1;
			R_TNT=R_Hero-5;
			C_TNT=C_Hero+5;
		}

		// Fire Check
		if (a=='f' || a=='F')
		{
			R_Fire=R_Hero-3;
			C_Fire=C_Hero+18;
			NinjaFireFlag=1;
			FireFlag=1;
		}

		

		// Rifle Check
		if (C_Hero==C_Rifle)
		{
			RobotRifleFlag=0;
			Bullet_Sut=1;
		}

		// Spell Check
		if (C_Hero==C_Dragon+10)
		{
			SpellFlag=0;
		}

	
		// Scroll	
		if (C_Hero>40&&C_Hero<2560)
		{
			
			
		if (C_Hero>40&&a=='d'||C_Hero>80&&a=='d'||C_Hero>1600&&a=='d'||C_Hero>240&&a=='d'||C_Hero>320&&a=='d')
		{
			q+=1;
		}
		if (a=='a'&&C_Hero>40&&C_Hero<1200)
		{
			q-=1;
		}
			}
		
	}
	}
	
	