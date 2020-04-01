#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,y;
    cin>>n>>k;
    long long int x=(n+1)/2;
    if(x<k){
       y=2*(k-x);
    }
    else
        y=(2*k)-1;

    cout<<y<<endl;
}
