//Find out all krishnamurthy number from 1 to 1000
//Krishnamurthy number: It is a number which is equal to the sum of the factorials of all it's digits.
//Example: 145=1!+4!+5!=1+24+120=145

#include<stdio.h>
int main(void)
{
	int p,num,sum,fact,d,i;
	
	for(p=1;p<=1000;p++)
	{
		sum=0;
		num=p;
		while(num!=0)
		{
			d=num%10;
			fact=1;               //fact=d;
			for(i=1;i<=d;i++)     //for(i=2;i<=(d-1);i++)
			fact=fact*i;
			sum=sum+fact;
			num=num/10;
		}
		if(p==sum)
		printf("\n%d is a Krishnamurthy number...",p);
	}
	return 0;
}
