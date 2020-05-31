    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,i,j,k;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    if(a[i]==a[j]+a[k] && (i!=j && j!=k && k!=i))
                    {
                        cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                        return 0;
                    }
                }
            }
        }
        cout<<"-1"<<endl;
    }
