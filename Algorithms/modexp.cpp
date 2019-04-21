#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int modexp(int x,int n)
{
  if(n==0)
    return 1;
  else
  {
    if(n%2==0)
      return modexp(x,n/2)*modexp(x,n/2);
    else
      return x*modexp(x,n/2)*modexp(x,n/2);
  }
}
int main()
{
  int x,n,m;
  cin >> x >> n >> m;
  cout << modexp(x,n)%m;
}
