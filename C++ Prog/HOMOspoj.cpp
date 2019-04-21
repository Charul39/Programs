#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main()
{
  lld n,i,j;
  map<lld , lld> mp;
  map<lld , lld> :: iterator it;
  cin >> n;
  for(i=0;i<n;i++)
  {
    string opr;
    lld k,x=0;
    cin >> opr;
    cin >> k;
    if(opr == "insert")
    {
      mp[k] = x;
      x++; //Counter
    }
    else if(opr == "delete")
    {
       for(j=0;j<mp.size();j++)
       {
         if(mp[j]==k)
         {
           mp.erase(k);
           break;
         }
       }
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
      cout << it->first << " ";
    }
    cout << endl;
  }
}
