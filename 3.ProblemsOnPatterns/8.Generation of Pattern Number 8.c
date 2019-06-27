/*
Draw the pattern:-08
n=9 (odd layer number)
m=(n+1)/2=5
			i	b	*
		-----------------
....*		1	4	1
...***		2	3	3
..*****		3	2	5		b => m-i
.*******	4	1	7		* => 2*-1
*********---5---0---9----
.*******	6	1	7		b => i-m
..*****		7	2	5		* => 2*(n-i)+1
...***		8	3	3
....*		9	4	1
		------------------
*/

#include<stdio.h>
int main(void){
	int num,r,sp,c,m,b,s;
	printf("Enter the number you want....");
	scanf("%d",&num);
	
	//m=(num+1)/2;  //True
	m=(num/2)+1;    //True, Select your choice
	
	printf("\nPrinting the pattern...\n\n");
	
	for(r=1;r<=num;r++){
		if(r<=m){
			b=m-r;
			s=2*r-1;
		}
		else{
			b=r-m;
			s=2*(num-r)+1;
		}
		for(sp=1;sp<=b;sp++){
			printf(".");
		}
		for(c=1;c<=s;c++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
