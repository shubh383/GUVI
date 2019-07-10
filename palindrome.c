#include<stdio.h>
int main()
{
	int n,i,j,k=0;
	scanf("%d",&n);
	int p=n;
	while(n!=0)
	{
		i=n%10;
		k=k*10+i;
		n=n/10;
	}
	if(p==k)
    {
		printf("yes");
	}
	else
	{
	    printf("no");
	}
return 0;
}
