#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    string x[n];
    for(int i=0; i<n; i++)
    {
        cin>>x[i];

    }
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<5; j++)
        {
            if(x[i][j]=='O' && x[i][j+1]=='O' )
            {
                x[i][j]='+';
                x[i][j+1]='+';

            cout<<"YES"<<endl;
            for(int i = 0; i < n; i++)
                cout << x[i] << endl;
            return 0;
            }
        }

    }
    cout<<"NO"<<endl;


}

