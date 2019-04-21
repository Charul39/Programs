#include<bits/stdc++.h>
#define lld long long int
using namespace std;
lld id[100005];
void initialize()
{
  for(lld i=0;i<100005;i++)
    id[i] = i;
}

lld root(lld x)
{
  while(id[x] != x)
  {
    id[x] = id[id[x]];
    x = id[x];
  }
  return x;
}

void union1(lld x, lld y)
{
  lld p = root(x);
  lld q = root(y);
  id[p] = id[q];
}

int main()
{
  ios_base::sync_with_stdio(false);
  initialize();
  lld nodes,edges,x,y,cost,mincost=0,i;
  cin >> nodes >> edges;
  pair< lld, pair<lld, lld> > pr[edges];
  for(i=0;i<edges;i++)
  {
    lld u,v,w;
    cin >> u >> v >> w;
    pr[i] = make_pair(w, make_pair(u,v));
  }
  sort(pr,pr+edges);
  for(i=0;i<edges;i++)
  {
    x = pr[i].second.first;
    y = pr[i].second.second;
    cost = pr[i].first;
    if(root(x) != root(y))
    {
      union1(x,y);
      mincost += cost;
    }
  }
  cout << mincost;
  return 0;
}
