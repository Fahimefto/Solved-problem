#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,i,n;
	cin>>t;
	string x;

	while(t--){
		cin>>n>>x;

		for(i=0;i<n;i++){
			if(x[i]=='8' && (n-i)>=11){
				cout<<"YES"<<endl;
				break;
			}
		}
		if(i==n){
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
