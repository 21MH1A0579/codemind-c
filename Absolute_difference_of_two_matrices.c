#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100][100],b[100][100],i,j,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            diff=a[i][j]-b[i][j];
            printf("%d",abs(diff));
            if(j<n-1)
            {
                printf(" ");
            }
            
        }
     printf("
");
    }
}