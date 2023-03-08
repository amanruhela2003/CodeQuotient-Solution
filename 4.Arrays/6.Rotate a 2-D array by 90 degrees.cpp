#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define N 50
void print(int arr[N][N],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(j==n-1)
      {
        cout<<arr[i][j];
      }
      else
      {
        cout<<arr[i][j]<<" ";
      }
    }
    cout<<'\n';
  }
}
void rotate(int arr[N][N],int n)
{
  int res[N][N];
  int x=0,m=0;
  for(int j=0;j<n;j++)
  {
    m=0;
    for(int i=n-1;i>=0;i--)
    {
      res[x][m]=arr[i][j];
      m++;
    }
    x++;
  }
  //cout<<x<<m;
  print(res,n);
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[N][N];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        cin>>arr[i][j];
      }
    }
    rotate(arr,n);
    cout<<'\n';
  }
   return 0;
}
