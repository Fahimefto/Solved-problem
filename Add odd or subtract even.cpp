#include <bits/stdc++.h>
using namespace std;
long long t,a,b;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(b==a){
			cout<<0<<endl;
		}
		else if(b>a){
			if(b%2==a%2)cout<<2<<endl;
			else cout<<1<<endl;
		}
		else{
			if(b%2==a%2)cout<<1<<endl;
			else cout<<2<<endl;
		}
	}
}
