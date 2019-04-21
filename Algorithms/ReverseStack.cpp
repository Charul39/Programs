#include<bits/stdc++.h>
using namespace std;

stack<int> st;

void insertBottom(int cur)
{
  if(st.empty() || cur>st.top()) //remove cur>st.top part for reversing stack
    st.push(cur);
  else
  {
    int el = st.top();
    st.pop();
    insertBottom(cur);
    st.push(el);
  }
}

void reverse()
{
  if(st.empty())
    return;
  int d = st.top();
  st.pop();
  reverse();
  insertBottom(d);
}

int main()
{
  int n,x,i;
  cin >> n;
  for(i=0;i<n;i++)
  {
    cin >> x;
    st.push(x);
  }
  reverse();
  for(i=0;i<n;i++)
  {
    x = st.top();
    cout << x << " ";
    st.pop();
  }
}
