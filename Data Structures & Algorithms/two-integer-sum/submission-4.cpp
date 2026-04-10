class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; 
        int complement;

        for(int i =0 ;i<nums.size();i++){
            complement = target-nums[i];
            if(mp.count(complement)){
               return{mp[complement],i};
            }
            mp[nums[i]]=i;
            
        }
        return {};

        
        
        
    }
};
