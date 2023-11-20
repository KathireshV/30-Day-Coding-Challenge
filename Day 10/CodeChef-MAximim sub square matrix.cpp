#include<bits/stdc++.h>
using namespace std;
void solve(int **arr,int n,int m)
{
    int sol[n][m];
    for(int i=0;i<n;i++)
    {
        sol[i][0]=arr[i][0];
    }
    for(int i=0;i<m;i++)
    {
        sol[0][i]=arr[0][i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                int x=min(sol[i-1][j],sol[i][j-1]);
                sol[i][j]=min(x,sol[i-1][j-1])+1;
            }
            else
            {
                sol[i][j]=0;
            }
        }
    }
    int max=0,rmax,cmax;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(max<sol[i][j])
            {
                max=sol[i][j];
                rmax=i;
                cmax=j;
            }
        }
    }
    int row=rmax-max+1;
    int col=cmax-max+1;
    for(int i=row;i<=rmax;i++)
    {
        for(int j=col;j<=cmax;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int **arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[m];
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    solve(arr,n,m);
}
