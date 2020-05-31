#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    int n,a,t;
    cin>>n>>t>>x;
    for(int j=0;j<t;j++)
    {


    for(int i=0;i<n;i++)
    {
        if(x[i]=='B' && x[i+1]=='G')
        {
            swap(x[i],x[i+1]);
            i++;
        }
    }



}

 cout<<x;
}
