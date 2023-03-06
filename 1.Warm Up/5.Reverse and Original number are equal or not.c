#include <stdio.h>
/* Include other headers as needed */
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
  	scanf("%d",&num);
  	//printf("%d",num);
    int org=num;
    int rev=0;
    while(num!=0)
    {
      int digit=num%10;
      rev=rev*10+digit;
      num=num/10;
    }
    if(org==rev)
    {
      printf("Equal");
    }
    else
    {
      printf("Not Equal");
    }
    return 0;
}
