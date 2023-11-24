#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n=matrix.size();
	int m=matrix[0].size();
	vector<int> zerRow;
	vector<int> zercol;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0)
			{
				zerRow.push_back(i);
				zercol.push_back(j);
			}
		}
	}
	for(int i=0;i<zerRow.size();i++)
	{
		for(int j=0;j<m;j++)
		{
			matrix[zerRow[i]][j]=0;
		}
	}
	for(int i=0;i<zercol.size();i++)
	{
		for(int j=0;j<n;j++)
		{
			matrix[j][zercol[i]]=0;
		}
	}
}
