/*
Author:Kalpana Baigar

Progem to print following Pattern

1
2 2
3 3 3
4 4 4 4
*/

#include<stdio.h>

int main()
{
	int num=0;
	printf("enter number");
	scanf("%d",&num);
	
	int i,j;
	
	for(i=1;i<num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		
		printf("\n");
	}
	
}
