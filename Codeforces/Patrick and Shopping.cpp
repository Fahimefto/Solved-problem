#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,d3;
    int x,y,z,all,ans;
    cin>>d1>>d2>>d3;
    z=2*(d1+d2);
    x=2*(d3+d2);
    y=2*(d1+d3);
    all=(d1+d2+d3);
   ans=min(z,min(x,min(all,y)));
   cout<<ans<<endl;

}


