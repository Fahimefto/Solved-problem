#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int a[m];
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		for(int j=0;j<x;j++) {
			int y;
			cin>>y;
			a[y-1]=1;
		}
	}
	for(int i=0;i<m;i++) {
		if(a[i]!=1) {
			cout<<"NO" ;
			return 0;
		}
	}
	cout<<"YES";
}
