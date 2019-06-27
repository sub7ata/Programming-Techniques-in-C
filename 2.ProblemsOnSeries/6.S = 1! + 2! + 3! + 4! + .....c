/*Promlem-6 on Serice.

  Sum=1!+2!+3!.................n terms
place=1  2  3..................n place
*/
#include<stdio.h>
int main(void)
{
	int num,sum,i,j,fact;
	printf("Please enter the terms...");
	scanf("%d",&num);
	                              
	sum=0;                      
	fact=1;                     
	for(i=1;i<=num;i++)                     
	{                    
	    sum=sum+fact;                   
	    printf("\n\t\tCurrent i=%d, fact=%d and sum=%d...",i,fact,sum);                  
	    fact=fact*(i+1);  
	}
					               
// Or, use this.
	/*sum=0;                       
	for(i=1;i<=num;i++)          
	{                            
		fact=1;                  
		for(j=1;j<=i;j++)        
		fact=fact*j;             
		sum=sum+fact;            
		printf("\n\t\tCurrent i=%d, fact=%d and sum=%d...",i,fact,sum);
	}*/
	printf("\n\n\t\tSo the final sum=%d...",sum);
	return 0;
}
