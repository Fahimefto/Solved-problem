#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string  a[n],b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    int q;
    cin>>q;
    while(q--)
    {

        long long int y;
        cin>>y;
        int k=(y-1)%n;
        int l=(y-1)%m;
        cout<<a[k]+b[l]<<endl;
    }


}

