class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) : k(k){
       
        //set k from class = to constructor k 
        
        for (auto num: nums)
        {
            pq.push(num);
        }
        if (pq.size()>k)
        {
            pq.pop();
        }
    }
    
    //smallest of min heap is kth largest
    //maintain min heap that contains  kth largest elements numbers so far
    int add(int val) {

        //add to heap bc val could be one of the larger numbers 
        pq.push(val); 
        //if heap has more than k elements
        while (pq.size() > k) 
        {//if equal to k already there
            pq.pop();
        }
        return pq.top(); 
        
    }
    vector<int> nums; 
    //type container comparator
    priority_queue <int, vector<int>, greater <int>> pq; 
    int k; 
};
