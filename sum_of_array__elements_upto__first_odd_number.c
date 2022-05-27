#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
        	break;
		}
        else if(arr[i]%2==1)
        {
            temp=i;
            break;
        }
    }
    for(i=0;i<temp;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
}