/*Fill up one 4*4 2D-Array with the following set of data...

    | 0  1   2   3				col number		Fill-up logic
----|----------------		    -----------------------------
r  0| 1  5   9  13					0				1+row	
o  1| 2  6  10  14					1				5+row	=>=>(col*4+1)+row
w  2| 3  7  11  15					2				9+row
   3| 4  8  12  16					3			   13+row
*/

#include<stdio.h>
int main(void)
{
	int a[5][5],row,col;
	printf("\n\nFillup the array contents...");
	for(row=0;row<4;row++)
	{
		for(col=0;col<4;col++)
		{
			a[row][col]=(col*4+1)+row;
		}
	}
	printf("\n\nDisplaying the array contents...\n\n");
	for(row=0;row<4;row++)
	{
		for(col=0;col<4;col++)
		{
			printf("%4d",a[row][col]);
		}
		printf("\n\n");
	}
	printf("\n\n\tEndof the program...");
	return 0;
}
