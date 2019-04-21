//Using DFS
#include<bits/stdc++.h>
#define lld long long int
using namespace std;
lld adj[10005][10005],vis[10005];
std::vector<lld> vt;
void topo(lld cur, lld n)
{
  vis[cur] = true;
  for(lld i=0;i<n;i++)
  {
    if(adj[cur][i]==1 && vis[i]==0)
      topo(i,n);
  }
  vt.push_back(cur);
}

int main()
{
  lld n,m,i,j,u,v,cur;
  cin >> n >> m;
  for(i=0;i<m;i++)
  {
    cin >> u >> v;
    adj[u][v] = 1;
  }
  topo(0,n);
  for(i=0;i<n;i++)
    cout << vt[i] << " ";
  return 0;
}
