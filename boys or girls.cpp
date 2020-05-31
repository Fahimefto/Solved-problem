#include<bits/stdc++.h>

using namespace std;
int main ()
{
    char x[101];
    int n=0;

    scanf("%s",&x);
    int l= strlen(x);
    sort(x,x+l);
    for (int i=0;i<l;i++)
    {
        if (x[i] !=x[i+1])
        {
        n++;
        }

    }
    if(n%2==0)
    {
        cout<<"CHAT WITH HER!\n";

    }
    else
    {
        cout<<"IGNORE HIM!\n";
    }




}
