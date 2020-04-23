#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	cin>>n;
	int q[10000], w[10000], e[10000], z=0,x=0,c=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if (a==1)
		q[z++]=i+1;
		if (a==2)
		w[x++]=i+1;
		if(a==3)
		e[c++]=i+1;
	}
	int mini=min({z,x,c});
	cout<<mini<<endl;
	for(int i=0;i<mini;i++)
	cout<<q[i]<<" "<<w[i]<<" "<<e[i]<<endl;

}



