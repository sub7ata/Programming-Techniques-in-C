//Fill up one 4*4 2D-Array with the fllowing set of data...

/*         col
    |  0  1  2  3
  --|---------------------
r 0 | 1  2  3  4 =>  1+col
o 1 | 5  6  7  8 =>  5+col      =>(row*4+1)+col
w 2 | 9 10 11 12 =>  9+col
  3 |13 14 15 16 => 13+col

*/
#include<stdio.h>
int main(void)
{
	int a[5][5],row,col;
	printf("\n\nFilling up the array contents...");
	for(row=0;row<4;row++)
	{
		for(col=0;col<4;col++)
		{
			a[row][col]=(row*4+1)+col;
		}
	}
	printf("\n\nDisplay the array contents...\n\n");
	for(row=0;row<4;row++)
	{
		for(col=0;col<4;col++)
		{
			printf("%4d",a[row][col]);
		}
		printf("\n\n");
	}
	
	printf("\n\n\tEnd of the program...");
	return 0;
}
