#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a1,a2,a3;
    cin>>a1>>a2>>a3;
    if(a1[0]==a3[2] && a1[1]==a3[1] && a1[2]==a3[0] && a2[0]==a2[2])
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
