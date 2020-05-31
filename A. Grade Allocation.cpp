#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,m;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        long long int a[n];
        int x=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            x+=a[j];

        }
        int y=min(x,m);
        cout<<y<<endl;

    }


}

