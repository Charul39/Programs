#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class acc
{
   public:
   char name[25];
   int type,acno;
   void getdetails()
   {
      cout << "Enter your Name" << endl;
      cin >> name;
      cout << "Enter your Account Number" << endl;
      cin >> acno;
      cout << "Enter Account Type" << endl << "Press 1 : Savings Account" << endl << "Press 2 : Current Account" << endl;;
      cin >> type;
   }

};
class saving : public acc
{
   public:
   float am,p,dep,r,n,wit;
   int choice;
   saving()
   {
      r=0.06;
      n=1.5;
   }
   void get1()
   {
      cout << "Enter Principal Amount" << endl;
      cin >> p;
   }
   void showci()
   {
      if(am<1000)
      {
         cout << "Your Balance is LOW!!!!!!" << endl;
      }
      cout << "Compound Intrest is " << am - p << endl;
   }
   void display()
   {
      cout << "Press 1 : Deposit" << endl << "Press 2 : Withdrawal" << endl << "Press 3 : Balance" << endl;
      cout << "Enter Choice" << endl;
      cin >> choice;
   switch(choice)
   {
      case 1: cout << "Enter Amount to be Deposited" << endl;
              cin >> dep;
              am+=dep;
              cout << "Your Current Balance is " << am << endl;
              break;
      case 2: cout << "Enter Amount to be Withdrawal" << endl;
              cin >> wit;
              if(am-wit<1000)
              {
                 cout << "Not enough balance" << endl;
              }
              else
                 am-=wit;
              cout << "Your Current Balance is " << am << endl;
              break;
      case 3: cout << "Your Current Balance is " << am << endl;
              break;
      default: cout << "Invalid entry" << endl;
   }
   }
};
class current : public acc
{
   public:
   int x;
   void get2()
   {
      cout << "Enter your current balance" << endl;
      cin >> x;
   }
   void show2()
   {
      cout << "Current Balance = " << x << endl;
   }
};

int main()
{
   saving a1;
   current b1;
   a1.getdetails();
   if(a1.type == 1)
   {
      a1.get1();
      a1.am = a1.p*pow((1+a1.r),a1.n);
      a1.showci();
      a1.display();
   }
   else
   {
      b1.get2();
      b1.show2();
   }
   return 0;
}
