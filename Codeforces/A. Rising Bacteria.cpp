#include <bits/stdc++.h>
using namespace std;

int k,x;

main(){
	cin>>x;
	while(x>0){
		k+=x%2;
		cout<<"K::"<<k<<endl;
		x/=2;
		cout<<"x::"<<x<<endl;

	}
	cout<<k;
}
