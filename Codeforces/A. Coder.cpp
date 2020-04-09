#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    cout<<((n*n)+1)/2<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i%2==0) && (j%2==0))
            cout<<"C";
             else if((i%2==1) && (j%2==0))
            cout<<".";
              else  if((i%2==0) && (j%2==1))
            cout<<".";
                else  if((i%2==1) && (j%2==1))
            cout<<"C";
        }
        cout<<endl;
    }

}

