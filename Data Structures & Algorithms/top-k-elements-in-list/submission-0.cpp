class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map <int, int> frequency; 

        for (int i = 0; i < nums.size(); ++i)
        {
            
                frequency[nums[i]]++; 
        
        }
        //1 : 1
        //2 : 2
        //3 : 3

        //vector of max frequencies 
        vector <pair <int,int>> actualnumTomax;
         for (const auto key: frequency)
         {
            //review how to insert pairs 
            actualnumTomax.push_back({key.first, key.second});
           
         }
         // (1,1), (2,2), (3,3)

        //1 2 3 
        // if k = 2 
        // we want 2 and 3 
        //sort vector, descending to ascending of maxes 
        //lambda function
        std::sort (actualnumTomax.begin(), actualnumTomax.end(), [] (const pair< int, int> &a, const pair <int, int> &b) {
            return a.second > b.second; 
        });

        //3 2 1
        //1 2 3

        vector <int> answer; 
        for (int i = 0; i < k ; ++i)
        {
            answer.push_back(actualnumTomax[i].first);
        }

        return answer; 
    }
};
