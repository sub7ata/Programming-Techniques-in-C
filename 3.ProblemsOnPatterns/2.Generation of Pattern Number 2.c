/*
Draw the pattern:-02

n=5				i		*
 			------------------
 * * * * *		1		5
 * * * *		2		4
 * * *			3		3	* => (n-i+1)
 * *    		4		2
 *      		5		1
 			------------------

*/
#include<stdio.h>
int main(void){
	int num,r,c;
	printf("Enter the number you want...");
	scanf("%d",&num);
	printf("\nPrinting the pattern...\n\n");
	
	for(r=1;r<=num;r++){
		//for(c=num;c>=r;c--)
		for(c=1;c<=(num-r+1);c++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\tEnd of the program...");
	return 0;
}
