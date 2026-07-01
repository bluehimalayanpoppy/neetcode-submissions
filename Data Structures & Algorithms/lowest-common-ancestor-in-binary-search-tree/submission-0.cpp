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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        //recursive approach 

        //base case 
        if (root == nullptr)
        {
            return 0;
        }
        //if p or q, found lca 
        if (root == p || root == q)
        {
            return root; 
        }
        
        TreeNode* left = nullptr;
        TreeNode* right = nullptr; 
        //check left subtree 
        if (root -> left != nullptr)
        {
           left = lowestCommonAncestor(root -> left, p, q);
        }

        //check right subtree
        if (root -> right != nullptr)
        {
           right = lowestCommonAncestor(root -> right, p, q);
        }
       
        if (left && right) 
        {
            return root; 
        }
        //only one side found something
        if (!left && right)
        {
            return lowestCommonAncestor (root -> right,p, q);
        }
         if (!right && left)
        {
            return lowestCommonAncestor (root -> left,p, q);
        }
    }
};
