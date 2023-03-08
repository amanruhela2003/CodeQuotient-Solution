void printSpiral(int a[ROWS][COLS], int m, int n) {
  // Write your code here
  int i,k=0,l=0;
  while(k<m && l<n)
  {
    for(i=l;i<n;++i)
    {
      printf("%d\n",a[k][i]);
    }
    k++;
    for(i=k;i<m;++i)
    {
      printf("%d\n",a[i][n-1]);
    }
    n--;
    if(k<m)
    {
     	for(i=n-1;i>=l;--i)
        {
          printf("%d\n",a[m-1][i]);
        } 
      m--;
    }
    if(l<n)
    {
      for(i=m-1;i>=k;--i)
        {
          printf("%d\n",a[i][l]);
        }
      l++;
    }
  }
}
