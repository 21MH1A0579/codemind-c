#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//5
    {
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}