#include <stdio.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  if(ch>=65 && ch<=90)
  {
    printf("UPPER");
  }
  else
  {
    printf("lower");
  }
    return 0;
}
