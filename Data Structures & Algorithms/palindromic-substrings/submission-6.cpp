#include <iostream>
class Solution {
public:
    int countSubstrings(string s) {
    
    //expand from center 
    

    //a - 0 
    //0 where a is the center except for itself 
    //a 
    //a - 1 
    //a 
    //a a a 
    //a - 2
    //a 

    //aaaa 
    //a - 0 
    int count = 0;
    int left; 
    int right;
    int n = static_cast<int> (s.length());
    for (int i = 0; i < n; ++i)
    {
        left = i; 
        right = i; 
        //vary lengths outward by 1 
        //until right reaches the end
        //for odd cases 
        while (right < n && left >= 0) 
        {   //might be a palindrome 
            if (s[left] == s[right])
            {
                count++;
                left--; 
                right++;
            } 
            else
            {
                break;
            }
        }
    }
    //even centers
    for (int i = 0; i < n; ++i)
    {
        left = i; 
        right = i + 1 ; 
        //vary lengths outward by 1 
        //until right reaches the end
        while (right < n && left >= 0) 
        {   //might be a palindrome 
            if (s[left] == s[right])
            {
                count++;
                left--; 
                right++;
            }  
            else 
            {  //stop expanding center
                break; 
            }
            
        }
    }
    return count; 
    }
};
