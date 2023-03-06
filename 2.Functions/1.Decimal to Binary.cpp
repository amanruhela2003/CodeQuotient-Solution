// print the binary equivalent of the given number 'n'
void decimalToBinary(int n) {
  // Write your Code here
  int binaryNum[32];
  int i=0;
  while(n>0)
  {
    binaryNum[i]=n%2;
    n=n/2;
    i++;
  }
  for(int j=i-1;j>=0;j--)
  {
    printf("%d",binaryNum[j]);
  }
}
