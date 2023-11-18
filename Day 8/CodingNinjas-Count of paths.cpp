#include <bits/stdc++.h> 

vector<int> countOfPaths(int N, int K, vector<int> &arr){
    vector<int> ans;
    for(int i=0;i<N;i++)
    {
      int count=0;
      for (int j = 0; j < N; j++) 
      {
        if(j<i && arr[i]%arr[j]==0 && K%arr[j]==0 && K%arr[i]==0)
        {
            count++;
        }
      }
      if(count==0)
      count=1;
      ans.push_back(count);
    }
    return ans;
}
