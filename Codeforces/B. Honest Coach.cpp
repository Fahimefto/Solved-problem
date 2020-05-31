#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		int min=a[1]-a[0];
		for(int j=2;j<n;j++)
		{
			if(a[j]-a[j-1]<min)
			min=a[j]-a[j-1];
		}
		cout<<min<<endl;



    }
}
