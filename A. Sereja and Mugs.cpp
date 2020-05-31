#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    int temp=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i=0;i<n-1;i++)
    {

        temp+=a[i];
    }
    if(temp<=x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

