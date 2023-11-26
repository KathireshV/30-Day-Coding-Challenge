#include<bits/stdc++.h>
using namespace std;
int graph[100][100];
int minc(int cost[],bool vis[],int n)
{
    int min=INT_MAX;
    int vertex=0;
    for(int i=0;i<n;i++)
    {
        if(cost[i]<min && vis[i]==false)
        {
            min=cost[i];
            vertex=i;
        }
    }
    return vertex;
}
void prims(int n)
{
    bool vis[n];
    int parent[n];
    int cost[n];
    for(int i=0;i<n;i++)
    {
        vis[i]=false;
        cost[i]=INT_MAX;
    }
    cost[0]=0;
    parent[0]=-1;
    for(int i=0;i<n;i++)
    {
        int vertex=minc(cost,vis,n);
        vis[vertex]=true;
        for(int j=0;j<n;j++)
        {
            if(graph[vertex][j] && vis[j]==false && graph[vertex][j]<cost[j])
            {
                parent[j]=vertex;
                cost[j]=graph[vertex][j];
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        cout<<parent[i]<<" "<<i<<" "<<cost[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>graph[i][j];
        }
    }
    prims(n);
}
