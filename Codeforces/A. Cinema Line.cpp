#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==25)
        {
            x++;
        }
        if(a[i]==50)
        {
            y++;
            if(x==0)
            {
                cout << "NO";
				return 0;
            }
            x--;;
        }
        if(a[i]==100)
        {
            if(x>0 && y>0)
			{
				x--;
				y--;
			}
			else if(x>2)
				y-=3;
			else
			{
				cout << "NO";
				return 0;
			}
        }
    }
    cout << "YES";
    return 0;


}

