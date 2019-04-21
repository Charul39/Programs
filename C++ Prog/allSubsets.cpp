#include <iostream>
using namespace std;

void possibleSubsets(char A[], int N)
    {
        for(int i = 0;i < (1 << N); ++i)
        {
            for(int j = 0;j < N;++j)
                if(i & (1 << j))
                    cout << A[j] << ' ';
            cout << endl;
    }
    }

int main()
{
  int n;
  cin >> n;
  char arr[n];
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }
  possibleSubsets(arr,n);
  return 0;
}
