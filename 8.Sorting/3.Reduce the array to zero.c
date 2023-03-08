/*
 * Complete the function below with 3 arguments: 
 *   Size of the array.
 *   An integer array of positive integers. 
 *   Pointer to the variable which is used to store the size of the result array.
 * 
 * Return an array which denotes the number of elements reduced during ith operation
 */
int cmpfun(const void *a,const void *b)
{
  return (*(int*)a-*(int*)b);
}
int* reduceArray(int arr_size, int arr[], int *result_size) {
  // Write your code here
  int rem=arr_size;
  qsort(arr,arr_size,sizeof(int),cmpfun);
  for(int i=0;i<arr_size;i++)
  {
    printf("%d\n",rem);
    int count=1;
    while(i+1<arr_size && arr[i]==arr[i+1])
    {
      count++;
      i++;
    }
    rem=rem-count;
  }
}
