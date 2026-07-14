class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    
    {
        //two pointers, sliding window,
        //using indexes here, not pointers 
        //using set
        unordered_set <char> window; 

        int left = 0; 
        int right = 0;
        int current;
        int max = 0; 
      
        while (right < s.length())
        {
           
            if (!window.contains(s[right]))
            {
               
               //add to set 
               window.insert(s[right]);
               right++;
            }
            //if duplicate appears
            else
            {
                //move left until remove duplicate
                window.erase(s[left]);
                left++;
            }
            current = right- left;
            if (current > max)
            {
                max = current;
            }
            
        }
        //length is difference of indexes + 1 
        return max;
      
        
    }
};
