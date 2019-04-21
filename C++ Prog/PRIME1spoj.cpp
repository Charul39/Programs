#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main()
{
  lld i,j,n=1000000;
  bool arr[n];
  memset(arr,true,n);
  arr[0]=false;
  for(i=2;i*i<n;i++)
  {
    if(arr[i-1]) //If Unmarked
    {
      for(j=i*i;j<n;j+=i) //Iterate all multiples of i
      {
        arr[j-1]=false; //Mark it
      }
    }
  }
  lld t;
  cin >> t;
  for(i=0;i<t;i++)
  {
    lld p,q;
    cin >> p >> q;
    for(j=p;j<=q;j++)
    {
      if(arr[j-1])
        cout << j << endl;
    }
    cout << endl;
  }
}
