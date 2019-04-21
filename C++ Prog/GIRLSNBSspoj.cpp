#include <bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		double g,b,n;
		cin >> g >> b;
		if(g==-1 && b==-1)
		  return 0;
		else if(g==0 && b==0)
		  n = 0;
		else if(g==b)
		  n = 1;
		else if(g>b)
		  n = g/(b+1);
		else if(g<b)
		  n = b/(g+1);
		cout << ceil(n) << endl;
	}
	return 0;
}
