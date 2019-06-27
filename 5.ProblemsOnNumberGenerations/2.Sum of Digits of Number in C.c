//Find out the sum of all digits of a given number...
//n=7689
//i=digits
//---------------------
//1 (int)(7689)/(10^(i-1))%10=>9
//2 (int)(7689)/(10^(i-1))%10=>8
//3 (int)(7689)/(10^(i-1))%10=>6
//4 (int)(7689)/(10^(i-1))%10=>7

#include<stdio.h>
#include<math.h>
int main(void)
{
	int num,d,sum,i,nd;
	printf("\nPlease enter the number...");
	scanf("%d",&num);
	nd=0;
	
	while(pow(10,nd)<=num)
	{
		nd++;
		printf("\nSo the number of digits in the given number is %d...\n",nd);
		sum=0;
		for(i=1;i<=nd;i++)
		{
			d=(int)(num/pow(10,i-1))%10;
			sum=sum+d;
			printf("\nThe current value of d=%d and sum=%d...",d,sum);
			}
			printf("\n\nSO the sum of all digits is of the number %d is %d...",num,sum);
		}
		printf("\n\n\tEnd of the program...");
		return 0;
	
}
