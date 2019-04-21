#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
  std :: vector < pair <lld, lld> > v;
  lld n,k,i;
  cin >> n >> k;
  lld a[n];
  for(i=0;i<n;i++)
  {
    cin >> a[i];
    v.push_back(make_pair(a[i]%k,i));
  }
  sort(v.begin(), v.end());
  for(i=0;i<n;i++)
    cout << a[v[i].second] << " ";
  return 0;
}
