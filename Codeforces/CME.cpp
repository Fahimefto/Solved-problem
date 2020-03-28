
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]==2) cout<<"2"<<endl;
        else{
            cout<<x[i]%2<<endl;
        }
    }

}
