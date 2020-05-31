#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
  for(int i=1;i<s.size();i++){
      if(s[i]>95){
          cout<<s;
          return 0;
      }
      }
     for(int i=0;i<s.size();i++){
         if(s[i]>95)
            s[i]-=32;
       else s[i]+=32;
  }
  cout<<s;

  }
