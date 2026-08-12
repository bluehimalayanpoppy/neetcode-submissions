/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        
        //original + deep copy
        unordered_map<Node*,Node*> copy; 

       
        //traverse using iterative dfs 
        stack <Node*> traverse;
        set <Node*> visited; 
        if (node == nullptr)
        { 
            return nullptr; 
        }
        else 
        {
            traverse.push(node); 
       

            while(!traverse.empty())
            {
            Node* current = traverse.top();
            traverse.pop(); 
            //check before processing
                if (visited.count(current))
                {
                continue; 
                }
                visited.insert(current); 
                //deep copy
                if (copy.find(current) == copy.end())
                {
                    copy[current] = new Node (current->val);
                } 
                //for each node in the neighbors vector of current
                for (auto neighbor: current ->neighbors) 
                {
                traverse.push(neighbor);
                //copy of each neighbor node
                if (copy.find(neighbor) == copy.end())
                {
                    copy[neighbor] = new Node(neighbor->val); 
                //connecting copied version of original neighbors               //to neighbors vector of current node
                }
                //even if alr copied, need to create link in case of cycle
                copy[current]->neighbors.push_back(copy[neighbor]);
                }
            }
        }

        //find copy corresponding to original node, b/c its unordered_map
        return copy[node]; 
    
    }
};
