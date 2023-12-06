class Solution {
public:
    int totalMoney(int n) 
    {
        int s=0,count=0,c=1;
        if(n==1)
        {
            return 1; 
        }
        for(int i=1;i<n;i++)
        {
            for(int j=i;j<i+7;j++)
            {
                count++;
                s+=j;
                if(count==n)
                {
                    c=0;
                    break;
                }
            }
            if(c==0)
            {
                break;
            }
        }
        return s;
    }
};
