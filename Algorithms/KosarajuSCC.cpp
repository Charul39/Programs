#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int kosaraju(vector<vector<int> > v,int N, int M)
{
  cout << "ds";
    bool vis[M+1];
    int i,j,scc=0;
    memset(vis,0,sizeof(vis));
    vector<int> vt[100001];
    stack<int> st,sx;
    for(i=1;i<=M;i++)
    {
        if(vis[i]==0)
        {
            st.push(i);
            vis[i] = 1;
            while(!st.empty())
            {
                int cur = st.top();
                cout << cur << " ";
                st.pop();
                for(j=0;j<v[cur].size();j++)
                {
                    if(vis[v[cur][j]]==0)
                    {
                        st.push(v[cur][j]);
                        vis[v[cur][j]] = 1;
                    }
                }
            }
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            vt[j].push_back(i);
        }
    }
    memset(vis,0,sizeof(vis));
    while(!st.empty())
    {
        int x = st.top();
        st.pop();
        if(vis[x]==0)
        {
            sx.push(x);
            vis[x] = 1;
            while(!sx.empty())
            {
                int y =sx.top();
                sx.pop();
                for(i=0;i<vt[y].size();i++)
                {
                    if(vis[vt[y][j]==0])
                    {
                        vis[vt[y][j]] = 1;
                        sx.push(vt[y][j]);
                    }
                }

            }
        }
        scc++;
    }
    return scc;
}

int main()
{
  ios_base::sync_with_stdio(false);
  int i,n,m;
  cin >> n >> m;
  vector<vector<int> > v(m+1);
  for(i=0;i<n;i++)
  {
    int x,y;
    cin >> x >> y;
    v[x].push_back(y);
  }
  cout << "sd";
  cout << kosaraju(v,n,m) << endl;
  return 0;
}
