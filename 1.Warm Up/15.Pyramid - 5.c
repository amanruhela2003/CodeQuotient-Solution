#include <stdio.h>
/* Include other headers as needed */
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    for(int j=i-1;j>=1;j--)
    {
      printf("%d",j);
    }
    printf("\n");
  }
    return 0;
}
