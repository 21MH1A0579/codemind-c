#include<stdio.h>
int main()
{
	int n,arr[100],i,j,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<i;j++)
		{
		     if(arr[i]==arr[j])
			 {
			 	c=1;
		     }	
		}
		if(c==0)
		{
			printf("%d ",arr[i]);
		}
	}
}