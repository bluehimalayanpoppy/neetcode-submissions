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
    TreeNode* invertTree(TreeNode* root) {
        //base case 
        if (root == nullptr)
        {
            return 0; 
        }
        // save left and right 
        //swap them
        //recursively invert both subtrees 
        //return root
        
           TreeNode* left = root -> left; 
           TreeNode* right = root -> right;  
           root -> left = root -> right; 
           root -> right = left; 
        
        if (root -> right != nullptr)
        {
             invertTree (root -> right); 
        }

        //left subtree
        if (root -> left != nullptr)
        {
            invertTree (root -> left); 
        }
        return root; 
    }
};
