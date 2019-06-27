/*
 Draw the pattern:-01
 
 n=5			i		*
 			------------------
 *				1		1
 * *			2		2
 * * *			3		3	* => i
 * * * *		4		4
 * * * * *		5		5
 			------------------
*/
#include<stdio.h>
int main(void){
	int num,r,c;
	printf("Enter the number you want...");
	scanf("%d",&num);
	printf("\n Printing the pattern....\n\n");
	
	for(r=1;r<=num;r++){
		for(c=1;c<=r;c++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\tEnd of the program...\n");
	return 0;
}
