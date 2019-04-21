#include <iostream>
using namespace std;

int main()
{
  int i,n,x;
  cout << "Enter Number : ";
  cin >> n;
  int F[n];
  for(i=0;i<n;i++)
  {
    if(F[i]%5 == 0)
    {
      x = i;
      break;
    }
  }
  for(i=0;i<n;i++)
  {
    if(F[i]%7 == 0)
    {
      x = i;
      break;
    }
  }
  for(i=x;i<n;i++)
  {
    cout << F[i] << " ";
  }
  cout << endl;
  for(i=1;i<n/x;i++)
  {
    cout << F[i*x] << " ";
  }
  cout << endl;
  for(i=0;i<n;i++)
  {
    if(F[i]%11 == 0)
    {
      x = i;
      break;
    }
  }
  for(i=x;i<n;i+=x)
  {
    cout << F[i] << " ";
  }
  cout << endl;
}
