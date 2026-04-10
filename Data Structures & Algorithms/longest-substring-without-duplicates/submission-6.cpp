class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int visited[256]={0};
        int l=0;
        int length =0;
        int curr=0;
        for(int r=0;r<s.size();r++){
            int idx=s[r];
            if(visited[idx]){
              l=max(visited[idx],l);  
            
            }
            visited[idx]=r+1;
            curr=r-l+1;
            length=max(length,curr);
        }
        return length;

        
    }
};