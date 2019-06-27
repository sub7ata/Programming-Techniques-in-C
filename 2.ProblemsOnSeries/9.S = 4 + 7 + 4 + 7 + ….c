/*Promlem-9 on Serice.

    Sum=4+7+4+7+4+7+............n terms
  place=1 2 3 4 5 6 ............n place
  */
#include<stdio.h>
int main(void)
{
	int num,sum,i,term;
	printf("Please enter a terms...");
	scanf("%d",&num);
	
	sum=0;
	term=4;
	for(i=1;i<=num;i++)
	{
		sum=sum+term;
		printf("\n\t\tCurrent i=%d, terms=%d and sum=%d...",i,term,sum);
		if(term==4)
		term=7;
		else
		term=4;
		//Or ,use this
		//term=11-term;
	}
	printf("\n\n\t\tSo the final sum=%d...",sum);
	printf("\n\n\n\t\tEnd of the program....");
	return 0;
}
