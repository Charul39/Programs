#include<bits/stdc++.h>
#define lld long long int
using namespace std;

void subsets(lld a[], lld n, lld x, vector<lld> v)
{
  if(x==n)
  {
    for(lld i=0;i<v.size();i++)
      cout << v[i] << " ";
    cout << endl;
    v.clear();
    return;
  }
  else
  {
    subsets(a,n,x+1,v);
    v.push_back(a[x]);
    subsets(a,n,x+1,v);
    v.pop_back();
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  lld n,i;
  cin >> n;
  lld a[n];
  for(i=0;i<n;i++)
    cin >> a[i];
  std::vector<lld> v;
  subsets(a,n,0,v);
  return 0;
}
