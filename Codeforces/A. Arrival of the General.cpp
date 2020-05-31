#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t=0,temp;
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            swap(a[i+1],a[i]);
            t++;
        }
    }
    cout<<t;
}
