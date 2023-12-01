class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) 
    {
        int count = 0;
        auto isType1 = [&](int i, int j, int k) 
        {
            return (long long)nums1[i] * nums1[i] == (long long)nums2[j] * nums2[k];
        };
        auto isType2 = [&](int i, int j, int k) 
        {
            return (long long)nums2[i] * nums2[i] == (long long)nums1[j] * nums1[k];
        };
        for (int i = 0; i < nums1.size(); ++i) 
        {
            for (int j = 0; j < nums2.size(); ++j) 
            {
                for (int k = j + 1; k < nums2.size(); ++k) 
                {
                    if (isType1(i, j, k)) 
                    {
                        count++;
                    }
                }
            }
        }
        for (int i = 0; i < nums2.size(); ++i) 
        {
            for (int j = 0; j < nums1.size(); ++j) 
            {
                for (int k = j + 1; k < nums1.size(); ++k) 
                {
                    if (isType2(i, j, k)) 
                    {
                        count++;
                    }
                }
            }
        }

        return count;
        }
};
