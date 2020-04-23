#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,x;
    set<int>st;
    cin>>n>>p;
    for(int i=0;i<p;i++)
{
    cin>>x;
    st.insert(x);
}
    cin>>q;

    for(int j=0;j<q;j++)
{
    cin>>x;
    st.insert(x);

}

    if(st.size()==n)
    cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
}
