#include<stdio.h>
int main()
{
    int p,q,i,n=0,result=0,r;
    scanf("%d %d",&p,&q);
    for(i=p+1;i<q;++i)
    {
        int temp1=i;
        int temp2=i;
        while(temp1>0)
        {
            temp1=temp1/10;
            ++n;
        }
        
        while(temp2 != 0)
        {
            r=temp2%10;
            result = result+pow(r, n);
            temp2=temp2/10;
        }
        if(i == result)
        {
            printf("%d ",i);
        }
        n = 0;
        result=0;
    }
return 0;
}
