/*Promlem-10 on Serice.

  Sum=1+2+3+4+10+5+6+7+8+26+9+.............n terms
place=1 2 3 4 5  6 7 8 9 10 11.............n places
*/
#include<stdio.h>
int main(void){
	int num,i,tsum,fsum,term;
	printf("Please enter the terms...");
	scanf("%d",&num);
	
	tsum=0;
	fsum=0;
	term=1;
	for(i=1;i<=num;i++)
	{
		if(i%5==0)
		{
			fsum=fsum+tsum;
			printf("\n\n\tAdding tsum=%d...",tsum);
			tsum=0;
		}
		else
		{
		tsum=tsum+term;
		fsum=fsum+term;
		printf("\n\t\t Adding term=%d...",term);
		term++;
	
		}
			}
			printf("\n\n\t\tSO the final sum=%d",fsum);
	return 0;
}
