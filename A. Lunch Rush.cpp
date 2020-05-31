#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,v,t,f,neg,temp;
    int mi=-1e9;
    set<int>x;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>f>>t;
        if(k>=t)
        {
            x.insert(f);

        }
        else
        {
           v=f-(t-k);

           x.insert(v);
           \
        }



    }

  cout<<*x.rbegin();
}
