#include<bits/algorithmfwd.h>
using namespace std;
int phi[1000004],mark[1000004]
int main()
{
    int n;
    cin>>n;
    seivephi(n);
}
void seivephi(int n)
{
    int i,j;
    for(i=1;i<=n;i++)phi[i]=i;
    phi[1]=1;
    mark[1]=1;
    for(i=2;i<=n;i++)
    {
        if(!mark[i])
        {
            for(j=i;j<=n;j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);            }
        }
    }

}
