#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class item
{
   public:
   char i[15];
   void get()
   {
      cout << "Enter ITEM name" << endl;
      cin >> i;
   }
};
class cost
{
   public:
   int c,q;
   void getcost()
   {
      cout << "Enter cost of item" << endl;
      cin >> c;
      cout << "Enter quantity" << endl;
      cin >> q;
   }
   int a;
};
class amount : public item, public cost
{
   public:
   void show()
   {
      cout << "------LIST------" << endl;
      cout << "# Item = " << i << endl;
      cout << "# Cost =" << c << endl;
      cout << "# Quantity =" << q << endl;
      cout << "Billing Amount =" << a << endl;
   }
};
int main()
{
   amount A1;
   A1.get();
   A1.getcost();
   A1.a = A1.c*A1.q;
   A1.show();
   return 0;
}
