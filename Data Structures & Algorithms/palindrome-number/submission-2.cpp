class Solution {
public:
    //solved on leetcode before blind 75
    bool isPalindrome(int x) {
        //its a palindrome if the numbers in ascending order match the numbersin 
        //descending order 

       
       //convert in to string 
       string forward = to_string(x); 

        // 1 2 1 3 4
        //check 1 and 4 
        //check 2 and 3
        // i = 0 
        // 2, 1, 0
        //
        for (int i = 0; i < forward.length(); ++i)
        {
            if (forward[i] != forward[ forward.length() - i - 1])
            {
                    return false; 
            }
        
        }
        return true; 
    }
};