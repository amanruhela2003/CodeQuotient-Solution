#include <stdio.h>
int main()
{
  float n,m;
  char opt;
  scanf("%f",&n);
  scanf(" %c",&opt);
  scanf("%f",&m);
  switch(opt)
  {
    case '+':
      printf("%0.2f",n+m);
      break;
    case '-':
      printf("%0.2f",n-m);
      break;
    case '*':
      printf("%0.2f",n*m);
      break;
    case '/':
      printf("%0.2f",n/m);
      break;
  }
    return 0;
}
