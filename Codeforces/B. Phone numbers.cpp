#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[1000006];
    int t;
    cin>>t;
    for(int i = 0; i < t; i++)
        cin>>s[i];

    for(int j = 0; j < t; j++)
    {
        cout<<s[j];

        if(j%2 != 0 && j < t-2 ) cout<<'-';
    }
}
