#include<iostream>
using namespace std;
int n;
int maze[10][10],sol[10][10];
bool isSafe(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<n && maze[x][y]==1)
    {
        return true;
    }
    return false;
}
bool solveMazeUtil(int x,int y)
{
    if(x==n-1 && y==n-1 && maze[x][y]==1)
    {
        sol[x][y]=1;
        return true;
    }
    if(isSafe(x,y)==true)
    {
        if(sol[x][y]==1)
            return false;
        sol[x][y]=1;
        if(solveMazeUtil(x + 1, y)==true)
            return true;
        if(solveMazeUtil(x, y + 1)==true)
            return true;
        sol[x][y]=0;
        return false;
    }
    return false;
}
bool solveMaze()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sol[i][j]=0;
        }
    }
    if(solveMazeUtil(0,0)==false)
    {
        cout<<"Solution doesn't exist";
    }
    else
    {
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
      }
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>maze[i][j];
        }
    }
    solveMaze();
}
