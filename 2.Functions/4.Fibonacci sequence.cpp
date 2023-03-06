void fib_sequence(int n) {
  // Write your code here
  long a=-1,b=1,c=0;
  while(n--)
  {
    c=a+b;
    printf("%ld\n",c);
    a=b;
    b=c;
  }
}
