#include <bits/stdc++.h>
using namespace std;

long long n, x, d, k;
char c;
int main() {
	cin>>n>>x;
	for (int i=0;i<n;++i) {
		cin>>c>>d;
		if (c=='+')
			x+=d;
		else if(x<d)
			k++;
		else
		    x-=d;
	}
	cout<<x<<" "<<k<< endl;
	return 0;
}
