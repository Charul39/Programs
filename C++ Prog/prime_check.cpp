#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;
std::vector<lld> v;

bool prime (lld n)
{
  if(n<2)
    return false;
  for(lld i=2 ; i*i<=n ; i++)
  {
    while (n%i == 0)
    {
      v.push_back(i);
      n /= i;
    }
  }
  if (n>1)
    v.push_back(n);
  return true;
}

int main()
{
  lld n;
  cout << "Enter No. : ";
  cin >> n;
  if(prime(n))
    cout << "Is Prime...";
  else
    cout << "Not Prime!!!";
  cout << endl << "Factors : ";
  for (lld i=0; i<v.size() ;i++)
  {
    cout << v[i] << " ";
  }
  return 0;
}
