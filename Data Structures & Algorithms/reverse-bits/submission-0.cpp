class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        //uint32_t, stored in binary internally 
        //string of bits 00001
        int countOne = 0; 
        int countZero = 0; 
        uint32_t result; 
        int count = 0; 

        while (count < 32)
        {
            
            //shift old to left 
                //0110 
                //1100
                result = (n & 1 | result << 1); 
                //or, if theres a one anywhere in the column the answers 1 
                //1 | 0 = 1, 0 | 0 = 1, 1 | 1 = 1
                
               //1100 | 0001 = 1101, 1 goes in empty spot 

            //shift right, each time removes one bit from the right
            n = n >> 1; 
            count++;
        } 
        return result; 
       
        
    }
};
