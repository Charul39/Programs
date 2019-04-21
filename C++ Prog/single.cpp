#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class rollno
{
   public:
   int r;
   rollno() 
   {
      r=0;
   }
   void get();
};
void rollno :: get()
{
   cout << "Enter Roll No." << endl;
   cin >> r;
}
class name : public rollno
{
   char n[25];
   public:
   void getname();
   void show()
   {
      cout << "Name of student having Roll no. = " << r << " is " << n << endl;
   }
};
void name :: getname()
{
   cout << "Enter Name" << endl;
   cin >> n;
}
int main()
{
   name A1;
   A1.get();
   A1.getname();
   A1.show();
   return 0;
}
