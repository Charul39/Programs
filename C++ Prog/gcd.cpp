#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

lld gcd(lld a, lld b)
{
  if(b==0)
    return a;
  else
    return gcd(b, a%b);
}

int main()
{
  lld a,b;
  cout << "Enter No.'s : ";
  cin >> a >> b;
  cout << "GCD(" << a << "," << b << ") = " << gcd(a,b) << endl;
  cout << __gcd(a,b); // Inbuilt Function
}
