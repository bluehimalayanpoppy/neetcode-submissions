class Solution {
public:
    bool isPalindrome(string s) {
    
     if (s.empty())
    {
        return true;
    }
    //inward traversal 
    //two pointers
    char *ptr1 = &s[0];
    char *ptr2 = &s[s.length()-1];
    int i = 0; 

    while (ptr1 < ptr2)
    {   
        //isalnum, valid character
        //skip when either left or right invalid 
        if (!isalnum(*ptr1))
        { 
          ++ptr1;
        }
        else if (!isalnum(*ptr2) )
        {
         --ptr2; 
        }

        else
        {

        
        if (std::tolower(static_cast <unsigned char> (*ptr1)) != 
        std::tolower(static_cast <unsigned char> (*ptr2))   )
        {
            return false; 
        }
        ++ptr1;
        --ptr2;
        }

    
    }
    return true; 
    }
};
