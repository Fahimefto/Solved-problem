
#include<iostream>
#include<algorithm>
using namespace std;

int FindMax(int **ar1,int i,int n);
int FindMax2(int ar2[],int k);

int main(){
    int m,n,k,maxx;
    cin>>n>>m;
    int ar[m];
    for(int i=0;i<m;i++){
        cin>>ar[i];
    }
    sort(ar,ar+m);
    k=m-n+1;
    int ar1[k][n],c;
    for(int i=0;i<k;i++){
        c=0;
        for(int j=i;j<i+n;j++){
            ar1[i][c]=ar[j];
            c++;
        }
    }
    int ar2[k];
    for(int i=0;i<k;i++){
        ar2[i]=FindMax(ar1,i,n);
    }
    maxx=FindMax2(ar2,k);
    cout<<maxx;
}
int FindMax(int **ar1,int i,int n){
    int maxx;
    maxx=ar1[i][0];
    for(int j=1; j<n; j++)
    {
        if(ar1[i][j]>maxx)
            maxx=ar1[i][j];
    }
    return maxx;
}

int FindMax2(int ar2[],int k)
{
    int maxx;
    maxx=ar2[0];
    for(int i=1; i<k; i++)
    {
        if(ar2[i]>maxx)
            maxx=ar2[i];
    }
    return maxx;
}
