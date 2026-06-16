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
        queue <pair<TreeNode*, TreeNode*>> que; 

        que.push({p,q}); 

        while (!que.empty())
        {
            pair<TreeNode*, TreeNode*> one = que.front(); 
        
             que.pop(); 
            //read current pair 
            //make children 
            //then pop parents 
            if (one.first == nullptr && one.second == nullptr)
            {
                continue; 
            }
            if (one.first && !one.second || !one.first && one.second)
            {
                return false; 
            }
            else 
            {
                if (one.first -> val == one.second -> val)
                {
                    if (one.first -> left != nullptr && one.second -> left != nullptr)
                    {
                        que.push({one.first -> left, one.second -> left});
                        
                    }
                    else if (one.first -> left == nullptr && one.second -> left == nullptr)
                    {
                        
                    }
                    else
                    {
                        return false;
                    }
                    if (one.first -> right != nullptr && one.second -> right != nullptr)
                    {
                        que.push({one.first->right, one.second->right}); 
                    }
                    else if (one.first -> right == nullptr && one.second -> right == nullptr)
                    {
                        
                    }
                    else
                    {
                        return false;
                    }
                }
                else 
                {
                    return false; 
                }
              
            }
    
        }
        return true; 
    }
};
