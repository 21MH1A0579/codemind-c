#include<stdio.h>
int main()
{
    int i,j,ac=0,bc=0,a[10],b[10];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                if(a[i]>b[j])
                {
                    ac++;
                }
                else if(a[i]<b[j])
                {
                    bc++;
                }
            }
        }
    }
    printf("%d %d",ac,bc);
}