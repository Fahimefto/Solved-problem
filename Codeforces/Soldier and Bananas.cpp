#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,n,w,x=0,f;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1; i<=w; i++)
    {
        x +=i*k;



    }
    f=x-n;
    if(f>0)
    {
        cout<<f;
    }
    else
    cout<<"0";




}

