#include<stdio.h>
int main(void)
{
	int i,count;
	printf("\n\nIteration using for loop...");
	count=0;
	for(i=1;i<=5;i++)
	{
		printf("\nIteration using for with i=%d...",i);
		count++;
	}
	printf("\n\nAfter exiting loop i=%d and count=%d...",i,count);
	
	printf("\n\n\tEnd of the program...");
	return 0;
}
