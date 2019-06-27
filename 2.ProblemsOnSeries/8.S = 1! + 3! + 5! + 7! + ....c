/*Promlem-8 on Serice.

  Sum  =1!+3!+5!+7!+...........n terms
  place=1  2  3  4  ...........n places

i    factor-1     factor-2
-----------------------------
1      2            3
2      3            5           factor1=2*i;
3      6            7           factor2=2*i+1;
4      8            9
-----------------------------
*/

#include<stdio.h>
int main(void){
	int num,sum,fact,i;
	printf("Please enter a term...");
	scanf("%d",&num);
	
	sum=0;
	fact=1;
	for(i=1;i<=num;i++)
	{
		sum=sum+fact;
		printf("\n\tCurrent i=%d fact=%d and sum=%d...",i,fact,sum);
		fact=fact*(2*i)*(2*i+1);
	}
	printf("\n\n\t\tEnd of the program...");
	return 0;
}
