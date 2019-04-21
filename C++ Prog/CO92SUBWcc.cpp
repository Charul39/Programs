#include <iostream>
#include <math.h>
#define lld long long int
using namespace std;

int main()
{
  lld t,i,arr[100000];
  cin >> t;
  arr[0] = 0;
  for(i=1;i<100000;i++)
  {
    arr[i] = arr[i-1] + i;
  }
  while(t--)
  {
    lld x,p=0,i=1;
    cin >> x;
    while(arr[i] < x)
    {
      i++;
    }
    cout << arr[i] << endl;
  }
}
