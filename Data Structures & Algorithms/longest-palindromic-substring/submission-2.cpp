class Solution {
public:
    string longestPalindrome(string s) {
    
        //tabulation
        vector<vector<int>> table (s.length(), vector<int> (s.length())); 
        string answ = " ";
        int longest = 0; 
        int finalStart;

        //length
        for (size_t length = 1; length <= table.size(); ++length)
        {   //start  end <= size -1 
            //start + length -1 <= size -1
            for (size_t start = 0; start + length <= table[0].size(); ++start)
            {
                int end = start + length -1 ; 
                if (length == 1)
                {   
                    //a b a b d
                    table[start][end] = 1; 
                }
                //just 2 letters 
                else if (length == 2)
                {
                    if (s[start] == s[start+1])
                    {
                        table[start][end] = 1; 
                    }    
                }
                //if string is 3 +
                //check outside characters & if the inside is filled in  
                else if (s[start]== s[end] &&  table[start+1][end-1] == 1)
                {
                    table[start][end] = 1; 
                }
                if (table[start][end] == 1)
                {
                    if (length > longest)
                    {
                        longest = length; 
                        finalStart = start; 
                    }
                }
            }
        }
        return s.substr(finalStart,longest);
    }
};
