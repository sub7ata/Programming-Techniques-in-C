/* 
Draw the patter:-05
n=5
				i	b	*
			---------------
 ....*			1	4	1
 ...* *			2	3	2
 ..* * *		3	2	3	b => (n-i)
 .* * * *		4	1	4	* => i
 * * * * *		5	0	5
 			---------------
*/
#include<stdio.h>
int main(void){
	int num,r,sp,c;
	printf("Enter the number you want...");
	scanf("%d",&num);
	printf("\nPrinting the pattern....\n\n");
	
	for(r=1;r<=num;r++){
		for(sp=1;sp<=(num-r)+1;sp++){
			printf(" ");
		}
		for(c=1;c<=r;c++){
			printf("* ");
		}
	printf("\n");
	}
	printf("\n\t\tEnd of the program...");
	return 0;
}
