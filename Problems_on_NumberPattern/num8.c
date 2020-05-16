/*
Author:Kalpana Baigar

Program to print following Pattern

1 1 1 1 1 
2 2 2 2
3 3 3
4 4
5
*/

#include<stdio.h>

void display(int num)
{
	int i,j;
	int cnt=1;
	/*
	for(i=num;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",cnt);
		
		}
		cnt++;
		printf("\n");
	}
	*/
	
	for(i=1;i<=num;i++)
	{
		for(j=i;j<=num;j++)
		{
			printf("%d ",i);
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












