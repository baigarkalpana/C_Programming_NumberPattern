/*
Author:Kalpana Baigar

Program to print following Pattern

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

#include<stdio.h>

void display(int num)
{
	int i,j;

	for(i=1;i<=num;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

int main()
{
	
	int no;
	printf("enter number");
	scanf("%d",&no);
	
	display(no);
	
	
	
return 0;	
}  


