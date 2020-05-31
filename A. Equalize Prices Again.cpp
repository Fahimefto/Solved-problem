#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int n ,cnt=0;
		cin>>n;
		for(int i=0;i<n;i++){
			int t;
			cin>>t;
			cnt+=t;
		}
		cout<<(cnt+n-1)/n<<endl;
	}
    }



