#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	int i;
	cin>>s;
	for(i=0; i<5; i++)
	{
		cin>>t;
		if(s[0]==t[0]||s[1]==t[1])
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
