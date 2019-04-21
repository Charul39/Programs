#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
  int v,n;
  cout << "V,N : ";
  cin >> v >> n;
  int c[n],i,j,dp[v+1];
  cout << "C[i] : ";
  for(i=0;i<n;i++)
    cin >> c[i];
  dp[0] = 0;
  for(i=1;i<=v;i++)
  {
    int min=INT_MAX,x;
    for(j=0;j<n;j++)
    {
      if(i>=c[j])
      {
        x = dp[i-c[j]];
        if(x<min)
          min = x;
      }
    }
    dp[i] = min+1;
  }
  for(i=0;i<=v;i++)
    cout << dp[i] << " ";
  cout << endl;
  cout << "Answer : " << dp[v] << endl;
  return 0;
}
