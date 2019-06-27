/*Promlem-7 on Serice.

   sum=2!+4!+6!+8!+.......n terms
place= 1  2  3  4.........n place

i  factor1  factor2
---------------------
1    3       4
2    5       6    factor1=2*i+1;
3    7       8    factor2=2*i+2; =2*(i+2);
4    9      10        
n!=(n-1)!*n           
*/
#include<stdio.h>
int main(void){
	int num,sum,i,fact;
	printf("Enter the number you want...");
	scanf("%d",&num);
	sum=0;
	fact=2;
	printf("\nPrinting the pattern...\n\n");
	
	for(i=1;i<=num;i++){
		sum=sum+fact;
		printf("Current i=%d, fact=%d and sum=%d",i,fact,sum);
		fact=fact*(2*(i+1))*(2*(i+2));
		printf("\n");
	}
	printf("\n\tSo the final sum=%d",sum);
	return 0;
}
