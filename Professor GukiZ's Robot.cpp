#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x1,x2,y1,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    int ans=max(abs(x2-x1),abs(y2-y1));
    cout<<ans;

}

