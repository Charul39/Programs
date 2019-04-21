#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
  int n,m;
  cout << "Enter N,M : ";
  cin >> n >> m;
  int arr[n][m],i,j,k,l,max = INT_MIN;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      cin >> arr[i][j];
      if(i>0)
        arr[i][j] += arr[i-1][j];
      if(j>0)
        arr[i][j] += arr[i][j-1];
      if(i>0 && j>0)
        arr[i][j] -= arr[i-1][j-1];
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      for(k=i;k<n;k++)
      {
        for(l=j;l<m;l++)
        {
          int s = arr[k][l];
          if(i>0)
            s -= arr[i-1][l];
          if(j>0)
            s -= arr[k][j-1];
          if(i>0 && j>0)
            s += arr[i-1][j-1];
          if(s > max)
            max = s;
        }
      }
    }
  }
  cout << "Max = " << max << endl;
  return 0;
}
