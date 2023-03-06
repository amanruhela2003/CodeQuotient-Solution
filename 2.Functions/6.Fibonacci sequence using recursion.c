#include <stdio.h>
/* Include other headers as needed */
void fib(int n,int a,int b)
{
  if(n>0)
  {
    fib(n-1,b,a+b);
    printf("%d\n",a+b);
  }
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  scanf("%d",&n);
  fib(n,-1,1);
    return 0;
}
