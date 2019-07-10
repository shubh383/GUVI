#include<stdio.h>
int main()
{
	int i,j=0,n,q,c;
    scanf("%d",&n);
    scanf("%d",&q);
    c=n;
    for(i=0;i<q-1;i++)
    {
    	n=n*c;
	}
	printf("%d",n);
return 0;
}
