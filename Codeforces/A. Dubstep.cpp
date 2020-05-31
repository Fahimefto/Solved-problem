#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int y;
    cin>>x;
    while(1>0)
    {
        y=x.find("WUB");
        cout<<"y_____________"<<y<<endl;
        if(y==-1)
        {
            break;
        }
        x.replace(y,3," ");

    }
    cout<<x<<endl;



}

