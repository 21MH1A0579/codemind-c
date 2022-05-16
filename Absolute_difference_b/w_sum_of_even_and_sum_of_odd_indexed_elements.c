#include<stdio.h>
int main()
{
    int num,i,arr[100],oc=0,ec=0,res;
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
        if(i%2==1)
        {
            oc+=arr[i];
        }
    }
    res=ec-oc;
    printf("%d",res);
    
}