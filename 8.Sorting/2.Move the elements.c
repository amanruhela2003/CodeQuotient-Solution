void moveElements(int arr[], int n) {
  // Write your code here
  for(int i=0;i<n;i++)
  {
    if(arr[i]>=0)
    {
      for(int j=i;j>0;j--)
      {
        if(arr[j-1]<0)
        {
          int temp=arr[j];
          arr[j]=arr[j-1];
          arr[j-1]=temp;
        }
        else
          break;
      }
    }
  }
}
