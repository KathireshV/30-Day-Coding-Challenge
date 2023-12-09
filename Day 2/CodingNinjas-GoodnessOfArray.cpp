vector<int> goodnessOfArray(int n, int m, vector<int>& a, vector<int>& b) 
{
    vector<int> ans;
    int max=0;
    for(int i=0;i<n;i++)
    {
        max=0;
        for(int j=0;j<m;j++)
        {
            int m=a[i]%b[j];
            if(m>max)
            {
                max=m;
            }
        }
        ans.push_back(max);
    }
    return ans;
}
