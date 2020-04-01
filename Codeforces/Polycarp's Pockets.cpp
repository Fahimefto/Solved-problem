#include <bits/stdc++.h>
long long a[10000000];
using namespace std;
int main(){
	long long n,num,res=0;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>num;
		a[num]++;

		res=max(res,a[num]);
	}
	cout<<res;
	return 0;
}
