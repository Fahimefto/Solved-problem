#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int co=0,ce=0,lo,le,d;
	for(int i=0;i<n;i++)
	{
		cin>>d;
		if(d%2==0)
		{
			ce++;
			le=i+1;
		}
		else
		{
			co++;
			lo=i+1;
		}
	}
	if(ce==1)
		cout<<le<<endl;
	else
		cout<<lo<<endl;
}
