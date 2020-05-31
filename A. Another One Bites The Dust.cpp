#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;

    cin>>a>>b>>c;
    if(b==a)
    {
        cout<<2*min(a,b)+(2*c);
    }
    else
        cout<<2*min(a,b)+(2*c)+1;



}
