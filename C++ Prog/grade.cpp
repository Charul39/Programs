#include<iostream>
using namespace std;

class marks
{
   public:
   float m[5];
   int i;
   void getmarks()
   {
      for(i=0;i<5;i++)
      {
         cout << "Enter Marks of Subject " << i+1 << endl;
         cin >> m[i];
      }
   }
};
class grade : public marks
{
   public:
   int i,sum=0;
   float g[5];
   void setgp()
   {
      for(i=0;i<5;i++)
      {
         if(m[i] <=100 && m[i] > 90)
           g[i]=10.0;
         else if(m[i] <=90 && m[i] > 80)
           g[i]=9.5;
         else if(m[i] <=80 && m[i] > 70)
           g[i]=9.0;
         else if(m[i] <=70 && m[i] > 60)
           g[i]=8.5;
         else if(m[i] <=60 && m[i] > 50)
           g[i]=8.0;
         else if(m[i] <=50 && m[i] > 40)
           g[i]=7.5;
         else
           g[i]=0.0;
         sum += g[i];
       }
   }
};
class display : public grade
{
   public:
   int i;
   char gr;
   void showgr()
   {
   	  gr = sum/5;
         if(gr >9.0 && gr <= 10.0)
           cout << "Grade - A" << endl;
         else if(gr >8.0 && gr <= 9.0)
           cout << "Grade - B" << endl;
         else if(gr >7.0 && gr <= 8.0)
           cout << "Grade - C" << endl;
         else if(gr >6.0 && gr <= 7.0)
           cout << "Grade - D" << endl;
         else if(gr >5.0 && gr <= 6.0)
           cout << "Grade - E" << endl;
         else if(gr < 5.0)
           cout << "FAIL" << endl;
   }
}a;

int main()
{
   a.getmarks();
   a.setgp();
   a.showgr();
   return 0;
}
