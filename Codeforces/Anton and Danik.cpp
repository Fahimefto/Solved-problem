#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x=0,y=0;
    string s;
    cin>>n;
    cin>>s;
    sort(s.begin(),s.end());


    for(i=0;i<s.size();i++)
    {

        if(s[i]=='A') x++;
        else if(s[i]=='D') y++;
    }
    if(x>y) cout<<"Anton"<<endl;
    else if (x<y) cout<<"Danik"<<endl;
    else if (x=y) cout<<"Friendship"<<endl;

}

