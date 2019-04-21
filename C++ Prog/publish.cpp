#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class publication
{
  public:
  char title[20];
  float price;
  void get_data1()
  {
     cout << "BOOK :" << endl << "Enter the Title : ";
     cin >> title;
     cout << "Enter price of the Book : ";
     cin >> price;
  }
  void display1()
  {
     cout << "TITLE : " << title << endl;
     cout << "PRICE : " << price << endl;
  }
};

class sales
{
  public:
  float arr[3];
  void get_data2()
  {
     for(int i=0;i<3;i++)
     {
        cout << "Enter sales of " << i+1 << " month : ";
        cin >> arr[i];
     }
  }
  void display2()
  {
     cout << "Total sale of 3 months : ";
     cout << arr[0] + arr[1] + arr[2] << endl;
  }
};

class book : public publication, public sales
{
  public:
  int no_pages;
  void get_data3()
  {
     cout << "Enter number of pages : ";
     cin >> no_pages;
     get_data2();
  }
  void display3()
  {
     cout << "BOOK :" << endl;
     cout << "No. of Pages of book are : " << no_pages << endl;
     display2();
  }
};

class tape : public sales
{
  public:
  float play_time;
  void get_data5()
  {
     cout << "TAPE : " << endl;
     cout << "Enter the length of tape : ";
     cin >> play_time;
     get_data2();
  }
  void display5()
  {
     cout << "TAPE : " << endl;
     cout << "Playing time of Tape is " << play_time << " minutes" << endl;
     display2();
  }
};

class pamplet : public publication
{};

class notice : public pamplet
{
  public:
  char whom[20];
  void  get_data4()
  {
     get_data1();
     cout << "Enter name of customer : ";
     cin >> whom;
  }
  void display4()
  {
     cout << "Customer Name : " << whom << endl;
     display1();
  }
};

int main()
{
  notice a1;
  book b1;
  tape t1;
  a1.get_data4();
  b1.get_data3();
  t1.get_data5();
  a1.display4();
  b1.display3();
  t1.display5();
  return 0;
}
