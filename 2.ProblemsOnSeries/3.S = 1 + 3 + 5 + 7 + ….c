/*Promlem-3 on Serice.

Sum=1+3+5.......n terms
Place=1 2 3 4...n terms
*/

/*
#include<stdio.h>
int main(void){
	int num,i,sum=0;
	printf("Enter the number you want...");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
	sum=sum+2*i-1;
	printf("Current i=%d, term=%d and sum=...%d\n",i,2*i-1,sum);	
	}
	printf("\n\n\t\tSo the final sum is=...%d\n",sum);
}
*/
#include<stdio.h>
int main(void){
	int num,i,sum=0;
	printf("Enter the number you want...");
	scanf("%d",&num);
	
	for(i=1;i<=2*num-1;i+=2){
		sum=sum+i;
		printf("Current i=%d,term=%d and sum=...%d\n",i,i,sum);
	}
	printf("\n\n\tSo the final sum is=...%d\n",sum);
	return 0;
}
