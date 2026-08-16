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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

    //preorder: root, left, right 
    //inorder: left, root, right 
    TreeNode* root = new TreeNode;
     int preIndex = 0; 
    return helper(preorder, preIndex, inorder,0, preorder.size()-1);
   
   
        
    }

    TreeNode* helper (vector<int> & preorder, int &preIndex, vector <int> & inorder, int left, int right)
    {
        if (left > right)
        {
            return nullptr;
        }
        
        int current = preorder[preIndex]; 
        preIndex++; 
        TreeNode* root = new TreeNode(current); 
        //find iterator to preorder value in inorder 
        int rootPosition = std::distance( inorder.begin() ,std::find(inorder.begin()+ left, inorder.begin()+ right+1, current) );

       //left subtree 
       root -> left = helper(preorder, preIndex, inorder, left, rootPosition-1); 

       //right subtree 
       root -> right = helper(preorder, preIndex, inorder, rootPosition + 1,    right); 

        return root; 
    }
};
