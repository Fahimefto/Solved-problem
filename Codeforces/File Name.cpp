#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,y=0;
    cin>>n;
    string x;
    cin>>x;

    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='x' && x[i+1]=='x' && x[i+2]=='x')
            y++;
    }
    cout<<y<<endl;


}

