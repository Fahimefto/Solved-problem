#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	char c;
	for (int i = 0; i < a*b; i++)
	{
		cin >> c;
		if (c != 'B' and c!= 'W' and c!= 'G')
		{
			cout << "#Color";
			return 0;
		}
	}
	cout << "#Black&White";
}
