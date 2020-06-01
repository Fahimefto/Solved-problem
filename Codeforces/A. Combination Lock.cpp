#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,yy=0;
    string a1,a2;
    cin>>t>>a1>>a2;
    for(int i=0;i<t;i++)
    {
        int x=abs(a1[i]-a2[i]);
        int y=abs((10+a1[i])-a2[i]);
        int z=abs(a1[i]-(10+a2[i]));
        int xx=min(x,min(y,z));
        yy=yy+xx;
    }
    cout<<yy;
}
