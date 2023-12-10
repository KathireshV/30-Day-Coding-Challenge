#include <bits/stdc++.h> 
int findBestMeetingPoint(vector<vector<int>> &mat)
{
     vector<int> x;
     vector<int> y;
     int n=mat.size();
     int m=mat[0].size();
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<m;j++)
          {
               if(mat[i][j]==1)
               {
                    x.push_back(i);
                    y.push_back(j);
               }
          }
     }
     sort(x.begin(),x.end());
     sort(y.begin(),y.end());
     int size=x.size()/2;
     int x1=x[size];
     int y1=y[size];
     int dis=0;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<m;j++)
          {
               if(mat[i][j]==1)
               {
                    dis+=abs(x1-i)+abs(y1-j);
               }
          }
     }
     return (dis);
}

