int gcd(int i, int j)
{
  if(j!=0)
    return gcd(j,i%j);
  else
    return i;
}
