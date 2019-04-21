#include<bits/stdc++.h>
#define lld long long int
using namespace std;

bool m[1000][1000];
bool safe(int x, int y, int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    if(m[i][y]==1)
      return false;
    if(m[x][i]==1)
      return false;
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if((i+j==x+y || i-j==x-y) && m[i][j]==1)
        return false;
    }
  }
  return true;
}

bool NQueens(int n)
{
  if(n==0)
    return true;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(!safe(i,j,n))
        continue;
      m[i][j] = 1;
      if(NQueens(n-1))
        return true;
      m[i][j] = 0;
    }
  }
  return false;
}

int main()
{
  ios_base::sync_with_stdio(false);
  lld t;
  cin >> t;
  while(t--)
  {
    int n,i,j;
    cin >> n;
    if(NQueens(n))
    {
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
          if(m[i][j]==1)
            cout << " Q ";
          else
            cout << " X ";
        }
        cout << endl;
      }
    }
  }
  return 0;
}
