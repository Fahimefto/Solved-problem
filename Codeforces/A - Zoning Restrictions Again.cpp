#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,m;
	cin>>n>>h>>m;
	int a[n+1];
	for(int i=1; i<=n; i++)
	a[i]=h;
	while(m--)
	{
		int l,r,x;
		cin>>l>>r>>x;
		for(int i=l; i<=r; i++)
		{
			a[i]=min(a[i],x);
		}
	}
	int sum=0;
	for(int i=1; i<=n; i++)
	{
		sum+=a[i]*a[i];
	}
	cout<<sum<<"\n";
}
