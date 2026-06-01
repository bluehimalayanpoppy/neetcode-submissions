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

 #include <queue>

class Solution {
public:
    int maxDepth(TreeNode* root) {
        //bfs  
        queue <TreeNode*> q; 

        if (root == nullptr)
        {
            return 0; 
        }
        int depth;
        int savedlevelSize;
        //starting at root
        if (root != nullptr)
        {
            q.push(root); 
        }
        // while queue is not empty
    
        //process entire level 
        //depth increases
        while (!q.empty())
        {
            savedlevelSize = q.size(); 
            //for all the nodes in one level
            for (int i = 0; i < savedlevelSize; ++i)
            {   
                TreeNode* front = q.front(); 
                //process old node: 1, or at front 
                q.pop();
                //push its children 
                if (front -> left != nullptr)
                {
                 q.push(front -> left); 
                }
                if (front -> right != nullptr)
                {
                q.push(front ->right); 
                }
            }
            depth++;
        }

        return depth; 

    }
};
