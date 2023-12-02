class Solution {
public:
    void removeDuplicates(vector<vector<int>>& vector_2d) 
    {
    for (auto& row : vector_2d) {
        sort(row.begin(), row.end());
    }
    sort(vector_2d.begin(), vector_2d.end());
    vector_2d.erase(unique(vector_2d.begin(), vector_2d.end()), vector_2d.end());
}
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0 && i!=j && i!=k && j!=k)
                    {
                        ans.push_back({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        removeDuplicates(ans);
        return ans;
    }
};
