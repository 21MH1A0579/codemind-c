#include<stdio.h>
int main()
{
    int n,i,j,max=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++) 
    {
        for(int j=i+1; j<n; j++)
        {
            int dif = arr[j] - arr[i];
            if (dif > max)
            {
                max= dif;
            }
        }
    }
    printf("%d",max);
}