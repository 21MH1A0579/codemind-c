#include<stdio.h>
int palindrome(int n)
{
    int r,rev=0,temp;
    temp=n;
    while(temp)
    {
        r=temp%10;
        rev=rev+r;
        temp=temp/10;
    }
    return rev;
}
int main()
{
    int n,arr[100],i,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c+=palindrome(arr[i]);
    }
    printf("%d ",c);
}