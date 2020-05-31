#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,temp=0,x=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        temp=temp+a[i];
    }
    temp=temp/2;
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        x=x+a[i];

        if(x>temp){
                cout<<i+1<<endl;
                 break;

        }


    }


}

