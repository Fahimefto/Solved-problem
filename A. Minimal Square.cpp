#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b,x,y,z;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b;
        x=min(a,b);
        y=max(a,b);
        z=max(2*x,y);
        cout<<z*z<<endl;



    }
    }

