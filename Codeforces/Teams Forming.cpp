#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i+=2)
    {
        x+=(a[i+1]-a[i]);
    }
    cout<<x<<endl;

}
