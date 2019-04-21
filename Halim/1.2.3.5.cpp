#include<bits/stdc++.h>
#define lld long long int
using namespace std;

struct node
{
  int d,m,y;
};

bool fn(struct node a, struct node b)
{
  if(a.m<b.m)
    return true;
  if(a.m==b.m && a.d<b.d)
    return true;
  if(a.m==b.m && a.d==b.d && a.y<b.y)
    return true;
  return false;
}

int main()
{
  int n;
  cin >> n;
  struct node arr[n];
  for(int i=0;i<n;i++)
    cin >> arr[i].d >> arr[i].m >> arr[i].y;
  sort(arr,arr+n,fn);
  for(int i=0;i<n;i++)
    cout << arr[i].d << " " << arr[i].m << " " << arr[i].y << endl;
  return 0;
}
