/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int> result;
        if(root==NULL)
        {
            return result;
        }
        result.push_back(root->val);
        vector<int> leftTravel=preorderTraversal(root->left);
        result.insert(result.end(),leftTravel.begin(),leftTravel.end());
        vector<int> rightTravel=preorderTraversal(root->right);
        result.insert(result.end(),rightTravel.begin(),rightTravel.end());
        return result;
    }
};
