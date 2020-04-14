#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        if((2+p)<=q)
        {
            x++;
        }
    }
    cout<<x<<endl;

}

