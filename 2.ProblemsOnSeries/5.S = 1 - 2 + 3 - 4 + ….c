/*Promlem-5 on Serice.

  Sum=1-2+3-4+5..............n terms
Place=1 2 3 4 5..............n place
*/

#include<stdio.h>
#include<math.h>
int main(void){
	int num,i,sum;
	printf("Enter the number you want...");
	scanf("%d",&num);
	
	sum=0;
	for(i=1;i<=num;i++){
		sum=sum+pow(-1,i-1)*i;
		printf("Current i=%d, term=%d and sum=%d\n",i,(int)pow(-1,i-1)*i,sum);

	}
	printf("\n\t\tSo the final sum is...%d\n",sum);
		
	
	
	return 0;
}
