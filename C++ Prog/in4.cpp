#include<bits/stdc++.h>
using namespace std;
class publication
{
        public:
                string title;
                float price;
void getdata()
        {
        cout<<"Enter the title of book\n";
        cin>>title;
        cout<<"enter the price of book\n";
        cin>>price;
        }
void display()
        {
        cout<<"title of book is "<<title<<endl;
        cout<<"price of book is "<<price<<endl;
        }
};
class sales 
{
public:
float a[3];
void get()
        {
        cout<<"Enter the sales of last three years\n";
        cin>>a[0]>>a[1]>>a[2];
        }
void dis()
        {
        cout<<"The sales of last three years was \n"<<a[0]+a[1]+a[2]<<endl;
        }
};
class pamplet:public publication
{
};
class notice : public pamplet
{
public:
string whom;
void getd()
        {
        cout<<"enter the owner of book \n";
        cin>>whom;
        }
void disd()
        {
        cout<<"owner is \n";

        cout<<whom<<endl;
        }
};
class book : public publication,public sales
{
public:
int pages;
void pg()
{
cout<<"enter the no of pages\n";
cin>>pages;
}
void dispg()
{
cout<<"no of pages in books is ";
cout<<pages<<endl;
}
}; 
class tap: public publication,public sales
{
public:
float playingtime1,playingtime2,playingtime;
void add()
{
cout<<"enter the playing time of first book in minute\n";
cin>>playingtime1;
cout<<"enter the playing time of first book in minute\n";
cin>>playingtime2;
playingtime=playingtime1+playingtime2;
}

};
int main()
{
notice ob;
sales obj;
ob.getdata();
obj.get();
ob.getd();
ob.display();
ob.disd();
obj.dis();

return 0;
}
