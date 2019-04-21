#include<bits/stdc++.h>
#define lld long long int
using namespace std;
lld a[100][100];

void ffa(lld x, lld y, lld n, lld m, lld k_pre, lld k)
{
  if(x>=n || y>=m || x<0 || y<0)
    return;
  a[x][y] = k;
  if(a[x+1][y] == k_pre)
    ffa(x+1,y,n,m,k_pre,k);
  if(a[x-1][y] == k_pre)
    ffa(x-1,y,n,m,k_pre,k);
  if(a[x][y+1] == k_pre)
    ffa(x,y+1,n,m,k_pre,k);
  if(a[x][y-1] == k_pre)
    ffa(x,y-1,n,m,k_pre,k);
}

int main()
{
  ios_base::sync_with_stdio(false);
  lld t;
  cin >> t;
  while(t--)
  {
    lld n,m,i,j,x,y,k;
    cin >> n >> m;
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        cin >> a[i][j];
    }
    cin >> x >> y >> k;
    ffa(x,y,n,m,a[x][y],k);
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
