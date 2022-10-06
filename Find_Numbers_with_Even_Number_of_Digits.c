#include<stdio.h>
int dc(int num)
{
    int c=0;
    while(num)
    {
        c++;
        num=num/10;
    }
    return c;
}
int main()
{
    int n,i, arr[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(dc(arr[i])%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
    
}