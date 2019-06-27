/*
   Fibonacci number using for loop. 
   0 1 1 2 3 5 8 13 21 . . . . n
*/
#include<stdio.h>
int main(void)
{
	int i,num,f1,f2,f3;
	printf("Enter an integer number...");
	scanf("%d",&num);
	f1=0;
	f2=1;
	if(num>=1)
	printf("%d ",f1);
	if(num>=2)
	printf("%d ",f2);
	for(i=3;i<=num;i++){
		f3=f1+f2;
		printf("%d ",f3);
		f1=f2;
		f2=f3;
	}
	printf("\n\nEnd of the program.\n");
	return 0;
}
