#include<iostream>
using namespace std;
bool board[1000][1000];

bool is_attacked(int x,int y,int N)
{
  int i,j;
  //checking for row and column
  for(i=0;i<N;i++)
  {
    if(board[x][i]==1) //row
      return false;
    if(board[i][y]==1) //column
      return false;
  }
  //checking for diagonals
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      if((i+j == x+y || i-j == x-y) && board[i][j] == 1)
        return false;
    }
  }
  return true;
}

bool N_Queens(int N )
{
  int i,j;
  if (N == 0)                     //All queens have been placed
    return true;
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      if(is_attacked(i,j,N))
        continue;
      board[i][j] = 1;            //Place current queen at cell (i,j)
      if(N_Queens(N-1))    // Solve subproblem
        return true;                   // if solution is found return true
      board[i][j] = 0;        /* if solution is not found undo whatever changes were made i.e., remove  current queen from (i,j)*/
    }
  }
  return false;
}

int main()
{
    int N;
    cin >> N;
    if(N_Queens(N))
    {
        cout << "YES" << endl;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
