#include<bits/stdc++.h>
using namespace std;
int main()
{

int n, i, f[5005], l1, l2;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> f[i];
	}

	for (i = 1; i <= n; i++) {
		l1 = f[i];
		l2 = f[l1];
		if (f[l2] == i) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}



