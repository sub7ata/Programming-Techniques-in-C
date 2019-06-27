/*Dealing with dynamic memory allocation...*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int *ptr,*newptr;
	
	/*allocate memory for the pointer variable ussing malloc*/
	if((ptr=(int *)malloc(sizeof(int)))==NULL){
		printf("Not enough memory to allocate buffer\n");
		exit(1);	/*terminate program if out of memory*/
	}
	printf("\n\n\t\t&ptr=%x, ptr=%x and *ptr=%d...",&ptr,ptr,*ptr);
	
	/*allocate memory for the pointer variable ussing malloc*/
	if((ptr=(int *)malloc(sizeof(int)*5))==NULL){
		printf("Not enough memory to allocate buffer\n");
		exit(1);	/*terminate program if out of memory*/
	}
	
	printf("\n\n\t\tPrinting details...");
	for(i=0;i<5;i++){
		printf("\n\t\ti=%d, (ptr%d)=%x and *(ptr+%d)=%d...",i,i,(ptr+i),i,*(ptr+i));
	}
	
	/*allocate memory for the pointer variable using calloc*/
	if((ptr=(int *)calloc(5,sizeof(int)))==NULL){
		printf("Not enough memory to allocate buffer");
		exit(1);	/*terminate program if out of memory*/
	}
	printf("\n\n\t\tPrinting details...");
	for(i=0;i<5;i++){
		printf("\n\t\ti=%d, (ptr%d)=%x and *(ptr+%d)=%d...",i,i,(ptr+i),i,*(ptr+i));
	}
	*ptr=11;
	*(ptr+1)=22;
	*(ptr+2)=33;
	
	/*allocate memory for the pointer variable using realloc*/
	if((newptr=(int *)realloc(ptr,sizeof(int)*6))==NULL){
		printf("Not enough memory to allocate buffer");
		exit(1);	/*terminate program if out of memory*/
	}
	*(newptr+3)=44;
	printf("\n\n\t\tPrinting details...");
	for(i=0;i<6;i++){
		printf("\n\t\ti=%d, (ptr%d)=%x and *(ptr+%d)=%d...",i,i,(newptr+i),i,*(newptr+i));
	}
	printf("\n\n\t\tEnd of the program...");
}
