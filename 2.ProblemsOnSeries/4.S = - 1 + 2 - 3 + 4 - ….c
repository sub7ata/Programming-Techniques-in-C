/*Promlem-4 on Serice.

  Sum=-1+2-3+4-5............n terms
Place= 1 2 3 4 5............n place
*/

#include<stdio.h>
#include<math.h>
int main(void){
	int i,num,sum;
	printf("Enter the number you want...");
	scanf("%d",&num);
	
	sum=0;
	for(i=1;i<=num;i++){
		sum=sum+pow(-1,i)*i;
		printf("\t\tCurrent i=%d, terms=%d and sum=...%d\n",i,(int)pow(-1,i)*i,sum);
	}
	printf("\n\n\t\tSo the final sum is...%d\n",sum);
}
