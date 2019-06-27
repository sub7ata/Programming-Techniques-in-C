/* 
Draw the pattern:-
n=9 (odd layer number)
m=(n+1)/2=5
				i	b	*
			-------------
*********		1	0	9
.*******		2	1	7
..*****			3	2	5		b => i-1
...***			4	3	3		* => 2*(m-i)+1
....*		----5---4---1	
...***			6	3	3		b =>n-i
..*****			7	2	5		* =>2*(i-m)+1
.*******		8	1	7
*********		9	0	9
			--------------
*/
#include<stdio.h>
int main(void){
	int num,m,r,b,s,sp,c;
	printf("Enter the number you want...");
	scanf("%d",&num);
	m=(num+1)/2;
	printf("\nPrinting the patter...\n\n");
	
	for(r=1;r<=num;r++){
		if(r<m){
			b=r-1;
			s=2*(m-r)+1;		
		}else{
			b=num-r;
			s=2*(r-m)+1;
		}
		for(sp=1;sp<=b;sp++){
			printf(".");
		}
		for(c=1;c<=s;c++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\tEnd of the program...\n");
	return 0;
}
