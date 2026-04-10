class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp1;
        multimap <int,int> mp2;
        vector <int> ans;

        for(auto it:nums){
            mp1[it]++;
        }
        
        for(auto it = mp1.begin(); it != mp1.end(); ++it){
            mp2.insert({it->second,it->first});
        }
        auto it = prev(mp2.end());
        for(int i=0;i<k;i++){
            ans.push_back(it->second);
            it--;
        }
        return ans;
    }
};
