class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //26 ints to 0 
        unordered_map <char, int> counter; 
        //a = 97, need to get it to 0

        for (int i = 0; i < s.length(); ++i)
        {
            //increase counter for this char
            counter[s[i]]++;
        }
         
        for (int j = 0; j < t.length(); ++j)
        { 
            //increase counter for this char
            counter[t[j]]--;      
        }
        
        //for each key value pair 
        // is the value 0 
        //range based for loop
        for (auto copyofmapElement: counter)
        {
            //check if second = 0
            if (copyofmapElement.second != 0)
            {
                return false; 
            }
        }
        return true;   
    }
};

