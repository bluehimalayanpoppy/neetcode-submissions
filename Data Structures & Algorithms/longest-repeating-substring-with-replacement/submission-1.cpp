class Solution {
public:
    int characterReplacement(string s, int k) {
    
    int left = 0; 
    int right = 0; 

    char maxFrq; 
    int max = -100000;
    
    unordered_map <char, int> frequencies; 
    //new string is js sliding window

    
    while (right < s.length())
    {
        frequencies[s[right]]++;
        
       
        if (frequencies[s[right]] > max)
        {
            maxFrq = s[right];
            max = frequencies[s[right]];
        }
        right++;
        
        //if most common character is chosen is the remaining one < k
        while (!  ((right -left) - max <= k) )
        {//if window is not valid 
            frequencies[s[left]]--; 
            left++;
            //shrink window
           
        }

    }

    return right - left; 


    }
};
