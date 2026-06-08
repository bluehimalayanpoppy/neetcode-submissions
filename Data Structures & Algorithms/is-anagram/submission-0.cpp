class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //26 ints to 0 
        vector <int> counter (26,0); 
        //a = 97, need to get it to 0

        for (int i = 0; i < s.length(); ++i)
        {
            counter[s[i]-'a']++;
        }
         
        for (int j = 0; j < t.length(); ++j)
        { 
            counter[t[j]-'a']--;      
        }

        for (int i = 0; i < 26; ++i)
        {
            if (counter[i] != 0)
            {
            return false; 
            }
        }
        return true; 

        
    }
};

