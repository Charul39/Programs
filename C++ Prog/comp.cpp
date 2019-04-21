#include<iostream>
#include<cstring>
using namespace std;

class compare
{
   char str1,str2;
   public:
   void get()
   {
     cout << "Enter strings" << endl;
     cin >> str1 >> str2;
   }
   void operator == (compare);
};

void compare :: operator == (compare a)
{
   if(strcmp(str1,str2)==0)
     cout << "Equal Strings" << endl;
   else 
     cout << "Strings not equal" << endl;
}
int main()
{
  compare A;
  A.get();
  ==A;
  return 0;
}
