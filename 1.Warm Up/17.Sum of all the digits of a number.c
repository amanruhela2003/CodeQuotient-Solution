#include <stdio.h>
/* Include other headers as needed */
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n,m;
  scanf("%d",&m);
  for(int i=1;i<=m;i++)
  {
   	scanf("%d",&n);
    sum(n);
    printf("\n");
  }
    return 0;
}
void sum(int num)
{
  int sum=0;
  while(num!=0)
  {
    sum=sum+num%10;
    num=num/10;
  }
  printf("%d",sum);
}
