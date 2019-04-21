#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j;
  cin >> n;
  bool arr[n];
  memset(arr,true,n);
  arr[0]=false;
  for(i=1;i<n;i++)
  {
    if(arr[i]==false)
      continue;
    for(j=i+1;j<n;j++)
    {
      if((j+1)%(i+1)==0)
         {
           arr[j]=false;
         }
    }
  }
  for(i=0;i<n;i++)
  {
    if(arr[i]==true)
      cout << i+1 << " ";
  }
}
