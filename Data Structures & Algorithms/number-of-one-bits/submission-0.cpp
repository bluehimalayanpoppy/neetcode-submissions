class Solution {
public:
    int hammingWeight(uint32_t n) {
    
    //shifts binary representation to the right >>
    //end is removed 
    //result: 0 & 0 = 0, 0 & 1 = 0, 1 & 0 = 0, 1 & 1 = 1

    int count = 0;
    //loop as long as there are bits left
    while (n != 0)
    {
        //looks at the last bit, is the result 1 
        //if n & 1 ==1 
        if (n & 1)
        {
            count++; 
        }
       
        n = n >> 1; 
    }
    return count; 
    }
};
