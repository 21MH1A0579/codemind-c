#include<stdio.h>
int main()
{
    int n,i,temp;
    scanf("%d",&n);
    temp=n;
    while(n>=1)
    {
        for(i=temp;i>=1;i--)
        {
            printf("%d ",i);
        }
        n--;
        printf("
");
    }
}