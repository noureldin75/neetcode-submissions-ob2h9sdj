class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map <int, int> count;
        vector <vector<int>> bucket(n+1);
        for(auto it:nums){
            count[it]++;
        }
        for (auto &it : count) {
            bucket[it.second].push_back(it.first);
        }
        vector <int> ans;
        for(int i=n;i>=0;i--)
        {
            if(bucket[i].empty()) continue;
            for(auto it:bucket[i]){
                ans.push_back(it);
            if(ans.size()==k)
            return ans;    
            }

            


        }
    


        



        
    }
};
