#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        for(int j=n-1;j>=0;j--)
        {
            if(x<a[j])
            {
                x++;
            }
        }
        cout<<x<<endl;
    }
}
