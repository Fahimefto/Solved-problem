#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   char x[1000];
   int t,i;
   int n=0;
   scanf("%d",&t);
   for(i=0;i<t;i++)
   {
    scanf("%s",&x[i]);
   }
   for(i=0;i<t;i++){
   if(x[i]==x[i+1])
   {
         n++;


   }}
   cout<<n;




}
