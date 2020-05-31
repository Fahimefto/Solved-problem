#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    long long x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x%2==y%2 && x>=y*y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}

