void partitionArray(int arr[], int n, int x)
{
  int i, j, temp;
  i = 0;
  j = n-1;
  while (i < j)
  {
    while (i<n && arr[i] <=x)
       i++;
    while (j>=0 && arr[j] > x)
       j--;
   if(i<j)
   {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
   }
    i++;
    j--;
  }  
}
