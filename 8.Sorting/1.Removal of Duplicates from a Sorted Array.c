void removeDuplicates(int arr[], int *size) {
  // Write your code here
  int n=*size;
  if(n==0 || n==1)
  {
   return;  
  }
  int temp[*size];
  int j=0;
  for(int i=0;i<n-1;i++)
  {
    if(arr[i]!=arr[i+1])
    {
      temp[j++]=arr[i];
    }
  }
  temp[j++]=arr[n-1];
  for(int i=0;i<j;i++)
  {
    arr[i]=temp[i];
  }
  *size=j;
}
