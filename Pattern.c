#include<stdio.h>
int main()
{
    int n,i,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=n;
     while(temp>=1)
     {
        printf("%d ",i);
        temp--;
     }
     printf("
");
    }
}