#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,x,i;
    cin>>n;

    for (i=0;i<n;i++)
    {
        cin>>a>>b;
         x=a%b;
        if(x==0)
        {
            cout<<"0"<<endl;


        }
        else cout<<b-x<<endl;



    }
    return 0;


}

