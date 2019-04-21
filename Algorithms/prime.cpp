#include<iostream>
using namespace std;
void sieve(int r,int l)
{
  int i,j,count=0;
  bool arr[r-l+1];
  memset(arr,true,r-l+1);
  arr[0]=false;
  for(i=2;i*i<r-l+1;i++)
  {
    if(arr[i-1]==true)
    {
      for(j=i*i;j<r-l+1;j+=i)
      {
        arr[j-1]=false;
      }
    }
  }
  for(i=0;i<r-l+1;i++)
  {
    if(arr[i-1]==true)
      count++;
    if(count==k)
    {
      return count;
    }
  }
}
int main()
{
  long long int q,i;
  cin >> q;
  for(i=0;i<q;i++)
  {
    long long int k,r=0,l=floor(sqrt(5000000));
    cin >> k;
    while (sieve(r,l)!=k)
    {
      r = l+1;
      l = l;
    }
}
