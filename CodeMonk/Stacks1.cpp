#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
  lld t;
  cin >> t;
  while(t--)
  {
    lld n,id0,i,temp,y,p=0;
    stack <lld> spush,spop;
    cin >> n >> id0;
    spush.push(id0);
    for(i=0;i<n;i++)
    {
      char ch;
      lld val;
      cin >> ch;//character
      if(ch=='P')
      {
        cin >> val;//value
        spush.push(val);
        p = 0;
      }
      else
      {
        if(y==ch)
        {
          if(p==0)
            p = 1;
          else
            p = 0;
        }
        if(p==0)//even B
        {
          spop.push(spush.top());
          spush.pop();
        }
        else//ood B
        {
          spush.push(spop.top());
          spop.pop();
        }
      }
      y = ch;
    }
    cout << "Player " << spush.top() << endl;
  }
  return 0;
}
