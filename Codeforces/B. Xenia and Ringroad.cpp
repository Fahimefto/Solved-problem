#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,f=1,x=0,a;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        if(a>=f)
        {
            x+=a-f;
            f=a;
        }
        else
        {
            x+=n-f+a;
            f=a;
        }

    }
    cout<<x;
}

//balda amar 3 hour time lagaise .. -_-
