#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin>>n;
	int x[3]={0,0,0};
	for(int a=0;a<n;a++){
		int c;
		cin>>c;
		x[a%3]+=c;
	}
	if(x[0]>x[1]&&x[0]>x[2]){
		cout<<"chest";
	}
	if(x[1]>x[0]&&x[1]>x[2]){
		cout<<"biceps";
	}
	if(x[2]>x[0]&&x[2]>x[1]){
		cout<<"back";
	}

	return 0;
}
