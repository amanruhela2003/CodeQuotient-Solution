#include <stdio.h>
/* Include other headers as needed */
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int year;
  scanf("%d",&year);
  if((year%4==0) && ((year%400==0) || (year%100!=0)))
     {
       printf("Leap Year");
     }
     else
     {
       printf("Not a Leap Year");
     }
    return 0;
}
