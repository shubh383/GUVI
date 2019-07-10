#include<stdio.h>
#include<stdbool.h>
bool prime(int r){
       for(int n=2;n<r;n++)
       {
           if(r%n==0)
           {
               return false;
           }
       }
       return true;
}
int main()
{
   int n,p,q,r;
   scanf("%d %d",&p,&q);
   for(r=p+1;r<q;++r)
   {
       if(prime(r)){
           printf("%d ",r);
       }
   }
   
  return 0;
}
