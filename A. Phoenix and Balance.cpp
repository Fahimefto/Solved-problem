#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        n=n/2;
        m=pow(2,n+1);
        cout<<m-2<<endl;
    }
}
