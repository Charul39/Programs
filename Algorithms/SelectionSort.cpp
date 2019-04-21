#include<iostream>
#define lld long long int
using namespace std;

void selection_sort (int A[ ], int n)
{
  int minimum;
  for(int i = 0; i < n-1 ; i++)
  {
    minimum = i;
    for(int j = i+1; j < n ; j++ )
    {
      if(A[j] < A[minimum])
        minimum = j;
    }
    swap (A[minimum], A[i]);
  }
}

int main()
{

  return 0;
}
