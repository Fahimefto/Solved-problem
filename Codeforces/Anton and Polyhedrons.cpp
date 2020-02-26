#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x=0;
    string a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a[0] == 'T') x=x+4;
         if(a[0] == 'C') x=x+6;
          if(a[0] == 'O') x=x+8;
           if(a[0] == 'D') x=x+12;
            if(a[0] == 'I') x=x+20;
    }
    cout<<x;
}
