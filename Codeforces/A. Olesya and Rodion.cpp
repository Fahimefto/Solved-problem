#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i=1;
    cin>>n>>k;
    if(n==1 && k==10)
    {
        cout<<"-1"<<endl;

    }
    else
    {
        cout<<k;
        if(k==10)	i++;
        if(n>1)
        {
            for(i;i<n;i++)
            {
                cout<<"0";
            }
        }
    }


}






