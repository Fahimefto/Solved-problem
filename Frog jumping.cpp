#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long t,a,b,k,res;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>k;
		res= (a-b)*(k/2);
		if(k%2==1)
			res+=a;
		cout<<res<<endl;
	}

	return 0;
}
