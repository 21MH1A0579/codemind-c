#include <stdio.h>
int main()
{
 int arr[100], size,count,i,j;
 scanf("%d",&size);
 for(i=0;i<size;i++)
{
 scanf("%d",&arr[i]);
 }
 for(i=0; i<size; i++)
 {
   count=0;
   for(j=0;j<size;j++)
    {
     if(arr[i]==arr[j])
     {
      count++;
     }
    }
  if(count>1)
  {
  printf("%d ",arr[i]);
   break;
  }
 }
}