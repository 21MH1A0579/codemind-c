#include<stdio.h>
int main()
{
    int a,b,n,r,t,rn;
    scanf("%d%d",&a,&b);
     for(n=a;n<=b;n++)
     {
     	 t=n;
         rn=0;
         while(t>0)
         {
         r=t%10;
         t=t/10;
         rn=rn*10+r;
          }
     if(rn==n)
     printf("%d ",n);
     }
     return 0;
}