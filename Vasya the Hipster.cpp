#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,z;
    cin>>a>>b;

    x=min(a,b);
    y=abs(a-b);
    if(y<=1)
    {
        z=0;
    }
    else
        z=y/2;


    cout<<x<<" "<<z;


}

