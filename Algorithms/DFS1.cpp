#include<bits/stdc++.h>
#define lld long long int
using namespace std;

void dfs(int s, bool vis[], vector<vector<int> > vt)
{
  std::stack <int> st;
  st.push(s);
  vis[s] = 1;
  while(!st.empty())
  {
    int curr = st.top();
    cout << curr << " ";
    st.pop();
    for(lld i=0;i<vt[curr].size();i++)
    {
      if(vis[vt[curr][i]] == 0)
      {
        vis[vt[curr][i]] = 1;
        st.push(vt[curr][i]);
      }
    }
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
