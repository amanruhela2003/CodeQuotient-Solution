/*     
 * Complete the 'counterDiagonal' function below.
 * Print the counter diagonal traversal of the matrix, seperated by space
 * @params
 *   mat -> square matrix of size (n x n) 
 *   n -> integer denoting size of square matrix
 */
void counterDiagonal(int mat[N][N], int n) {
  // Write your code here
  for(int col=0;col<n;col++)
  {
    int i=0,j=col;
    while(j>=0 &&  i<n)
    {
      printf("%d ",mat[i][j]);
      j--;
      i++;
    }
  }
  for(int row=1;row<n;row++)
  {
    int i=row,j=n-1;
    while(i<n &&j>=0)
    {
      printf("%d ",mat[i][j]);
      j--;
      i++;
    }
  }
}
