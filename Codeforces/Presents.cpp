#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m;
    cin>>n;
    int a[100];
    for(i=1;i<=n;i++)
    {
        cin>>m;
        a[m]=i;

    }
    for(i=1;i<=n;i++)
    {
        cout<<" "<<a[i];
    }

}

