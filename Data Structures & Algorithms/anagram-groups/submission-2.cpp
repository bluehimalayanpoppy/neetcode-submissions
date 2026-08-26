class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map <string, vector<string>> s; 
        //3rd pass 
        for (size_t i = 0; i < strs.size(); ++i)
        {
            //if you cant find the sorted word already, then sort 

            string copy = strs[i];
             std::sort(copy.begin(), copy.end()); 
            if (strs[i] != copy)
            {
              
                s[copy].push_back(strs[i]);
            } 
            else 
            {
                //key should also be in the value vector
                s[copy].push_back(strs[i]);
            }

        }
        //act, opst, opst, act, opst, aht 
        vector<vector<string>> result (s.size()); 
        int i =0;
        while (i < s.size())
        {  
            for (auto copy: s)
            {  
                for (int j = 0; j < copy.second.size(); ++j)
                {
                result[i].push_back(copy.second[j]); 
                }
                i++;
            }
            
        }
        return result; 
    }
};
