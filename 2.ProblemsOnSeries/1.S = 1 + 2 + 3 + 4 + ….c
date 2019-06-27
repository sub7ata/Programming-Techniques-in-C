/*Promlem-1 on Serice.

Sum=1+2+3+4........n terms
Place=1,2,3,4......n place
*/

#include<stdio.h>
int main(void){
	int num,sum=0,i;
	printf("Enter the number you want");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		sum=sum+i;
		printf("Current i=%d and sum=%d\n",i,sum);
	}
	printf("Final sum=%d",sum);
}
