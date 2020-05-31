#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    double x= ceil((a1+a2+a3)/5);
    double y=ceil((b1+b2+b3)/10);
    int z=x+y;
    if(z>n) cout<<"NO";
    else cout<<"YES";



}

