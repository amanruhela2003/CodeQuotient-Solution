int rotationCount(int arr[], int size) {
  // Write your code here
  int count=0;
  for(int i=0;i<size-1;i++)
  {
    if(arr[i+1]<arr[i])
    {
      count=i+1;
      return count;
      break;
    }
    if(i==size-2)
    {
      return 0;
    }
  }
}
