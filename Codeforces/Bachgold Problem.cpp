#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    cout<<n/2<<endl;
    x=n/2;
    if(n%2==0){
            for(int i=0;i<=x-1;i++)
            cout<<"2 ";


    }
    else{
        for(int i=0;i<x-1;i++)
           {
               cout<<"2 ";
           }
           cout<<"3 ";
    }

}

