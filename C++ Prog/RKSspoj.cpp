#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

map<lld, lld> cnt; //occurences
map<lld, lld> position; //position of the number
lld arr[1001]; //numbers

bool cmpfunc(const lld &a, const lld &b)
{
	if(cnt[a]==cnt[b])
		return position[a] < position[b];
	else
		return cnt[a] > cnt[b];
}

int main()
{
	lld length, range;
	cin >> length >> range;
	lld i = 0, temp;
	while(i<length)
  {
		cin >> arr[i];
		cnt[arr[i]]++;
		i++;
	}
	for(int i=length-1;i>=0;i--)
  {
		position[arr[i]] = i;
	}
	sort(arr, arr + length, cmpfunc);
	for(int i=0;i<length;i++)
  {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
