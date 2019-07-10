#include<stdio.h>
int main()
{
	int i,j=0,n,q,c;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the power:");
    scanf("%d",&q);
    c=n;
    for(i=0;i<q-1;i++)
    {
    	n=n*c;
	}
	printf("%d",n);
return 0;
}
