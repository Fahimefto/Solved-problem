#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int nn=0,ee=0,ii=0,tt=0;
    cin>>x;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='n') nn++;
        else if(x[i]=='e') ee++;
        else if(x[i]=='i') ii++;
        else if(x[i]=='t') tt++;

    }
    cout<<min((nn-1)/2,min(ii,min(ee/3,tt)));


}

