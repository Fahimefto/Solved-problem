#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    string s,t[31]={"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE",
	"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17"};
	while(n--){
		cin>>s;
		for(int i=0;i<=30;i++){
			if(s==t[i])ans++;}
	}cout<<ans;
}
