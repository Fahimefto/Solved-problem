#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt=0;
    char a='a';
    for(int i=0;i<s.size();i++){
        cnt+=min(abs(a-s[i]),26-abs(a-s[i]));
        a=s[i];
    }
    cout<<cnt;
}
