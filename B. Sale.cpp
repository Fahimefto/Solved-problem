#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m,t=0;

   cin>>n>>m;
   int x[n];
   for(int i=0;i<n;i++)
   {
       cin>>x[i];
   }
   sort(x,x+n);
   for(int i=0;i<m;i++)
   {
       if(x[i]<0)
    t=t+x[i];
   }
   cout<<abs(t)<<endl;

}
