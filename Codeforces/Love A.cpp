#include<bits/stdc++.h>

using namespace std;
int main()
{
    int x=0,y=0;
    string s;
    cin>>s;
    int len=s.size();
    sort(s.begin(),s.end());

    for(int i=0;i<len;i++)
    {
        if(s[i]=='a') x++;

    }
    cout<<min(2*x-1,len);

}

