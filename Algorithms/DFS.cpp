#include<bits/stdc++.h>
#define lld long long int
using namespace std;

void dfs(int s, bool vis[], vector<vector<int> > v)
{
  vis[s] = 1;
  cout << s << " ";
  for(int i=0;i<v[s].size();i++)
  {
    if(vis[v[s][i]]==0)
      dfs(v[s][i],vis,v);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  int v,e,s,i;
  cout << "Entre nombre de vertices : ";
  cin >> v;
  cout << "Entre nombre de edges : ";
  cin >> e;
  std::vector<vector<int> > vt(v+1);
  bool vis[v+1]={0};
  for(i=0;i<e;i++)
  {
    lld x,y;
    cin >> x >> y;
    vt[x].push_back(y);
  }
  cout << "Entre le source node : ";
  cin >> s;
  dfs(s,vis,vt);
  return 0;
}
