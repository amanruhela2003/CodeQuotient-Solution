#include <stdio.h>
/* Include other headers as needed */
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int m;
  scanf("%d",&m);
  while(m--){
    rotate();
    printf("\n");
  }
    return 0;
}
void rotate()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int k;
  scanf("%d",&k);
  k=k%n;
  k=n-k;
 // printf("%d %d",n,k);
  int temp[n];
  for(int i=0;i<n;i++)
  {
    temp[((i+k)%n)]=arr[i];
  }
  for(int i=0;i<n-1;i++)
  {
    printf("%d ",temp[i]);
  }
  printf("%d",temp[n-1]);
}
