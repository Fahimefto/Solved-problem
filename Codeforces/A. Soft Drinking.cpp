#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n,k,l, c, d, p, nl, np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;

   int x=min((k*l)/nl,c*d);
   int y=min(x,p/np);
   cout<<y/n;
   //Bal -_- -_- vabsilm koto kichu
}
