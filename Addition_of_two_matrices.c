#include<stdio.h>
int main()
{
    int num,i,j,a[100][100],b[100][100],sum;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
          scanf("%d",&b[i][j]);
        } 
     
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
           sum=a[i][j]+b[i][j];
           printf("%d",sum);
           if(j<num-1)
           {
               printf(" ");
           }
        } 
        printf("
");
     
    }
}