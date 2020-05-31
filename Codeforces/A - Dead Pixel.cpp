#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int ar1=a*y;
        int ar2=b*x;
        int ar3=a*(b-y-1);
        int ar4=b*(a-x-1);
        int aa=max(ar1,ar3);
        int bb=max(ar2,ar4);
        cout<<max(aa,bb)<<endl;
    }

}

