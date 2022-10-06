#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void bubble_sort(int *a,int n)
{
	int i,j,s=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				swap(&a[i],&a[j]);
				s++;
			}
		}
		if(s==0)
		{
			break;
		}
	}
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    for(int k=1;k<n+1;k++)
    {
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(k==a[i])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("%d",k);
            break;
        }
    }
}