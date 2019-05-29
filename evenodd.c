#include<stdio.h>
int main()
{
	int n;
	printf("enter the no:");
	scanf("%d",&n);
		if(n%2==0 && n>0)
		{
			printf("Even");
		}
		else if(n%2!=0 && n>0)
		{
			printf("Odd");
		}
		else
		{
			printf("Invalid");
		}
return 0;
}
