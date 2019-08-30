#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char a[100][100],b[100][100];
    int distinct;
    cin>>t;
    while(t--)
    {
        distinct=0;
        int m,n;
        cin>>m>>n;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cin>>b[i][j];
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]!=b[i][j])
                    distinct++;
            }
        }
        if(distinct%2!=0) cout<<-1<<endl;
        else cout<<distinct/2<<endl;
    }
}