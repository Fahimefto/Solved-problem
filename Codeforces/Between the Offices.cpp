#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
	cin >> a;
	string s;
	cin >> s;
	if(s[0] == 'S' && s[a - 1] == 'F')
		cout << "YES";
	else
		cout << "NO";
}
