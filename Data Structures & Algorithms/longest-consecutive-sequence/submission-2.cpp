class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st(nums.begin(), nums.end());
       
        int initial_count=0;
        

        for(int num:nums){
            int count=0;
            if(st.find(num-1)!=st.end()){
                continue;
            }
           count++; 
           while(st.find(num+1)!=st.end()){
            count ++;
            num++;
           }
           initial_count=max(count,initial_count);

           
        }
        return initial_count;
    }
        
    
};
