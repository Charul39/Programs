#include <iostream>
using namespace std;
#define lld long long int
int main()
{
  lld t,i;
  cin >> t;
  for(i=0;i<t;i++)
  {
    lld n,j,p=1,q=1;
    cin >> n;
    lld l[n],g[n];
    for(j=0;j<n;j++)
    {
      cin >> l[j];
    }
    for(j=0;j<n;j++)
    {
      cin >> g[j];
    }
    for(j=0;j<n;j++)
    {
      if(l[j]>g[j])
      {
        p = 0;
        break;
      }
    }
    for(j=0;j<n;j++)
    {
      if(l[j]>g[n-j-1])
      {
        q = 0;
        break;
      }
    }
    if(p==0 && q==0)
      cout << "none" << endl;
    else if(p==0 && q==1)
      cout << "back" << endl;
    else if(p==1 && q==0)
      cout << "front" << endl;
    else if(p==1 && q==1)
      cout << "both" << endl;
  }
}
