#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
  lld t;
  cin >> t;
  while(t--)
  {
    lld n,i;
    cin >> n;
    lld a[n],curr=0,sum;
    for(i=0;i<n;i++)
      cin >> a[i];
    cin >> sum;
    std::map<int, int> map;
    for(i=0;i<n;i++)
    {
      curr += a[i];
      if(curr==sum)
      {
        cout << "0 to " << i << endl;
        break;
      }
      if(map.find(curr-sum)!=map.end())
      {
        
      }
    }
  }
  return 0;
}
