#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[5]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    while(n>5)
    {
        n=n/2-2;
    }
    cout<<a[n-1];
}
