#include<iostream>
#define lld long long int
using namespace std;

void insertion_sort(int a[], int n)
{
  for(int i=0;i<n;i++)
  {
    int temp = a[i];
    int j = i;
    while(j>0 && temp<a[j-1])
    {
      a[j] = a[j-1];
      j--;
    }
    a[j] = temp;
  }
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++)
    cin >> a[i];
  insertion_sort(a,n);
  for(int i=0;i<n;i++)
    cout << a[i] << " ";
  return 0;
}
