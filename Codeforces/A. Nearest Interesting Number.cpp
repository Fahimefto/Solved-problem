#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	cin >> n;
	int m=n,sum=1;
	while(sum%4!=0){
		sum=0;
		n=m;
		while(n > 0){
			sum+=n%10;
			n/=10;
		}
		m++;
	}
	cout << m-1;
	return 0;

}

