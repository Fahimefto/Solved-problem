#include<bits/stdc++.h>
using namespace std;
int main()

{
    string a1[25]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string a2[25]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    int t,x=0,y=0;
    scanf("%d",&t);
    if(t<20)
        cout<<a1[t];
    else{
        y=t/10;
        x=t%10;



        if(x>0)
        {
            cout<<a2[y-2]<<"-"<<a1[x];
            return 0;
        }
        else
            cout<<a2[y-2];




}}
