/*Promlem-2 on Serice.

sum=2+4+6+......+n
Place=1,2,3,.....,n
*/

/*
#include<stdio.h>
int main(void){
	int num,i,sum=0;
	printf("Enter the number you want...");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		sum=sum+2*i;
		printf("Current i=%d ,term=%d and sum=...%d\n",i,2*i,sum);
	}
	printf("\n\t\tSo the final sum=...%d",sum);
	return 0;
}
*/
#include<stdio.h>
int main(void){
	int num,sum=0,i;
	printf("Enter the number you want...\n");
	scanf("%d",&num);
	
	for(i=2;i<=2*num;i+=2){
		sum=sum+i;
		printf("Current i=%d ,term=%d and sum=...%d\n",i,i,sum);
	}
	printf("So the final sum is...%d\n",sum);
	return 0;
}

