#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char x;
    cin>>n;
    set<char>s;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert((char)tolower(x));

    }
    if(s.size()==26)
    cout<<"YES";
    else
    cout<<"NO";

}
