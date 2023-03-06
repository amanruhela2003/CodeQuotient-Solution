#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n;
  scanf("%d",&n);
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
