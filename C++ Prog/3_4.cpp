#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	int a[n],i,j,k;
	cout<<"Enter the ARRAY: ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the value of k: ";
	cin>>k;
	for(i=0;i<(n-k+1);i++){
		int ar[1000];
		memset(a,0,sizeof(a));
		for(j=i;j<k+i;j++){
			if(ar[a[j]]==0)
				ar[j]=1;
			else{
				cout<<"Contains Duplicate within "<<k<<" elements"<<endl;
				exit(0);
			}
		}
	}
	return 0;
}
