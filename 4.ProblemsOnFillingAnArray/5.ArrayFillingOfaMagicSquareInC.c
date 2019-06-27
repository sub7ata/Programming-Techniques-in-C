/*
Question::Construct a magic squre having dimension n*n (Where is odd).The valu of nwill be supplied by the users.

Magic squre is a squre matrix which will be filled up with number's 1 to n*n each will be used once and it's rowwise sums,
columnwise sums and diagonalwise sums are equal to each other.And the sum thus obtained is known as magis sum.

Also find out the expression for the magic sum directly from the dimension valu n.

      		  col(c)					r=1 c=(n+1)/2 (initial value)							   		*    *    *    *
      |  1   2   3   4   5				r=denotes row number, c=denotes column number.				   **   **   **   *
------|--------------------				r--  c++ normal fill-up will trun it's head. 				  * *  * *  * *  *
  r 1 |  17  24  1   8   15				case A: (limit check)										 *  * *  * *  * *
  o 2 |  23  5   7   14  16  					(2)/(3) (row folding) if (r<1) then r=n				*   **   **   **
  w 3 |  4   6   13  20  22						(3)/(2) (col folding) if (c<n) then c=1			   *	*    *    *
 (r)4 |  10  12  19  21  3						(1)		(conner logic)if (r<1&&c>n) 			valu of n   magic sum
    5 |  11  18  25  2   9								then r=r+2,c=c-1						---------------------
------|--------------------																			3			15
										case B: (Proccupied check)									5			65
	magic sum=65								(4) if (a[r][c]!=0) then r=r+2 c=c-1				7			175
 	here n=5 (odd number)																			n			n*(n*n+1)/2
 	
 	*/
 	
 	#include<stdio.h>
 	int a[50][50];
 	int main(void)
 	{
 		int num,i,r,c,s=0;
 		printf("\n\n\t\tPlease enter the odd dimension of the matrix...");
 		scanf("%d",&num);
 		
 		printf("\n\n\t\tThe precalculated magic sum is=%d...",num*(num*num+1)/2);
 		r=1;
 		c=(num+1)/2;
 		for(i=1;i<=num*num;i++)
 		{
 			a[r][c]=i;
 			r--;
 			c++;
 			if(r<1 && c>num){r=r+2;c--;}
			else if(r<1){r=num;}
			else if(c>num){c=1;}
			else if(a[r][c]!=0){r=r+2;c--;}
		}
			 
			for(r=1;r<=num;r++)
			{
			 	printf("\n\n\t");
			 	for(c=1;c<=num;c++)
			 	{
			 		printf("%4d",a[r][c]);
			 		if(r==c){s=s+a[r][c];} 
				 }
			}
		 printf("\n\n\t\tThe obtained magic num is=%d...",s);
		 printf("\n\n\t\tEnd of the program...");
 		return 0;
	 }
