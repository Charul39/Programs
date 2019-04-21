#include <iostream>
using namespace std;

int main()
{
  int t,i;
  cin >> t;
  for(i=0;i<t;i++)
  {
    long long int n,U,D,d,j,cnt=0,k;
    cin >> n >> U >> D;
    long long int arr[n];
    for(j=0;j<n;j++)
    {
      cin >> arr[j];
    }
    for(j=0;j<n-1;j++)
    {
      d = arr[j+1]-arr[j];
      if(d==0) //Same Height
        continue;
      else if(d>0 && d>U) //Upper Hill
        break;
      else if(d<0) //Lower Hill
      {
        if(-d>D && cnt!=0)
          break;
        else if(-d>D && cnt==0) //Using Parachute
        {
          cnt = 1;
          k=j+1;
          while(arr[j]-arr[k]>0 && k!=n)
          {
            k++;
          }
          j=k-2;
        }
      }
    }
    cout << j+1;
    if(i!=t)
      cout << endl;
  }
}
