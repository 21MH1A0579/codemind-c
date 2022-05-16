#include<stdio.h>
int main()
{
    int num,i,arr[100],oc=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        if(i%2==1)
        {
            oc+=arr[i];
        }
    }
    printf("%d",oc);
    
}