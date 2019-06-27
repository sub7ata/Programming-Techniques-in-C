/* 
Draw the pattern:-04

n=5
						i	b	*
					----------------
 * * * * * * * * *		1	0	9
 . * * * * * * *		2	1	7	b => (i-1)
 . . * * * * *			3	2	5	* => 2*(n-i)+1
 . . . * * *			4	3	3
 . . . . *				5	4	1
 					----------------
*/
#include<stdio.h>
int main(void){
	int num,r,sp,c;
	printf("Enter the number you want...");
	scanf("%d",&num);
	printf("\nPrinting the pattern...\n");
	
	for(r=1;r<=num;r++){
		for(sp=1;sp<=(r-1);sp++){
			printf(". ");
		}
		for(c=1;c<=(2*(num-r)+1);c++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\tEnd of the program...\n");
	return 0;
}
