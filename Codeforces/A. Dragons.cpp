#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair <int , int> x[1001];
    int s , n;
    cin>>s>> n ;
    for (int i=0; i<n; i++)
    {
        cin>>x[i].first>>x[i].second;
    }
    sort (x,x+n);
    for (int i=0;i<n;i++)
    {
        if (s>x[i].first)
            s+=x[i].second;
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout << "YES";

}
