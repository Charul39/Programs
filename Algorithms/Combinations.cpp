#include<bits/stdc++.h>
#define lld long long int
using namespace std;

void subsets(lld a, lld b, vector<lld> v)
{
  if(b==0)
  {
    for(lld i=0;i<v.size();i++)
      cout << v[i] << " ";
    cout << endl;
    v.clear();
    return;
  }
  else
  {
    subsets(a,b-1,v);
    v.push_back(a-1);
    subsets(a,b-1,v);
    v.pop_back();
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  lld a,b;
  cin >> a >> b;
  std::vector<lld> v;
  subsets(a,b,v);
  return 0;
}
