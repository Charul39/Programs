#include <iostream>
using namespace std;

int main()
{
  bool p,q;
  cout << "Enter truth value of p : ";
  cin >> p;
  cout << "Enter truth value of q : ";
  cin >> q;
  cout << "Conjunction : " << p&&q << endl;
  cout << "Disjunction : " << p||q << endl;
  cout << "Exclusive : " << p^q << endl;
  cout << "Conditional : " << (!p)||q << endl;
  cout << "Biconditional : " << ((!p)||q) && ((!q)||p) << endl;
}
