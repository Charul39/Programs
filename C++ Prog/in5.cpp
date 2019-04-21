#include<bits/stdc++.h>
using namespace std;
class vehicle
{
public:
string name;
int wheels;
        void getdata()
                {
                cout<<"Enter name : ";
                cin>>name;
                cout<<"Enter no of wheels : ";
                cin>>wheels;
                }
        void disdata()
                {
                cout << "NAME : "<< name << endl;
                cout << "NO. OF WHEELS : " << wheels << endl;
                }
        
};
class lightmotor:public vehicle
{
public:
int speedlim;
        void getlim()
        {
        cout<<"Enter the speed limit of vehicle : " << endl;
        cin>>speedlim;
        }
        void dislim()
        {
        cout<<"The speed limit of car is "<<speedlim<<endl;
        }
};
class gearmotor: public lightmotor
{
public:
int gear;
        void getgear()
        {
        cout<<"Enter number of gear : ";
        cin>>gear;
        }
        void ggear()
        {
        cout<<"The number of gears is "<<gear<<endl;
        }
};
class nongearmotor: public lightmotor
{
};
class heavymotor:public vehicle
{
public :
int loadcapacity;
string permit,country;
        void gethe()
        {
        cout<<"Enter the loadcapacity of vehicle : ";
        cin>>loadcapacity;
        cout<<"Type of permit and country/state : ";
        cin>>permit>>country;
        }
        void dishe()
        {
        cout<<"Load capacity is "<<loadcapacity<<endl;
        cout<<"Permit Type "<<permit<<" "<<country<<endl; 
        }
};
class passenger:public heavymotor
{
public :
int sit,std;
        void getss()
        {
        cout<<"Enter standing and siting capacity : ";
        cin>>sit>>std;
        }
        void diss()
        {
        cout<<"Standing Capacity is "<<std<<"\nSiting Capacity is "<<sit<<endl;
        }
};
int main()
{
cout<<"HEAVY MOTOR\n";
passenger obj;
obj.getdata();
obj.gethe();
obj.getss();
obj.disdata();
obj.dishe();
obj.diss();
cout<<"LIGHT MOTOR\n";
gearmotor o;
o.getdata();
o.getlim();
o.getgear();
o.disdata();
o.dislim();
o.ggear();
return 0;
}
