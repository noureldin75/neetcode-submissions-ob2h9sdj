class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        unordered_map<int, int> mp; 
        int complement;

        for(int i =0 ;i<nums.size();i++){
            complement = target-nums[i];
            if(mp.count(complement)){
                ans.push_back(mp[complement]);
                ans.push_back(i);
            }
            mp[nums[i]]=i;
            
        }
        return ans;

        
        
        
    }
};
