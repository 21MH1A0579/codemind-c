#include<stdio.h>
#include<math.h>
int main()
{
    int x,t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int s=0,c=0;
        scanf("%d",&x);
        int a[x];
        for(i=0;i<x-1;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<x-1;i++)
        {
            s=s+a[i];
        }
        for(j=1;j<=x;j++)
        {
            c+=j;
        }
        printf("%d
",abs(c-s));
    }
}