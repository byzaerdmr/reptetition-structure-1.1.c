#include<stdio.h>
int main(){
	
	int i,j,first;
	printf("Please enter a number:\n ");
	scanf("%d",&first);
	
	for (i=1;i<=first;i++)
	{	
		for (j=1;j<=first-i;j++){
			printf(" ");
		
		}
		
		for (j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}

retrun 0;  }
