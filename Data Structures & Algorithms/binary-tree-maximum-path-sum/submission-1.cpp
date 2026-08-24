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
    int maxPath = INT_MIN; 
    int maxPathSum(TreeNode* root) {

         path(root);
         return maxPath;

    }
    int path(TreeNode* node)
    {// a path link where edges connect parent and children 
    // does not need to be the root 
    

        //path node is path a direction downward
        //if current node is negative its children could still be valid
        int oneSided = 0; 
        int leftSub = 0; 
        int rightSub = 0; 
        if (node ->val > 0)
        {
            oneSided += (node -> val);  
        }
        if (node -> left != nullptr)
        { 
            //what best contribution from child is 
            leftSub = path(node->left); 
            //if childs contribution is negative
            if (leftSub <= 0)
            {
                leftSub = 0; 
            }
           
        }  

        
        if (node -> right != nullptr )
        {
            rightSub = path(node->right); 
            if (rightSub <= 0)
            {
                rightSub = 0; 
            }
        }
        //current longest path
        oneSided = std::max(leftSub + node->val,rightSub +node->val); 
        //sum is one sided value that path returns

        //biggestPath i can find anywher node + left contribution + right
        int biggest = leftSub + node->val + rightSub; 
        if (biggest > maxPath)
        {
            maxPath = biggest; 
        }
        return oneSided;

    }
};
