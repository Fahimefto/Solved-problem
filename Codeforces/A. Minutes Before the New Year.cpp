#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,m,x=0,ans;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>h>>m;
        x=(60*h)+m;
        ans=1440-x;
         cout<<ans<<endl;
    }


}
