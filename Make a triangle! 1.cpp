#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int x[4];
    cin>>x[0]>>x[1]>>x[2];
    sort(x,x+4);
    b=(x[0]+x[1]);

    if(b>x[2])
    {
        cout<<"0"<<endl;
    }

    else
{
    a=(x[2]-b) +1;
        cout<<a<<endl;
    }
return 0;


}


