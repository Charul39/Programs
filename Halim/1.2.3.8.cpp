#include<bits/stdc++.h>
#define lld long long int
using namespace std;

void swap(char *a, char *b)
{
  char temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void perm(string s, int c)
{
  if(c==9)
    cout << s << endl;
  else
  {
    for(int i=c;i<10;i++)
    {
      swap(s[c],s[i]);
      perm(s,c+1);
      swap(s[c],s[i]);
    }
  }
}

int main()
{
  int n;
  cin >> n
  perm(s,0);
  return 0;
}
