#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int max(int a, int b)
{
  return (a>b)?a:b;
}

int main()
{
  int n;
  cout << "N : ";
  cin >> n;
  int v[n],w[n],S,i,j;
  cout << "V : ";
  for(i=0;i<n;i++)
    cin >> v[i];
  cout << "W : ";
  for(i=0;i<n;i++)
    cin >> w[i];
  cout << "S : ";
  cin >> S;
  int dp[n+1][S+1];
  for(i=0;i<=n;i++)
    dp[i][0] = 0;
  for(j=0;j<=S;j++)
    dp[0][j] = 0;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=S;j++)
    {
      if(w[i-1]>j)
        dp[i][j] = dp[i-1][j];
      else
        dp[i][j] = max(dp[i-1][j], v[i-1] + dp[i-1][j-w[i-1]]);
    }
  }
  cout << "Answer : " << dp[n][S] << endl;
  return 0;
}
