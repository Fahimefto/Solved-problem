#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    int mi=0,ma=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        if(l!=0)
        {
            mi++;
        }

        if(r!=0)
        {
            ma++;
        }

    }
    int x=(n-mi);
    int y=(n-ma);
    cout<<min(x,mi)+min(y,ma)<<endl;
}
