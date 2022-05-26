#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n>=3 &&n<=100)
    {
        
        for(i=1;i<=n;i++)
        {
            for(j=i;j>0;j--)
            {
            printf("*");
            
            }
        printf("
");
        }
        for(i=1;i<n;i++)
        {
             for(j=n;j>i;j--)
             {
                printf("*");
              }
        printf("
");
        }
    }
    else
    {
        printf("The pattern is not possible");
    }
}
    
    
    
