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
    int maxDepth(TreeNode* root) {

        if (root == nullptr)
        {
            return 0; 
        }
        //pair 
        stack<pair<TreeNode*, int>> keepingTrack; 
        //height 1 for root
        pair <TreeNode*,int> one = {root, 1}; 
        keepingTrack.push(one); 

        //intialize 
        int maxHeight = 0; 

        while (!keepingTrack.empty())
        {   
            //top 
            //process it
            //push children 
            pair <TreeNode*, int> top = keepingTrack.top();
            //push children 
            keepingTrack.pop(); 
            //increase depth 
            if (top.first -> left != nullptr)
            {
            keepingTrack.push({top.first -> left, top.second +1} );
            }
            if (top.first -> right != nullptr)
            {
            keepingTrack.push({top.first -> right, top.second +1});
            }
            maxHeight = max(maxHeight, top.second); 
        }
        return maxHeight; 
    }
    
};
