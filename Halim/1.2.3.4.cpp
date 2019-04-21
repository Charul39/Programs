#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
  int n,a;
  cout << "Enter N Numbers : ";
  cin >> n;
  set <int> s;
  set <int> ::iterator it;
  for(int i=0;i<n;i++)
  {
    cin >> a;
    s.insert(a);
  }
  //sort(s.begin(),s.end());
  for(it = s.begin();it!=s.end();it++)
    cout << *it << " ";
  return 0;
}
