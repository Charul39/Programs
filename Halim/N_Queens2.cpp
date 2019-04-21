#include<bits/stdc++.h>
using namespace std;

int c,row[20],ans;

bool safe(int x, int y, int n)
{
  for(int prev=0;prev<y;prev++)
  {
    if((row[prev] == x) || (abs(y-prev)==abs(x-row[prev])))
      return false;
  }
  return true;
}

void nq(int c, int n)
{
  if(c==n)
  {
    ans++;
    for(int i=0;i<n;i++)
      cout << row[i] << "  ";
    cout << endl;
  }
  for(int r=0;r<n;r++)
  {
    if(safe(r,c,n)==true)
    {
      row[c] = r;
      nq(c+1,n);
    }
  }
}

int main()
{
  int n;
  cout << "Enter N : ";
  cin >> n;
  memset(row,0,sizeof(row));
  nq(0,n);
  cout << "Total Possibilities : " << ans << endl;
}
