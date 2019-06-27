/*Fill up one 4*4 2D-Array with the following set of data...

     1   2   3   4   5  			 10 will be placed at					20 will be placed at	
---|----------------------			 --------------------					--------------------
   |								   row			col						row				col
1  | 10  0   0   0   20					0            0						 0				 4
2  | 0   10  0   20  0                  1            1 						 1    			 3 
3  | 0   0   20  0   0                  2            2  =>logic is row==col  2				 2	=>logic is col=(4-row)
4  | 0   20  0   10  0                  3            3						 3				 1
5  | 20  0   0   0   10                 4            4						 4				 0
   |
-------------------------- 			 --------------------					--------------------

*/   
#include<stdio.h>
int a[5][5];
int main(void)
{
	int row,col;
	printf("\n\nFilling up the array...");
	for(row=0;row<5;row++)
	{
		for(col=0;col<5;col++)
		{
			if(row==col)
		/*	a[row][col]=a[row][col]+10;		 or*/ a[row][col]+=10;
			if(col==4-row)
		/*	a[row][col]=a[row][col]+20;		 or*/ a[row][col]+=20;
		}
	}
	printf("\n\nDisplay the array contants...\n\n");
	for(row=0;row<5;row++)
	{
		for(col=0;col<5;col++)
		{
			printf("%4d",a[row][col]);
		}
		printf("\n\n");
	}
	printf("\n\nEnd of the program...");
	return 0;
}                                     
