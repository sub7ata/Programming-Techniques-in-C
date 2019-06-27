/* Draw the pattern:-07
n=9 (odd layer numbers)
m=(n+1)/2=5
				i	*
		------------------
*			1	1
**			2	2
***			3	3		* => i
****		4	4
*****	----5---5---------
****		6	4
***			7	3		* => (n-i+1)
**			8	2
*			9	1
 		------------------
*/
#include<stdio.h>
int main(void){
	int num,r,c,s,m;
	printf("Enter the number you want...");
	scanf("%d",&num);
	printf("\nPrinting the prattern...\n\n");
	
	m=(num+1)/2;
	
	for(r=1;r<=num;r++){
	if(r<m)
	s=r;
	else
	s=num-r+1;
	for(c=1;c<=s;c++){
		printf("*");
	}
	printf("\n");
	}
	printf("\n\tEnd of the -program...\n");
	return 0;
}
