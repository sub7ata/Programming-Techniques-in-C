//Find out the revers of a given number...

#include<stdio.h>
int main(void)
{
	int revnum,d,num;
	printf("\nPlease enter an inter...");
	scanf("%d",&num);
	
	
	revnum=0; 
	while(num!=0)
	{
	d=num%10;
	revnum=revnum*10+d;
	printf("\nCurrent reveres number=%d and digits=%d...",revnum,d);
	num=num/10;
	}
	printf("\n\nSo the digital root of the given is=%d\n...",revnum);
	printf("\n\n\tEnd of the program...\n");
	return 0;
}
