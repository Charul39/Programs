#include<iostream>
#include <bits/stdc++.h>
#define lld long long int
using namespace std;

lld pow(lld x,lld n,lld m)
{
  lld res=1;
  x = x%m;
  while(n>0)
  {
    if(n%2 != 0)
    {
      res = (res*x)%m;
    }
      n/=2;
      x = (x*x)%m;
  }
  return res;
}

int main()
{
  lld x,m,n;
  cin >> x >> n >> m;
  cout << pow(x,n,m);
}
