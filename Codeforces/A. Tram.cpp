#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,t=0;
    set<int> x;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        t=t-a+b;
        x.insert(t);



    }
    cout<<*x.rbegin();




}
