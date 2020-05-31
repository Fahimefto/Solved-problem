#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,x=0,y=0;
    cin>>r>>c;
    char a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='S')
            {
                x++;
                break;
            }
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
             if(a[j][i]=='S')
            {
                y++;
                break;
            }
        }
    }
    int req=x*y;
    int req1=r*c;
    cout<<req1-req;
}
