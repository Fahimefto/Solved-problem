#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,a,p;
	cin>>n;
	int x=0;

	for(int i=0;i<n;i++)
	{
		cin>>a>>p;
		if(p<m)
			m=p;
		x+=m*a;
	}
	cout<<x<<endl;
	return 0;
}
