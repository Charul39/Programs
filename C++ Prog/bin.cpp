#include<iostream>
#include<cstring>
using namespace std;

class binry
{
  char str1[15],str2[5];
  public:
  void get();
  char operator + ();
};
 char binry :: operator + ()
{
  strcat(str1,str2);
  cout <<  str1;
}
void binry :: get()
{
  cout << "Enter string" << endl;
  cin >> str1;
  cin >> str2;
}
int main()
{
  binry t1;
  t1.get();
  +t1;
  return 0;
}
