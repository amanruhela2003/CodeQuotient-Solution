#include <stdio.h>
/* Include other headers as needed */
#include<limits.h>
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int max1,max2; 
  max1=arr[0];
  max2=arr[1];
  if(max1<max2)
  {
    int temp=max1;
    max1=max2;
    max2=temp;
  }
  else if(max1==max2)
  {
    max2=0;
  }
  for(int i=2;i<n;i++)
  {
    if(arr[i]>max1)
    {
      max2=max1;
      max1=arr[i];
    }
    else if(arr[i]>max2 && arr[i]!=max1)
    {
      max2=arr[i];
    }
  }
  printf("%d",max2);
    return 0;
}
