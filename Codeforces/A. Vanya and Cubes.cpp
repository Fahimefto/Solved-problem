#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int i,x=0;
    for(i=1;x+i<=n;i++)
    {
        x+=i;
        n-=x;
    }
    i--;
    printf("%d",i);
}
