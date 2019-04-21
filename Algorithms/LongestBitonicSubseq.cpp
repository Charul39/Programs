#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  lld n,max=0,i,j;
  cin >> n;
  lld arr[n],lis[n],lds[n];
  for(i=0;i<n;i++)
  {
    cin >> arr[i];
    lis[i] = 1;
    lds[i] = 1;
  }
  for(i=1;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      if(arr[i]>arr[j] && lis[i]<lis[j]+1)
        lis[i] = lis[j]+1;
    }
  }
  for(i=n-2;i>=0;i--)
  {
    for(j=n-1;j>i;j--)
    {
      if(arr[i]>arr[j] && lds[i]<lds[j]+1)
        lds[i] = lds[j]+1;
    }
  }
  for(i=0;i<n;i++)
  {
    if(lis[i]+lds[i]-1 > max)
      max = lis[i]+lds[i]-1;
  }
  cout << max;
  return 0;
}
