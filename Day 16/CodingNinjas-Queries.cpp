#include <bits/stdc++.h>
vector<int> answerQueries(vector<vector<int>> &queries, int limit) 
{
    vector<int> result;
    stack<int> st;

    for (const auto &query : queries) 
    {
        if (query[0] == 1)
        {
            int x = query[1];
            if (st.size() < limit) 
            {
                st.push(x);
            }
        } 
        else if (query[0] == 2)
        {
            if (!st.empty()) 
            {
                result.push_back(st.top());
                st.pop();
            } 
            else 
            {
                result.push_back(-1);
            }
        } 
        else if (query[0] == 3)
        {
            int k = min(query[1], static_cast<int>(st.size()));
            int y = query[2];
            stack<int> temp;

            while (k > 0) 
            {
                temp.push(st.top() + y);
                st.pop();
                k--;
            }

            while (!temp.empty()) 
            {
                st.push(temp.top());
                temp.pop();
            }
        }
    }

    return result;
}
