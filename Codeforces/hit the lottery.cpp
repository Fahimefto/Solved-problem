#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    a= n/100 + n%100/20 + n%20/10 + n%10/5 + n%5;
    cout<<a;

}
