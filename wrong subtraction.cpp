#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,i;
    cin>>k>>n;
    while(n--)
    {
        if(k%10==0)
        {
            k=k/10;
        }
        else
            k--;
    }
    cout<<k;
}
