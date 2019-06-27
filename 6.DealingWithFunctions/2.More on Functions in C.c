#include<stdio.h>	
main(){
	int a,b,c;int my_input(void);			//Prototype declaration...
	int my_add(int,int);
	void my_display(int,int,int);
	void my_welcome(void);
	void my_halt(void);
	my_welcome();
	a=my_input();
	b=my_input();

	c=my_add(a,b);	
	my_display(a,b,c);
	my_halt();
}
void my_halt(void){
	printf("\n\n\t\tEnd of the program...");
}
void my_welcome(void){
	printf("\n\n\tWelcome to the world of programming...");
}
int my_input(){
	int data;
	printf("\n\n\tPlease enter a input...");
	scanf("%d",&data);
	return(data);
}
void my_display(int d1,int d2,int re){
	printf("\n\n\tDisplaying the result...");
	printf("\n\n\tSo the sum of the %d and %d is %d...",d1,d2,re);
}
int my_add(int x,int y){
	int result;
	printf("\n\n\tPerforming the addition operation...");
	result=x+y;
	return(result);
}
