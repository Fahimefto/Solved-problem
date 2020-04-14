#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double ans,x=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        x+=a[i];
    }
    ans=ceil(x/4);
    cout<<ans<<endl;

}

