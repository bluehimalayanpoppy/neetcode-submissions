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
    int maxDepth(TreeNode* root) {
    int depth = 0;
    
    if (root == nullptr)
    {
        return 0; 
    }

    int left = 0;
    int right = 0; 
    //max of both paths
    if (root -> left != nullptr)
    {
        left = maxDepth(root -> left);
    }

    if (root != nullptr && root -> right != nullptr)
    {
        right = maxDepth(root -> right);
    }

    depth = 1 + std::max(right,left); 
    return depth;
    }
};
