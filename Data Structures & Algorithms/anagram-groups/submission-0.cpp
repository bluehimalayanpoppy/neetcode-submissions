class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
  
    vector<vector<string>> vecofVec; 
    //if vector only has one string, return itself
    if (strs.size() == 1) 
    {
        
        vecofVec.push_back({strs[0]});
        return vecofVec; 
    }
  
    unordered_map <string, vector<string>> sorted; 
    //exact same characters with same frequencies 
    for (int i = 0; i < strs.size(); ++i)
    {
        string copy = strs[i];
        //for each string sort original
        //key should be a single string, sorted
        //value should be the original vector of strings 
        std::sort(copy.begin(), copy.end());
        //sorted[copy].first = copy; 
        sorted[copy].push_back(strs[i]);

    }
    vector<vector<string>> final; 
    for (auto copyofmap: sorted)
    {
        //for every key value pair take the vectors and add to final
        final.push_back(copyofmap.second);
    }
    return final;
    
    }

};
