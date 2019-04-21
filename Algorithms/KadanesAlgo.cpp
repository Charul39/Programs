#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  lld t;
  cin >> t;
  while(t--)
  {
    lld n,i,j,max_so_far=INT_MIN,max_here=0;
    cin >> n;
    lld a[n];
    for(i=0;i<n;i++)
      cin >> a[i];
    for(i=0;i<n;i++)
    {
      max_here += a[i];
      if(max_here > max_so_far)
        max_so_far = max_here;
      if(max_here<0)
        max_here = 0;
    }
    cout << max_so_far << endl;
  }
  return 0;
}
