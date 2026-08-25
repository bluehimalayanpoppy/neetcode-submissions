class Solution {
public:
    string minWindow(string s, string t) {
        

        //slidign window will be for s 
        int left = 0; 
        int right = 0; 
        int smallest = INT_MAX; 
        string final; 
        string current;

        //go through all the letters in t 
        unordered_map <char, int> stringT; 
        for (int i = 0; i < t.length(); ++i)
        {
            stringT[t[i]]+=1; 
        }
        //how many in t 
        int remaining = t.length(); 
        while (right < s.length())
        {
            //if the character in s is in T 
            if (stringT.find(s[right]) != stringT.end())
            {
                
                //check if the count of current in T is positive then decrement remaining
                if (stringT[s[right]]>0)
                {
                    remaining--;
                }
                //decrement actual frequency/count if you still have a character count in t remaining
                stringT[s[right]]--;
            }
            right++;
    
            //now can the substring be shifted left, reduced even smaller
            while (remaining == 0)
            { 
                //if character isnt even in T, keep shrinking
                if (stringT.find(s[left]) == stringT.end())
                {
                    left++;
                }
                else if (stringT[s[left]] < 0) //got extra copy
                {
                    //if I can remove left increment pointer 
                    stringT[s[left]]++;
                    left++;
                } 
                else //dont do anything if need 0 more of character s is at 
                {
                    
                    break;
                }
            }
            if (remaining ==0)
            {
            //save window when done shrinking
            current = s.substr(left, right-left); 
                if (current.length() < smallest)
                {
                smallest = current.length(); 
                final = current; 
                }
            }
           
        }
        return final;
        
        return "";
       
    }
};
