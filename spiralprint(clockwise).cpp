#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int m,n;
    int i;
    int j;
    cin>>m>>n;
    int a[m][n];
    for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int t=0;
    int b=m-1;
    int r=n-1;
    int l=0;
    int dir=0;
    while(t<=b && l<=r)
    {
        if(dir==0)
        {
            for(i=l;i<=r;i++)
            {
                cout<<a[t][i]<<" ";
            }
            t++;
                   }
        else if(dir==1)
        {
            for(i=t;i<=b;i++)
            {
                cout<<a[i][r]<<" ";
            }
            r--;

        }
        else if(dir==2)
        {
            for(i=r;i>=l;i--)
            {
                cout<<a[b][i]<<" ";
            }
            b--;
        }
        else if(dir==3)
        {
            for(i=b;i>=t;i--)
            {
                cout<<a[i][l]<<" ";
            }
            l++;
        }
        dir=(dir+1)%4;
    }
    cout<<endl;
 }
}

