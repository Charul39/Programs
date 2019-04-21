#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  lld t;
  cin >> t;
  while(t--)
  {
    lld a,b,i,j;
    cin >> a >> b;
    string s1,s2;
    cin >> s1 >> s2;
    lld lcs[a+1][b+1];
    lcs[0][0] = 0;
    for(i=0;i<=a;i++)
      lcs[i][0] = 0;
    for(i=0;i<=b;i++)
      lcs[0][i] = 0;
    for(i=1;i<=a;i++)
    {
      for(j=1;j<=b;j++)
      {
        if(s1[i-1]==s2[j-1])
          lcs[i][j] = lcs[i-1][j-1]+1;
        else
        {
          if(lcs[i-1][j] > lcs[i][j-1])
            lcs[i][j] = lcs[i-1][j];
          else
            lcs[i][j] = lcs[i][j-1];
        }
      }
    }
    cout << lcs[a][b] << endl;
  }
  return 0;
}
