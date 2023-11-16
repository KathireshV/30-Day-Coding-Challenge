vector<int> leftRotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    vector<int> rotated(nums.begin() + k, nums.end());
    rotated.insert(rotated.end(), nums.begin(), nums.begin() + k);
    return rotated;
}

vector<vector<int>> leftRotationsOfArray(vector<int> nums, vector<int> queries) {
    vector<vector<int>> result;

    for (int rotation : queries) 
    {
        nums = leftRotate(nums, rotation);
        result.push_back(nums);
    }
    return result;
}
