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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    //dfs, 2nd pass


    //base case
    if (p == nullptr && q == nullptr)
    {
        return true; 
    }

    //either don't exist
    if (p == nullptr && q != nullptr || p != nullptr && q == nullptr)
    {
        return false; 
    }
    //p and q exists
    if (p != nullptr && q != nullptr)
    {
        if (p -> val == q -> val)
        {
            return isSameTree(p-> left, q-> left) && isSameTree(p->right, q->right);
        }
        else
        {
            return false;
        }
    }


    }
};
