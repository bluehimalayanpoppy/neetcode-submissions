class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
    //tabulation 

    



   
 
    //first i characters of s be composed in dict words
    
 
    //first i characters of s be composed in dict words


    bool charFails; 
    vector <bool> reachable(s.length()+1, false); 
    reachable[0] = true; 
    for (int i = 0; i < s.size(); ++i)
    {   
        //if position i is reachable check words in dictionary 
        if (reachable[i] == true )
        {
            for (int j = 0; j < wordDict.size(); ++j)
            {
                //checking each character for one dictionary word
                for (int k = 0; k < wordDict[j].size(); ++k)
                {
                    charFails = false;
                    if (s[i + k] != wordDict[j][k])
                    {
                        charFails = true; 
                        break;
                    }
                }
                if (charFails != true)
                {
                    reachable[i + wordDict[j].length()] = true;
                }
           
            }
        }
    }

    return reachable[reachable.size() -1];


    }
};
