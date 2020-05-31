#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    set<int> x;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        x.insert(a);

    }
    set<int>::iterator it=x.begin();
    advance(it,1);
    int y=*it;
    if(x.size()<2)
    {
        cout<<"NO"<<endl;
    }
    else

    cout<<y<<endl;


}
