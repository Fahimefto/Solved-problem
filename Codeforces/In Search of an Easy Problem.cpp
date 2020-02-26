#include <bits/stdc++.h>
using namespace std;
int n,a,i,x;
main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        x=x+a;
    }
    if (x>0)
        cout<<"HARD";
    else
        cout<<"EASY";
}
