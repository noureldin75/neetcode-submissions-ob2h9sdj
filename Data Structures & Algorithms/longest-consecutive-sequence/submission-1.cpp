class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st;
        for(auto it:nums){
            st.insert(it);
        }
        int initial_count=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i]-1)!=st.end()){
                continue;
            }
           count++; 
           int num=nums[i];
           while(st.find(num+1)!=st.end()){
            count ++;
            num++;
           }

           if(count>initial_count){
            initial_count=count;
            
           }
           count=0;
        }
        return initial_count;
    }
        
    
};
