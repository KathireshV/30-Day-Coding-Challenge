class Solution {
public:
    string multiply(string num1, string num2) 
    {
        int m = num1.size();
        int n = num2.size();
        vector<int> result(m + n, 0);
        for (int i = m - 1; i >= 0; i--) 
        {
            for (int j = n - 1; j >= 0; j--) 
            {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j] += sum / 10; 
                result[i + j + 1] = sum % 10; 
            }
        }

        string finalResult;
        for (int digit : result) 
        {
            if (!(finalResult.empty() && digit == 0)) 
            {
                finalResult.push_back(digit + '0');
            }
        }
        return finalResult.empty() ? "0" : finalResult;   
    }
};
