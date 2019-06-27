//Find out wether a given number prime or not...

#include<stdio.h>
#include<math.h>
int main(void)
{
	int num,flag,i;
	printf("\nPlease enter an Integer...");
	scanf("%d",&num);
	
	flag=1;
	for(i=2;i<=(int)sqrt(num) && flag==1;i++)
	{
		if(num%i==0)
		{
			flag=0;
		}
	}
		if(flag==1)
		printf("\n%d is a prime number...",num);
		else
		printf("\n%d is not a prime number...",num);
	printf("\n\n\tEnd of the program...");
	return 0;
}
