void isArmstrong(int num)
{
  int org=num;
  float res=0.0;
  int rem,n=0;
  //Store No of Digits
  for(org=num;org!=0;++n)
  {
    org=org/10;
  }
  for(org=num;org!=0;org/=10)
  {
    rem=org%10;
    res=res+pow(rem,n);
  }
  ((int)res==num)?printf("yes"):printf("no");
}
