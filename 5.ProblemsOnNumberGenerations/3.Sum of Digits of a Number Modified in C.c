/*
  Sum of digits of given number
  12345=15 
*/
#include<stdio.h>
int main(void)
{
	int num,rem,sum;
	printf("Enter an integer number...");
	scanf("%d",&num);
	printf("Sum of digits of given number are...\n");
	sum=0;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		printf("\nCurrent digits=%d reduce=%d and sum=%d",rem,num,sum);
	}
	printf("\n\nFinal the sum of digit of given numbers...%d",sum);
	return 0;
}
