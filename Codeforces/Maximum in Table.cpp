#include<bits/stdc++.h>
using namespace std;
int table(int row,int col)
{
    if(row==1 || col==1){
        return 1;
    }
    else{
        return(table(row-1,col)+table(row,col-1));
    }
}



int main()
{
    int n;
    cin>>n;
    cout<<table(n,n);

}


