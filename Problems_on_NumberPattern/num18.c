/*
Author:Kalpana Baigar

Program to print following Pattern

1 3 5 7 9
3 5 7 9
5 7 9
7 9
9

*/

#include<stdio.h>

void display(int num)
{
	int i,j;
	int cnt=0;

	for(i=1;i<=num;i++)
	{
		cnt=(i*2)-1;;
		for(j=i;j<=num;j++)
		{
			printf("%d ",cnt);
			cnt+=2;
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


