class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //vector of hashmaps for each of the words in strs
       
        vector<string> sorted = strs;
        for (auto &oneString: sorted)
        { 
            std::sort(oneString.begin(), oneString.end());
        }

        unordered_map <string,int> freq;
        vector<vector<string>> result; 
        
        
        
        if (strs.size() == 1)
        {
            result.emplace_back(strs);
            return result;
        }
        
        int j =0;
        for (size_t i = 0; i < strs.size(); ++i)
        {   //if sorted string hasn't been seen before
            if (freq.find(sorted[i]) == freq.end())
            {
                
                freq[sorted[i]] = j; 
                result.push_back({});
                j++;
            } 
                
                result[freq[sorted[i]]].push_back(strs[i]);
               
            
        }
        return result;
    }
};
