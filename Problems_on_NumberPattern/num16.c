/*
Author:Kalpana Baigar

Program to print following Pattern

1
2 3
3 4 5 
4 5 6 7
5 6 7 8 9 

*/



#include<stdio.h>

void display(int num)
{
	int i,j;
	int cnt=0;

	for(i=1;i<=num;i++)
	{
		cnt=i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",cnt);
			cnt++;
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


