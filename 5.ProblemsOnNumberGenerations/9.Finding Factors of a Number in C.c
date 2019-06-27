//Find out all possiable factor of a given number...

#include<stdio.h>
#include<math.h>
int main(void)
{
	int num,i;
	printf("\nPlease enter an integer...");
	scanf("%d",&num);

//	Logic-1
//	for(i=1;i<=num;i++)
//	if(num%i==0)
//	{
//		printf("\n %d is a factor...",i);
//	}
//             Or
//  Logic-2
	
	for(i=1;i<sqrt(num);i++)
	{
		if(num%i==0)
		printf("\n%d and %d are factors...",i,num/i);
	}
	if(sqrt(num)==(int)sqrt(num))
	{
	printf("\n%d is factor...",(int)sqrt(num));	
	}
	printf("\n\n\tEnd of the program...");
	return 0;
}
