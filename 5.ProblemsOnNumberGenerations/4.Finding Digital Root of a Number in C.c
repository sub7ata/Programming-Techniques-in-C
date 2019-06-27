//Find out the digital root of a given number...
//n=1231 => 1+2+3+1=>7
//n=1234 => 1+2+3+4=>10=>1
//n=1918 => 1+9+1+8=>19=>19=>10=>1

#include<stdio.h>
int main(void)
{
	int num,sum,count,d;
	printf("\nPlease enter an integer...");
	scanf("%d",&num);
	
	while(num!=0)
	{
		sum=0;
		while(num!=0)
		{
			d=num%10;
			sum=sum+d;
			num=num/10;
			printf("\nGoing again...");
		}
		if(sum>9)
		{
			num=sum;
			sum=0;
		}
		printf("\n\nSo the digital root of the gives number is %d...",sum);
	}
	return 0;
}
