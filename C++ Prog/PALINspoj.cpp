#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int t,i;
  cin >> t;
  for(i=0;i<t;i++)
  {
    string k;
    cin >> k;
    long long int j,c=0;
    for(j=0;j<k.size();j++)
    {
      if(k[j]=='9')
        c++;
    }
    if(c==k.size()) // For Case when all Digits are 9 e.g.9999
    {
      string q[k.size()+1];
      for(p=0;p<q.size();p++)
      {
        if(p==0 || p==q.size()-1)
          q.at(p) = 1;
        else
          q.at(p) = 0;
      }
      cout << q << endl;
      break;
    }
    else
    {
      string left,right;
      left = k.substr(k.size()/2 )
    }
  }
}
