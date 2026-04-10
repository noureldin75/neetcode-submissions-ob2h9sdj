class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st(nums.begin(), nums.end());
       
        int initial_count=0;
        

        for(int num:nums){
             if ((st.find(num - 1)) == st.end()) {
                int count = 1;
                while(st.find(num+1)!=st.end()){
            count ++;
            num++;
           }
            initial_count=max(count,initial_count);

             }
 
           
          

           
        }
        return initial_count;
    }
        
    
};
