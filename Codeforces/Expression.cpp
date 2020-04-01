#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x=0;
    cin>>a>>b>>c;

    x=max(x,max(a+(b*c),max(a*(b+c),max(a*b*c,max((a+b)*c,max(a+(b+c),(a+b)+c))))));
    cout<<x<<endl;

}

