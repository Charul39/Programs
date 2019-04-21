#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int prec(char stack)
{
  if(stack=='+'|| stack=='-')
    return 1;
  else if(stack=='*'||stack=='/')
    return 2;
  else if(stack=='#')
    return 4;
  else
    return 3;
}
int main()
{
  stack <char> s;
  stack <int> e;
  int i=0,j=0,k;
  string in,pf;
  char x;
  int w,y,z;
  cout << "Enter Infix Expression : ";
  cin >> in;
  s.push('#');
  while(in[i] != '\0')
  {
    if(in[i] >= '0' && in[i] <= '9')
      pf[j++] = in[i];
    else if(in[i] == '(')
      s.push(in[i]);
    else if(in[i] == ')')
    {
      while(s.top() != '(')
      {
        pf[j++] = s.top();
        s.pop();
      }
      s.pop();
    }
    else
    {
      while(prec(in[i])>=prec(s.top()))
      {
        pf[j++] = s.top();
        s.pop();
      }
      s.push(in[i]);
    }
    i++;
  }
  while(s.top()!='#')
  {
    pf[j] = s.top();
    s.pop();
  }
  stack <char> as;
  i=0;
  cout << "Postfix Expression : ";
  while(pf[i]!='\0')
  {
    cout << pf[i++];
  }
  cout << endl;
  pf[i++]=')';
  k=0;
  while(pf[k] != ')')
  {
    if(pf[k] != '+' && pf[k] != '-' && pf[k] != '*' && pf[k] != '/')
    {
      e.push(pf[k]);
    }
    else
    {
      w = int(e.top()) - 48;
      e.pop();
      y = int(e.top()) - 48;
      e.pop();
      if(pf[k] == '+')
      {
        z = w + y;
        e.push(z);
      }
      else if(pf[k] == '-')
      {
        z = y - w;
        e.push(z);
      }
      if(pf[k] == '*')
      {
        z = w * y;
        e.push(z);
      }
      if(pf[k] == '/')
      {
        z = y/w;
        e.push(z);
      }
    }
    k++;
  }
  cout << "Evaluates value : " << e.top();
  return 0;
}
