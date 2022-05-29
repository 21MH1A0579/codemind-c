#include<stdio.h>
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
    int n,arr[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(palindrome(arr[i]))
        {
            c++;
        }
        
    }
    printf("%d",c);
}