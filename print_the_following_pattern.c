#include<stdio.h>
int main()
{
    int n,i,j,arr[100];
    int ch;
    scanf("%d",&n);
    ch=65+n-1;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%c ",ch);
        }
        ch--;
        printf("
");
    }
}
