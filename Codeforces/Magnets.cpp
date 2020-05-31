#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,y=0;

    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i-1]!=x[i]){
            y++;
        }



    }

    cout<<y;

}
