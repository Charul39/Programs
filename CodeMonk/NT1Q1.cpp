#include<bits/stdc++.h>
#define lld long long int
using namespace std;

vector<lld> sieve(lld n)
{
  bool v[n+1];
  std::vector<lld> prm;
  lld cnt = 0;
  memset(v,true,n);
  v[1] = false;
  prm.push_back(cnt);
  for(lld i=1;i*i<n;i++)
  {
    if(v[i])
    {
      for(lld j=i*i;j<n;j+=i)
        v[j] = false;
      cnt++;
    }
    prm.push_back(cnt);
  }
  return prm;
}

int main()
{
  lld t,n=1e6+10;
  cin >> t;
  std::vector<lld> siv;
  siv = sieve(n);
  while(t--)
  {
    lld i,l,r,ans;
    cin >> l >> r;
    if(l<r)
        printf("%lld\n",siv[r] - siv[l-1] );
    else
        printf("%lld\n",siv[l] - siv[r-1]);
  }
  return 0;
}
