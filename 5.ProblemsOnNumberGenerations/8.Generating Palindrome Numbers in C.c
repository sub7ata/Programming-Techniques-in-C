//Find out all posiable three digit palindrome number...

#include<stdio.h>
int main(void)
{
	int n,p,revnum,d;
	for(n=100;n<=999;n++)
	{
		revnum=0;
		p=n;
		while(p!=0)
		{
			d=p%10;
			revnum=revnum*10+d;
			printf("\nCurrent revers number=%d and digits=%d...",revnum,d);
			p=p/10;
		}
		if(revnum==n)
		{
			printf("\n So %d is a palindrom number...",n);
		}
	}
	return 0;
}
