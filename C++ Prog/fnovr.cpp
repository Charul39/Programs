#include<iostream>
using namespace std;

class fnovr
{
  public:
  void print(char);
  void print(int);
  void print(double);
};

void fnovr :: print(char a)
{
  cout << "Printing character " << a << endl;
}
void fnovr :: print(int x)
{
  cout << "Printing integer " << x << endl;
}
void fnovr :: print(double y)
{
  cout << "Printing float number " << y << endl;
}
int main()
{
  fnovr A;
  A.print('c');
  A.print(9);
  A.print(1.05);
  return 0;
}
