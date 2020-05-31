#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a,x=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)
        {x=x+1;}

    }
    cout<<n+x;


}
