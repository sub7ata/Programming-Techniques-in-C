/*Find up one 4*4 2D-Arraywith the following set of data...

		  col
	 |	0  1  2  3
  ---|------------
r  0 |  0  1  2  3 
o  1 |  1  1  2  2
w  2 |  2  2  2  3
   3 |  3  3  3  3
*/

#include<stdio.h>
int a[5][5];
int main(void)
{
	int row,col;
	printf("\n\nFilling up the array contents...");
	for(row=0;row<4;row++)
	{
		for(col=0;col<4;col++)
		{
			if(row>col)
			a[row][col]=row;
			else
			a[row][col]=col;
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
	printf("\n\nEnd of the program...");
	return 0;
}
