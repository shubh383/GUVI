#include<stdio.h>
int main()
{
   int n,p,q,r;
   scanf("%d %d",&p,&q);
   for(r=p+1;r<q;++r)
   {
       if(r%2!=0)
       {
           printf("%d ",r);
       }
   }
  return 0;
}
