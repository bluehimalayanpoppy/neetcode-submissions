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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> result; 
        //fifo 
        queue <TreeNode*> q; 
        if (root == nullptr)
        {
            return vector<vector<int>> {}; 
        }
      
        int savedlevelSize; 
        if (root != nullptr)
        {
            q.push(root); 
        }
      
        while (!q.empty())
        {
            savedlevelSize = q.size(); 
            vector<int> Inner;

            //for every node in a level 
            //add it and push its children to the queue
            for (int i = 0; i < savedlevelSize; ++i)
            {
                TreeNode* front = q.front(); 
                Inner.push_back(front -> val); 
                q.pop(); 
            
                
                    if (front -> left != nullptr)
                    {   
                   
                        q.push(front -> left); 
                    }

                    if (front -> right != nullptr)
                    { 
                        
                        q.push(front -> right);
                    }  

            }
            result.push_back(Inner);
        }
        return result;
        
    }
    };

