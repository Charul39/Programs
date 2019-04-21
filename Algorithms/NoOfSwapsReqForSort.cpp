#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int minSwaps(int A[], int N)
{
    int i,ans=0;
    vector<pair<int,int> > v;
    for(i=0;i<N;i++)
        v.push_back(make_pair(A[i],i));
    sort(v.begin(),v.end());
    bool vis[N];
    memset(vis,0,sizeof(vis));
    for(i=0;i<N;i++)
    {
        if(vis[i] || v[i].second==i)
            continue;
        int cz=0,j=i;
        while(!vis[j])
        {
            vis[j]=1;
            j = v[j].second;
            cz++;
        }
        ans += cz-1;
    }
    return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  lld t;
  cin >> t;
  while(t--)
  {
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
      cin >> a[i];
    cout << minSwaps(a,n) << endl;
  }
  return 0;
}
