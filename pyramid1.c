//Include header file for I/O
#include<stdio.h>
int main(){	
	//Declare variables
	int n,i,j,k;
	//Take input number of rows
	printf("Enter the number of rows");
	scanf("%d", &n);
	//Run loop till number of rows
	for(i=1;i<=n;i++)
	{
		//print spaces
		for(j=1;j<=(n-i);j++)
		{
			printf(" ");
		}
		//print stars of pyramid
		for(k=1;k<=(2*i-1);k++)
		{
			printf("*");
		}
		//Move to next line
		printf("\n");
	}
	return 0;
}
