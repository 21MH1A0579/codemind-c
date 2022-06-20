#include<stdio.h>
int palin(int n)
{
    int temp,r,rev=0;
    temp=n;
    while(temp)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    if(rev==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(palin(i))
        {
           a=i;
           break;
        }
    }
    for(i=n-1;;i--)
    {
        if(palin(i))
        {
            b=i;
            break;
        }
    }
    if(a-n<n-b)
    {
        printf("%d",a);
    }
    else if(a-n==n-b)
    {
        printf("%d %d",b,a);
    }
    else
    {
        printf("%d",b);
    }
}