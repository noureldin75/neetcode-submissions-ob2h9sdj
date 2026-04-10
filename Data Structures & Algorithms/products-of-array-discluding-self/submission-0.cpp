class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        
        prefix[0]=1;
        int product=1;
        for(int i=0;i<n-1;i++){
            product*=nums[i];
            prefix[i+1]=product;
        }
       
        suffix[n-1]=1;
        product=1;
        for(int i=n-1;i>0;i-- ){
            product*=nums[i];
            suffix[i-1]=product;
        }

        for(auto it : suffix){
            cout<<it<<" ";
        }
        cout<<"\n";
        for(auto it : prefix){
            cout<<it<<" ";
        }

        vector<int> result;
        for(int i=0;i<n;i++){
            
            result.push_back(prefix[i]*suffix[i]);
        }
        return result;
        

    }
};
