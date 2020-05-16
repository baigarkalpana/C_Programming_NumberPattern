/*
Author:Kalpana Baigar

Program to print following Pattern

5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*/

#include<stdio.h>

int main()
{
	
	int no;
	printf("enter number");
	scanf("%d",&no);
	int i,j;
	
	for(i=no;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	
	
	
return 0;	
}  












