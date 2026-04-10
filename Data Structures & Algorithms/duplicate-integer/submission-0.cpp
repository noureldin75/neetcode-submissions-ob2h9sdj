class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        set <int> dubnums;
        for(int it : nums){
            dubnums.insert(it);        }
        
    
    if(nums.size() == dubnums.size()){
        return false;
    
    }
    else
    return true;
    }
};