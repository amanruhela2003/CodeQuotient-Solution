#include <stdio.h>
#include<math.h>
int main()
{
  float p,r,t,ci;
  //printf("Enter Principle: ");
  scanf("%f",&p);
  //printf("Enter rate of interest: ");
  scanf("%f",&r);
  //printf("Enter time: ");
  scanf("%f",&t);
  ci=p*(pow((1+r/100),t));
  printf("%0.1f",ci);
   return 0;
}
