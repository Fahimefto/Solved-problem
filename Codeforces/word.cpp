#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,l,up=0,low=0;
    cin>>s;
    l=s.size();
    for(i=0; i<l; i++)
    {
        if(s[i]>=65 && s[i]<=91)
            up++;
        else
            low++;
    }
    if(up>low)
    {
        for(i=0; i<l; i++)
            s[i]=toupper(s[i]);
    }
    else
    {
        for(i=0; i<l; i++)
            s[i]=tolower(s[i]);
    }
    cout<<s<<endl;

}
