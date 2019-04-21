#include<iostream>
using namespace std;

class unary
{
  int x;
  public:
  void get();
  void display();
  int operator - ();
};
int unary :: operator - ()
{
  x=-x;
  return x;
}
void unary :: get()
{
  cout << "Enter Number" << endl;
  cin >> x;
}
void unary :: display()
{
  cout 
  cout << x ;
}
int main()
{
  unary t;
  t.get();
  -t;
  t.display();
  return 0;
}
