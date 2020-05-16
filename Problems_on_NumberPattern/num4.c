/*
Author:Kalpana Baigar

Program to print following Number pattern

111

*/


#include<stdio.h>

void display(int no)
{
	int i,j;
	
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=no;j++)
		{
			if( (i+j)==6 || (i==j) || (j==2 ) ||  ( j==3 ) || ( j==5 ))
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
