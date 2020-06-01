#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,k,m,a,b,c;
        cin>>n>>m>>k;

        b=(n-m)/(k-1);
        a=min(m,b);
        cout<<a<<endl;
    }

    return 0;
}
