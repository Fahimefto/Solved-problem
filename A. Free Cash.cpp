#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[100][100];
    int n,r=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int h,m;
        cin>>h>>m;
        a[h][m]++;
        if(a[h][m]>r){
            r = a[h][m];
        }
    }
    cout<<r;
    return 0;
}
