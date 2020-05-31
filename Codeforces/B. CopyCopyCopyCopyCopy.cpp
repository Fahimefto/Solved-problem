#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x;
        set<int>a;
        cin>>x;
        for(int j=0;j<x;j++)
        {
            cin>>n;
            a.insert(n);

        }
        cout<<a.size()<<endl;

    }

}

