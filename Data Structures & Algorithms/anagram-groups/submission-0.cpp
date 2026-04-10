class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        unordered_map<string , int> mp;
        for(auto it: strs){
            string temp = it;
            sort(temp.begin(), temp.end());
            
            
            if(mp.count(temp)==0){
                
                ans.push_back({it});
                mp[temp]=ans.size()-1;

            }
            else{
                int idx=mp[temp];
                ans[idx].push_back(it);
                        
            }

            


        }
        return ans;

        
    }
};
