#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x=0,y=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        y=a[i]+k;
        if(y<=5)
        {
            x++;
        }

    }
    x=x/3;
    cout<<x;


}
