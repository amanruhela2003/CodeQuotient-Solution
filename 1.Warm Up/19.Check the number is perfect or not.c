#include <stdio.h>
int main()
{
  int num,rem,sum;
  scanf("%d",&num);
  for(int i=1;i<num;i++)
  {
    rem=num%i;
    if(rem==0)
    {
      sum=sum+i;
    }
  }
  (sum==num)?printf("yes"):printf("no");
    return 0;
}
