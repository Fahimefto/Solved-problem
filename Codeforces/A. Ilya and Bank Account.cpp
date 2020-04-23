#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	if(n>=0)
	 cout<<n;
	else {
		int num=n/10;
		if (n%10>num%10)
		 cout<<n%10 + (num/10)*10;
		else
		 cout<<num;
	}
}



