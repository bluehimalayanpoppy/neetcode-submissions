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
        queue <pair<TreeNode*, TreeNode*>> structure; 
        //fifo
        //if both are empty 
        if (p == nullptr && q == nullptr)
        {
            return true;
        }
        structure.push({p,q});
        while (!structure.empty())
        {
            //save and check front 
            auto [pairOne,pairTwo] = structure.front();

            //remove front 
            structure.pop(); 

            //compare values of front and then add their children 
            if (pairOne != nullptr && pairTwo != nullptr)
            {

                if (pairOne -> val == pairTwo -> val)
                {
                    structure.push({pairOne->left, pairTwo -> left}); 
                    structure.push({pairOne->right, pairTwo -> right}); 
                }
                else
                {
                    return false;
                }
            }
            else if (pairOne ==nullptr && pairTwo != nullptr|| pairTwo == nullptr && pairOne!=nullptr)
            {
                return false;
            }
        
        }
        return true;
    }
};
