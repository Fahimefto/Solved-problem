#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t,x,y,a=0,b=0,c=0,d=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>t>>x>>y;
        if(t==1)
        {
            a+=x;
            b+=y;

        }
        else if(t==2)
        {
            c+=x;
            d+=y;

        }

    }
    if(a>=b)
        {
            cout<<"LIVE"<<endl;

        }
        else
            cout<<"DEAD"<<endl;
    if(c>=d)
        {
            cout<<"LIVE"<<endl;

        }
         else
                cout<<"DEAD"<<endl;


}

