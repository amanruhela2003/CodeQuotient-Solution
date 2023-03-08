#include <stdio.h>
/* Include other headers as needed */
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
      if(arr[i]==k)
      {
        printf("%d\n",i);
        break;
      }
      if(i==n-1)
      {
        printf("%d\n",-1);
      }
    }
  }
  return 0;
}
