#include <iostream>
#define lld long long int
using namespace std;

int main()
{
  lld t;
  cin >> t;
  while(t--)
  {
    lld n,i,max1,max2,sum1,sum2;
    cin >> n;
    lld a[n],b[n];
    cin >> a[0];
    max1 = a[0];
    sum1 = a[0];
    for(i=1;i<n;i++)
    {
      cin >> a[i];
      sum1 += a[i];
      if(a[i]>max1)
        max1 = a[i];
    }
    cin >> b[0];
    max2 = b[0];
    sum2 = b[0];
    for(i=1;i<n;i++)
    {
      cin >> b[i];
      sum2 += b[i];
      if(b[i]>max2)
        max2 = b[i];
    }
    if(sum1-max1 > sum2-max2)
      cout << "Bob" << endl;
    else if(sum1-max1 < sum2-max2)
      cout << "Alice" << endl;
    else
      cout << "Draw" << endl;
   }
}
