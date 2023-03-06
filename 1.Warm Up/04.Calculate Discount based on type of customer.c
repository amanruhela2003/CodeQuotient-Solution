#include <stdio.h>
int main()
{
  float amount;
  float res;
  scanf("%f",&amount);
  //printf("%0.2f",amount);
  if(amount<1000)
  {
    printf("%0.2f",amount);
  }
  else if(amount>=1001 && amount<=5000)
  {
    printf("%0.2f",amount-(0.05*amount)); 
  }
  else if(amount>=5001 && amount<=10000)
  {
    printf("%0.2f",amount-(0.10*amount));
  }
  else if(amount>10000)
  {
    if(amount>30000)
    {
      float res=amount-0.17*amount;
      printf("%0.2f",res);
    }
    else{
    printf("%0.2f",amount-(0.15*amount));   
    }
  }
    return 0;
}
