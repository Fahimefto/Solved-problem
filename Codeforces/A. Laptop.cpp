#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a, b;
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		cin>>a>>b;
		if (b>a)
		{
			cout<<"Happy Alex";
			return 0;
		}
	}
	cout<<"Poor Alex";
	//bal, koto kichu vabsilm
}
