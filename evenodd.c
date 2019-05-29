#include<stdio.h>
int main()
{
	int n;
	printf("enter the no:");
	scanf("%d",&n);
	while(n>0)
	{
		if(n%2==0)
		{
			printf("Even");
		}
		else
		{
			printf("Odd");
		}
	}
	if(n<0)
	{
		printf("Invalid");
	}
return 0;
}
