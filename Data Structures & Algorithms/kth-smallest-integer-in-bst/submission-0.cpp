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
    int i = 0; 
    int answer = 0; 
    int kthSmallest(TreeNode* root, int k) {
        
        if (root == nullptr)
        {
            return 0; 
        }

        
        if (k == 0) 
        {
            return root -> val; 
        }

        return helper (root, k);
      
    }

    int helper (TreeNode* root, int k )
    {  
        int result;
        if (root == nullptr)
        {
            return 0; 
        }
        
        if (root -> left != nullptr)
        {
            helper (root -> left, k);
           
        }
            i++;
            
        if (i == k)
        {   
               answer = root -> val; 
        }
        
       
        if (root -> right != nullptr)
        {
            return helper (root -> right, k); 
        }
        return answer;
        
    }
};
