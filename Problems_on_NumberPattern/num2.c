/*
Author:Kalpana Baigar

Program to print following Number pattern

1 1 0 1 1
1 1 0 1 0
0 0 0 0 0
1 1 0 1 1
1 1 0 1 1

*/


#include<stdio.h>

void display(int no)
{
	int i,j;
	
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=no;j++)
		{
			if(i==3 || j==3)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		
		printf("\n");
	}
	
	
	
}

int main()
{
	int num;
	
	printf("enter number");
	scanf("%d",&num);
	
	display(num);
	
	
	return 0;
}
