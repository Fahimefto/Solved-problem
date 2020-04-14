#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x="hello";
    int n=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==x[n])
        {
            n++;
        }

    }
    if(n==5)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}

