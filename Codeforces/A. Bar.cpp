#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x=0;
    cin>>t;
    string a;
    string s1[40]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE","0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17"};
    for(int i=0;i<t;i++)
    {
        cin>>a;


    for(int i=0;i<40;i++)
    {
        if(a==s1[i])
            x++;
    }


}
cout<<x;
}
