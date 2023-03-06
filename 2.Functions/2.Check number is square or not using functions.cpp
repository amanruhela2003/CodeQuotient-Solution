void isSquare(int n)
{
  if(n>=0)
  {
    long long sr=sqrt(n);
    (sr*sr==n)?printf("yes"):printf("no");
  }
  else
  {
    printf("no");
  }
}
