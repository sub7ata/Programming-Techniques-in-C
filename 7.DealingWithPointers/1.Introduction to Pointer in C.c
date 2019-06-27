/*
int *iptr=>means iptr is a variable which contain an address and content of the address is an integer qantity...
float *fptr=>means fptr is a variable which contains an address and content of the address is a float quanty

    %u - unsigned integer...

    %x - hexadecimal value...

    %p - void pointer...

*/
#include<stdio.h>
int main()
{
	int i,*ptr;
	i=100;
	ptr=&i;
	printf("\n\n\t &i=%x, i=%d, &ptr=%x, prt=%x and *ptr=%d...",&i,i,&ptr,ptr,*ptr);
	printf("\n\n\t &i=%X, i=%d, &ptr=%X, prt=%X and *ptr=%d...",&i,i,&ptr,ptr,*ptr);
	printf("\n\n\t &i=%p, i=%d, &ptr=%p, prt=%p and *ptr=%d...",&i,i,&ptr,ptr,*ptr);
	printf("\n\n\t &i=%u, i=%d, &ptr=%u, prt=%u and *ptr=%d...",&i,i,&ptr,ptr,*ptr);
	printf("\n\n\t\tEnd of the program...");
	return 0;
}
