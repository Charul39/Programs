#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  lld n,i,j,max=0;
  cin >> n;
  lld arr[n],lis[n];
  for(i=0;i<n;i++)
  {
    cin >> arr[i];
    lis[i] = 1;
  }
  for(i=1;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      if(arr[i]>arr[j] && lis[i] < lis[j]+1)
        lis[i] = lis[j]+1;
    }
  }
  for(i=0;i<n;i++)
  {
    if(lis[i]>max)
      max = lis[i];
  }
  cout << max;
  return 0;
}
