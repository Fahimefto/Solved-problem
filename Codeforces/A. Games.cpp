#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[101],b[101],cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(a[i]==b[j])
		cnt++;
	}
}
	cout<<cnt;
}
