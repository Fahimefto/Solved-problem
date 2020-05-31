#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x=0,y=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='z') x++;
        if(s[i]=='n') y++;
    }
    while(y--)
    {
        cout<<"1 ";
    }
    while(x--)
    {
        cout<<"0 ";
    }
}
