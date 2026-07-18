class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        //sort array 
        std:sort(nums.begin(), nums.end());

        //vector made up from every number but i to see if all 3 sum to 0
        vector <int> vectorTwoSum; 

        // temporary answer with tiny vectors at each i 
        vector<vector<int>> tiny;
        

        //set 
        set<vector<int>> beforeConversion; 

        //fix one number 
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                vectorTwoSum.push_back(nums[j]);
            }
            //vector for 2 sum includes all numbers after it 
            tiny = twoSum(vectorTwoSum, nums[i]); 
            
           
            //adds 3rd number to 2 number vector, adds nums[i] to each pair 
            for (int k = 0; k < tiny.size(); ++k)
            {
                tiny[k].push_back(nums[i]);
                //sorting individual triplets
                std::sort(tiny[k].begin(), tiny[k].end());
                beforeConversion.insert(tiny[k]);

            }
            tiny.clear(); 
    
            vectorTwoSum.clear(); 
        }  
     
        vector<vector<int>> final(beforeConversion.begin(), beforeConversion.end());
        return final;
    }

    vector<vector<int>> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hashmap; 
        //need number target - x 
        int need; 
        int a;
        vector<vector<int>> answer;
        vector<int> one;
        //lets make values the indixes
        for (int i = 0 ; i < nums.size(); ++i)
        { 
            need = 0 - target - nums[i]; 

            //check before insert
            //find the index that matches need
            auto b = hashmap.find(need);

            //if found return answer
            if (b != hashmap.end())
            {
                one = { (*b).first, nums[i] }; 
                answer.push_back(one); 
            }
            one.clear(); 

            //store current number in hashmap
            hashmap[nums[i]] = i; 
        } 
        return answer; 
    }

};
