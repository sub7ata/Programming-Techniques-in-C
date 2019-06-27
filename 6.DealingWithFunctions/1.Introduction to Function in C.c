/*A function is a group of statements that together perform a task.
Every c program has at least one function,which is main(), and all 
the trivail programs can define additional function. We can divide 
up our code into separate function.*/

# include<stdio.h>
int main(){
	int a,b,c;
	printf("\n\n\tWelcome to the World of programming...");
	
	printf("\n\n\tPease enter first number...");
	scanf("%d",&a);
	
	printf("\n\n\tPlease enter second number...");
	scanf("%d",&b);
	
	if(b==0){
		printf("\n\n\tDivision by ZERO is illegle...");
	}else{
		c=a/b;
		printf("\n\n\tSo the quotion %d/%d is %d...",a,b,c);
	}
	printf("\n\n\t\tEnd of the program...");
	return 0;
}
