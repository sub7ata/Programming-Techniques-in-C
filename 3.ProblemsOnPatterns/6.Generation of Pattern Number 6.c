/* 
Draw the patter:-06
n=5
				i	b	char					
			-------------------
....a			1	4	1 a(97)
...bbb			2	3	3 b(98)		b => (n-i)
..ccccc			3	2	5 c(99)		* => 2*i-1
.ddddddd		4	1	7 d(100)	char =>i+96
eeeeeeeee		5	0	9 e(101)
 			-------------------
*/
#include<stdio.h>
int main(void){
	int num,r,sp,c;
	printf("Enter the number you want...");
	scanf("%d",&num);
	printf("\nPrinting the pattern...\n\n");
	

	for(r=1;r<=num;r++){
		for(sp=1;sp<=(num-r)+1;sp++){
			printf(" ");
		}

		for(c=1;c<=(2*r)-1;c++){
			printf("%c",r+96);
		}
		printf("\n");
	}
	printf("\n\tEnd of the program...");
	return 0;
}
