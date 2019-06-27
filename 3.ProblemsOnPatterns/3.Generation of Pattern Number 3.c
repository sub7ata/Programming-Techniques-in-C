/* 
Draw the pattern:-03

n=5						i	b	*
					-------------------
 . . . . *				1	4	1
 . . . * * *			2	3	3	b=> (n-1)
 . . * * * * *			3	2	5	*=> (2*i-1)
 . * * * * * * *		4	1	7
 * * * * * * * * *		5	0	9
 					-------------------
 */

#include<stdio.h>
int main(void){
	int num,r,sp,c;
	printf("Enter the number you want...");
	scanf("%d",&num);
	printf("\nPrinting the pattern...\n\n");
	
	for(r=1;r<=num;r++){
		for(sp=1;sp<=(num-r+1);sp++){
			printf(". ");
		}
		for(c=1;c<=(2*r-1);c++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\tEnd of the program...\n");
	return 0;
}
