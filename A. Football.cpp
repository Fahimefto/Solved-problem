#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    cout<<x[n/2]<<endl;

}


