#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,sum=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        c++;
        if(arr[i]==1)
        {
            sum+=pow(2,c-1);
        }
    }
    printf("%d",sum);
}