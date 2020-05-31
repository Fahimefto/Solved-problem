    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n,high=0,low=0;
        cin>>n;
        int a[10000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int temp=a[0];
        int temp2=a[0];

        for(int i=1;i<n;i++)
        {
            if(a[i]>temp)
            {
                temp=a[i];
                low++;

            }
            else if(a[i]<temp2)
            {
                temp2=a[i];
                high++;

            }
        }
        cout<<high+low;

    }
