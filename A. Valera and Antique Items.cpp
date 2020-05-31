#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,n1,v1;
    set<int>x;
    cin>>n>>v;

    for(int i=0;i<n;i++)
    {
        cin>>n1;
        for(int j=0;j<n1;j++)
        {
            cin>>v1;
            if(v1<v)
            {
                x.insert(i+1);
            }
        }
    }
    cout<<x.size()<<endl;
    set<int>::iterator it;
    for(it=x.begin();it!=x.end();it++)
    {
        cout<<*it<<" ";
    }

}
