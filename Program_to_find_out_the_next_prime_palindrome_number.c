#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<(n/2)+1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int palindrome(int n)
{
    int r,rev=0,temp;
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
int num,n,i;
scanf("%d",&num);
for(i=num+1;;i++)
{
    if(palindrome(i))
    {
        if(prime(i))
        {
            printf("%d",i);
            break;
        }
    }
}
    
}