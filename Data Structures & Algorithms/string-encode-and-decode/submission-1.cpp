class Solution {
public:
    map <char, string> hash; 
    string encode(vector<string>& strs) {

        //consider case where the original vector of strs has a number
        string result; 
        //["Hello", "World"]
        //one index for each string 
        int n = static_cast <int> (strs.size()); 
        const char esc = static_cast<char>(255);
        for (int i = 0; i < n; ++i)
        { 
            //for each string in the vector
            string len =  to_string(strs[i].size()); 
            hash[i] = len;
            hash[i] += esc;

            for (char c : strs[i]) 
            {
                if (isdigit(static_cast<unsigned char>(c))) {
                    hash[i] += esc;
                }
                hash[i] += c;
            }
          
        }
        for (auto copy: hash)
        { 
            //add string + length to one big string 
            result+= (copy.second); 
        }
        return result; 
    }

    vector<string> decode(string s) {
        //num string back to num
        
        vector<string> answer;
        int stringStart = 0;
        //current pointer tracking position
        int j = 0;
        const char esc = static_cast<char>(255);
        string length = "";
        int numLength;
        int numStrings = 0; 
        
        while (j < s.size())
        {   //when its a digit get the length, use esc as boundary
            while (s[j] != esc)
            {   //string '56' to 56 
                length += (s[j]);
                j++;
            }
            numLength = stoi(length); 
            //move past escape character
            j++;
            //for one string 
            //read until you reach a digit
            //while (!isdigit(s[j]))
            answer.push_back("");
            while(stringStart < numLength)
            {   
                if (s[j] == esc)
                {
                    j++;
                }
                //construct string till length 
                answer[numStrings].push_back(s[j]);
                j++;
                stringStart++;
            }
                //reset num of characters consumed 
                stringStart = 0; 
            //length is numbers before each string 

            numStrings++; 
            length.clear();      
        }
        return answer;
    }
};
