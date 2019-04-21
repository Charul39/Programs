#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int min(int a, int b)
{
  return (a<b)?a:b;
}

int main()
{
  int v,n;
  cout << "V : ";
  cin >> v;
  cout << "N : ";
  cin >> n;
  int c[n],i,j,dp[v+1][n];
  cout << "C[i] : ";
  for(i=0;i<n;i++)
    cin >> c[i];
  for(i=0;i<n;i++)
    dp[0][i] = 1;
  for(i=1;i<=v;i++)
  {
    for(j=0;j<n;j++)
    {
      int x = (i>=c[j])?dp[i-c[j]][j]:0;
      int y = (j>=1)?dp[i][j-1]:0;
      dp[i][j] = x+y;
    }
  }
  cout << "Answer : " << dp[v][n-1];
  return 0;
}
