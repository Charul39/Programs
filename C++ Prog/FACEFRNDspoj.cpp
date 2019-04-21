#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,i;
  cin >> n;
  set<int> ff;
  set<int> :: iterator it;
  vector<int> f;
  for(i=0;i<n;i++)
  {
    long long int fid;
    cin >> fid;
    f.push_back(fid);
    long long int m,j;
    cin >> m;
    for(j=0;j<m;j++)
    {
      long long int id;
      cin >> id;
      ff.insert(id);
    }
  }
  for(i=0;i<f.size();i++)
  {
    if(ff.end() != ff.find(f.at(i))) //Present
      ff.erase(ff.find(f.at(i)));
  }
  cout << ff.size();
}
