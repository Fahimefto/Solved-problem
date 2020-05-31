#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string x;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        int len=x.size();
        if(x[len-1]=='o'){cout<<"FILIPINO"<<endl;}
        if(x[len-1]=='u'){cout<<"JAPANESE"<<endl;}
        if(x[len-1]=='a'){cout<<"KOREAN"<<endl;}
    }
}
