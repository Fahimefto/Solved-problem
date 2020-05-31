#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,q=0;
    cin>>n;
    string x;
    cin>>x;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='B' && x[i+1]!='B')
        {
            p++;

        }

    }
    cout<<p<<endl;
    for(int i=0; i<n; i++)
    {
        if(x[i]=='B')
        {
            q++;
        }

        else if (x[i]=='W')
        {
            if(q!=0)
            {
                cout<<q<<" ";
                q=0;

            }

        }


    }
  if(q!=0)
    cout<< q<< endl;


}

