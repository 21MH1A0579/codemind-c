#include<stdio.h>
int main()
{
    int n,r,prod=1,sum=0,res;
    scanf("%d",&n);
    while(n>0)
    {
       r=n%10;
       prod*=r;
       sum+=r;
       n=n/10;
    }
    res=prod-sum;
    printf("%d",res);
}