#include<bits/stdc++.h>
using namespace std;

int minSwaps(int arr[], int n)
{
  int i;
  pair <int, int> pr[n];
  for(i=0;i<n;i++)
  {
    pr[i].first = arr[i];
    pr[i].second = i;
  }
  sort(pr,pr+n);
  std::vector<bool> visit(n, false);
  int ans = 0;
  for(i=0;i<n;i++)
  {
    if(visit[i] || pr[i].second == i)
      continue;
    int csize = 0;
    int j = i;
    while(!visit[j])
    {
      visit[j] = true;
      j = pr[j].second;
      csize++;
    }
    ans += (csize-1);
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin >> arr[i];
  cout << "Minimum Swaps : " << minSwaps(arr,n);
  return 0;
}
