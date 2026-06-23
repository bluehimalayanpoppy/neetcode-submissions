class Solution {
public:
    int getSum(int a, int b) {
    

    if (a == 0)
    {
        return b; 
    } 

    if (b == 0)
    {
        return a; 
    }
    

    //calculating carries
    int carry = (a & b) << 1;  

    //calls sum without carry + carry
    return getSum (carry,  a ^ b);
    }
};
