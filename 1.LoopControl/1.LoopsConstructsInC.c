#include<stdio.h>
int main(void)
{
	int i,count;
	printf("\n\nItereation using for loop...");               //Loop uing for
	for(i=0;i<=5;i++)
	{
		printf("\nIteration using for with i=%d...",i);      
	}
	printf("\nAfter exiting loop i=%d...",i);
	
	printf("\n\nIteration using loop for do-while...");      //Loop using do-while
	i=0;
	do{
		printf("\nIteration using do-while with i=%d...",i);
		i++;
	}while(i<=5);
	printf("\nAfter exiting loop i=%d...",i);
	
	printf("\n\nIteration using while-do...");                //Loop using while-do
	i=0;
	while(i<=5){
		printf("\nIteration using while-do with i=%d",i);
		i++;
	}
	printf("\nAfter exiting loop i=%d...",i);
	
	printf("\n\n\tEnd of the program...");
	return 0;
}
