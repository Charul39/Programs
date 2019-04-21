#include <iostream>
using namespace std;
#define lld long long int

int main()
{
  lld t,i;
  cin >> t;
  for(i=0;i<t;i++)
  {
    lld n,j,loss=0,ip=0,dp=0;
    cin >> n;
    lld p[n],q[n],d[n];
    for(j=0;j<n;j++)
    {
      cin >> p[j] >> q[j] >> d[j];
      ip = p[j]*(1+(d[j]/100)); //increased price
      dp = ip*(1-(d[j]/100)); //discounted price
      loss += q[j]*(p[j] - dp);
      ip = 0;
      dp = 0;
    }
    cout << loss << endl;
  }
}
