#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p[50]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n,m;
    cin>>n>>m;
    for(int i=0;i<50;++i){
    if (p[i]==n && p[i+1]==m){
        cout<<"YES";
        return 0;
    }
}
    cout<<"NO";
    return 0;

}
