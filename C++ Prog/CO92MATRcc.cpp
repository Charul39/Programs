#include <iostream>
#define lld long long int
using namespace std;

int main()
{
  lld t;
  cin >> t;
  while(t--)
  {
    lld n,m,i,j;
    cin >> n >> m;
    lld mat[n][m];
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
        cin >> mat[i][j];
      }
    }
    if(mat[0][0]==-1) //1st element unknown
      mat[0][0] = 1;
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
        if(mat[i][j]==-1)
        {
          if(i==0) //1st Row element
            mat[i][j] = mat[i][j-1];
          else if(j==0) //1st Coloumn element
            mat[i][j] = mat[i-1][j];
          else //Else
          {
            if(mat[i-1][j] > mat[i][j-1])
              mat[i][j] = mat[i-1][j];
            else
              mat[i][j] = mat[i][j-1];
          }
        }
        if(i==0 && j==0)
          continue;
        else if(i==0 && mat[i][j] < mat[i][j-1])
        {
          cout << i << j << "-1" << endl;
          goto ex;
        }
        else if(j==0 && mat[i][j] < mat[i-1][j])
        {
          cout << "-1" << endl;
          goto ex;
        }
        else if(i!=0 && j!=0 && mat[i][j] < mat[i][j-1] || j==0 && mat[i][j] < mat[i-1][j])
        {
          cout << "-1" << endl;
          goto ex;
        }
      }
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
        cout << mat[i][j] << " ";
      }
      cout << endl;
    }
    ex:
    {}
  }
  return 0;
}
