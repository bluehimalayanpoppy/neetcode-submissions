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
    vector<int> countBits(int n) {
        
    //2 00000010

    //if n = 4 
    //0, 1, 2 , 3, 4 
    //0: 0 
    //1: 00000001
    //2: 00000010
    //3: 00000011
    //4: 00000100
    vector <int> output; 
    
    for (int i = 0; i <= n; ++i) 
    {
        //for each index 
        //add corresponding # of 1s for one number this will be 
        // output[i]
        //call # of 1 bits 
        output.push_back(hammingWeight(i));
    }

    return output; 
    }
};
