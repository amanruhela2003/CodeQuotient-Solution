int power(int num, int pow){
  // Write your code here
  if(pow>=0)
  {
  int ans=1;
  for(int i=1;i<=pow;i++)
  {
    ans=ans*num;
  }
  return ans;
  }
  return -1;
}
