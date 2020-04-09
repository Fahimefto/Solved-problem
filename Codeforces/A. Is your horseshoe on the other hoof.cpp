
#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int a[10000];
 int x=0;
 cin>>a[0]>>a[1]>>a[2]>>a[3];
 sort(a,a+4);
 for(int i=0;i<3;i++)
 {
     if(a[i]==a[i+1])
     {
         x++;
     }

 }
 cout<<x<<endl;

}
