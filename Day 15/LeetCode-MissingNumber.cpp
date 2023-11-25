class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int sum=0,tsum=0,a=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            tsum+=a;
            a++;
        }
        return (tsum-sum);

    }
};
