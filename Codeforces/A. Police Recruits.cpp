#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,ans=0;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        x+=a;
        if(x<0)
        {
            ans++;
            x=0;
        }

    }
    cout<<ans<<endl;



}

