#include<stdio.h>
int main()
{
    int n,sum=0,temp,r;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}