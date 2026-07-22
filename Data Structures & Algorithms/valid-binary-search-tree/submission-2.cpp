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
    int lower = -100000000; 
    int upper = 100000000;
    bool isValidBST(TreeNode* root) {
      
        bool left = false; 
        bool right = false;
        //empty tree is valid
        if (root == nullptr)
        {
            return true;
        }
        
        
        return bounds(root, lower, upper); 
    }


    bool bounds(TreeNode *node, int lower, int upper)
    { 
        bool left = 1; 
        bool  right = 1; 
        if (node == nullptr)
        {
            return true;
        }
        if ( !(lower < node -> val && node -> val < upper) )
        {
            return false;
        }

        if ( node -> left != nullptr)
        {
            left =  bounds(node -> left, lower, node -> val);
        }

        if ( node -> right != nullptr)
        {
            right = bounds(node -> right, node -> val, upper); 
        }
     
        return left && right; 
      
    }
};
