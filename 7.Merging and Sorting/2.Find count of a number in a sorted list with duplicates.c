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
    int count=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]==k)
      {
        count++;
      }
    }
    printf("%d\n",count);
  }
    return 0;
}
