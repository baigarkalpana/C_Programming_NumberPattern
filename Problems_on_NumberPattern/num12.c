/*
Author:Kalpana Baigar

Program to print following Pattern

1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

*/
#include<stdio.h>

void display(int num)
{
	int i,j;

	for(i=num;i>=1;i--)
	{
		for(j=1;j<=i;j++)
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


