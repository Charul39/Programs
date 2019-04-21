//Using BFS Traversal
#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
  lld n,m,i,j,u,v,cur;
  cin >> n >> m;
  lld adj[n+1][n+1]={0},vis[n]={0};
  lld indeg[n]={0};
  for(i=0;i<m;i++)
  {
    cin >> u >> v;
    adj[u][v] = 1;
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(adj[i][j]==1)
        indeg[j]++;
    }
  }
  std::queue<lld> q;
  std::vector<lld> vt;
  for(i=0;i<n;i++)
  {
    if(indeg[i]==0)
    {
      q.push(i);
      vis[i] = 1;
    }
  }
  while(!q.empty())
  {
    cur = q.front();
    q.pop();
    vt.push_back(cur);
    for(j=0;j<n;j++)
    {
      if(adj[cur][j]==1 && vis[j]==false)
      {
        indeg[j]--;
        if(indeg[j]==0)
        {
          q.push(j);
          vis[j] = 1;
        }
      }
    }
  }
  for(i=0;i<n;i++)
    cout << vt[i] << " ";
  return 0;
}
