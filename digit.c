#include<stdio.h>
int main()
{
	int n,a;
	int sum=0,i;
	scanf("%d %d",&n,&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
