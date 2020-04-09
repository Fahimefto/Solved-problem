#include<bits/stdc++.h>
using namespace std;

int main()
{
	int ar[256]={0},sum=0;
	char str[2000];
	gets(str);
	int len=strlen(str);
	for(int i=0;i<len;i++)
		ar[str[i]]=1;
	for(int i=97;i<=122;i++)
		if(ar[i])
			sum++;
	cout<<sum;
	return 0;
}
