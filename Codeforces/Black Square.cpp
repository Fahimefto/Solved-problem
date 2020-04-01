#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int a,b,c,d, ans=0;

    cin>>a>>b>>c>>d;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
            ans+=a;
        if(s[i]=='2')
            ans+=b;
        if(s[i]=='3')
            ans+=c;
        if(s[i]=='4')
            ans+=d;
    }
    cout<<ans<<endl;

}


