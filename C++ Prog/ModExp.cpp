#include <iostream>
using namespace std;
typedef long long int lld;

lld modexp (lld x, lld n, lld m)
{
  lld res = 1;
  x = x%m;
  while(n>1)
  {
    if(n&1) // odd
      res = (res*x)%m;
    n >>= 1;
    x = (x*x)%m;
  }
  return res;
}

int main()
{
  lld x,n,m;
  cout << "Enter Number : ";
  cin >> x;
  cout << "Enter Exponent : ";
  cin >> n;
  cout << "Enter Modulus : ";
  cin >> m;
  cout << "Result : " << modexp(x,n,m);
}
