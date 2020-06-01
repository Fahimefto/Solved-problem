#include <bits/stdc++.h>
using namespace std;

int main() {
	string S, T; cin >> S >> T;
	int p = 0;
	for(int i = 0; i < T.size(); i++)
		if(S[p] == T[i])
			p++;
	cout << p + 1;
}
