//Find out all posiable perfact number ranging from 2 to 1000

//Perfact Number:Perfact number is that number whose sum of all factors of 
//that number(execluding the number itself) is equal to the number itself.

//Example:28=1+2+4+7+14

#include<stdio.h>
#include<math.h>
int main(void)
{
	int num,sum,i;
	for(num=2;num<=1000;num++)
	{
		sum=1;
		for(i=2;i<sqrt(num);i++)
		{
			if(num%i==0)
			sum=sum+i+num/i;
		}
		if(sqrt(num)==(int)sqrt(num))
			sum=sum+(int)sqrt(num);
		if(num==sum)
			printf("\n%d is a perfact number...",num);
	
    }
    printf("\n\n\tEnd of the program...");
	return 0;
}
