/*
Author:Kalpana Baigar

Program to print following Pattern

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1


*/

#include<stdio.h>

void display(int num)
{
	int i,j;

	for(i=num;i>=1;i--)
	{
		for(j=num;j>=i;j--)
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


