#include<bits/stdc++.h>
using namespace std;
class person
{
public:
string name;
int age;
        void get1()
        {
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter age :";
        cin>>age;
        }
        void dis1()
        {
        cout<<"NAME : "<<name<<"\nAGE : "<<age<<endl;
        }
};
class students: public person
{
public:
int roll;
string branch;
         void get2()
        {
        cout<<"Enter roll no. : ";
        cin>>roll;
        cout<<"Enter branch : ";
        cin>>branch;
        }
        void dis2()
        {
        cout<<"ROLL NO. : "<<roll<<"\nBRANCH : "<<branch<<endl;
        }

};
class exam : public students
{
public :
int m1,m2,t;
          void get3()
        {
        cout<<"Enter first subject's marks : ";
        cin>>m1;
        cout<<"Enter second subject's marks : ";
        cin>>m2;
        t=m1+m2;
        }
        void dis3()
        {
        cout<<"Total Marks : "<<t<<endl;
        }
};
class sports
{
public:
int score;
string nameg;
         void get4()
        {
        cout<<"Enter name of sports : ";
        cin>>nameg;
        cout<<"Enter score : ";
        cin>>score;
        }
        void dis4()
        {
        cout<<"SPORT NAME : "<<nameg<<" SCORE : "<<score<<endl;
        }
};
class result:public exam,public sports
{
};
int main()
{
result obj;
obj.get1();
obj.get2();
obj.get3();
obj.get4();
obj.dis1();
obj.dis2();
obj.dis3();
obj.dis4();
return 0;
}
