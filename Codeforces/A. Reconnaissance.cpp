#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,y=0,x,i,z;
    cin>>n>>d;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]-a[i]<=d)
            {
                y+=2;
            }
        }
    }
    cout<<y<<endl;
}
