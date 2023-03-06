long fact(int n) {
  // Write your code here
  long fact=1;
  for(int i=n;i>=1;i--)
  {
    fact=fact*i;
  }
  return fact;
}
