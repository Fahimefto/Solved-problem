#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,v1,v2,p1,p2;
	cin>>n>>v1>>v2>>p1>>p2;
	int x=v1*n+p1*2,y=v2*n+p2*2;
	if(x>y){
		cout<<"Second";
	}else if(x==y){
		cout<<"Friendship";
	}else {
		cout<<"First";
	}
	cout<<endl;
}
