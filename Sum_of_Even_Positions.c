#include<stdio.h>
int main()
{
    int num,i,arr[100],ec=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        if(i%2==0)
        {
            ec+=arr[i];
        }
    }
    printf("%d",ec);
    
}