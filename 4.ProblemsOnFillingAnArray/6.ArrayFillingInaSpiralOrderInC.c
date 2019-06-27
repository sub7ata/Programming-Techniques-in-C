/*
rr=> incr/decr factor along the row				row=row+rr
cc=> incr/decr factor along the column			col=col+cc

   |  1   2   3   4			rr		cc			
---|---------------			----------			
  1|  1   2   3   4			0		1
  2|  12  13  14  5			1		0				tt=rr		tt=cc
  3|  11  16  15  6			0	   -1				rr=cc		cc=-rr
  4|  10  9   8   7		   -1		0				cc=-tt		rr=tt
---|---------------			----------
							0		1
							
							n=4
								if(r>n||c>n||c<1||a[r][c]!=0)

*/
								
#include<stdio.h>
int a[50][50];
int main(void)
{
	int num,row,col,i,rr,cc,tt,tr,tc;
	printf("\n\n\tPlease enter the dimension of the squre matrix...");
	scanf("%d",&num);
	row=1;
	col=1;
	rr=0;
	cc=1;
	for(i=1;i<=num*num;i++)
	{
		a[row][col]=i;
		tr=row+rr;
		tc=col+cc;
		if(tc>num||tr>num||tc<1||tr<1||a[tr][tc]!=0)
		{
			tt=cc;
			cc=-rr;
			rr=tt;
		}
		row=row+rr;
		col=col+cc;
	}
	printf("\n\n\t\tSo the content of the special matrix is...\n\n\n\t\t");
	for(row=1;row<=num;row++)
	{
		for(col=1;col<=num;col++)
		{
			printf("%4d",a[row][col]);
		}
		
		printf("\n\n\t\t");
	}
	
	printf("\n\n\t\tEnd of the program...");
	return 0;
}
