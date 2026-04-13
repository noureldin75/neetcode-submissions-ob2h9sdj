class Solution {
public:
    string minWindow(string s, string t) {
        int tFreq[128]={0};
        int windowFreq[128]={0};
        auto idx = make_pair(0, 0);
        string substring;

        for(int i=0;i<t.length();i++){
            tFreq[t[i]]++;
        }

        int l=0;
        int need=t.length();
        int have=0;
        int minSubstring=1002;

        for(int r=0;r<s.length();r++){
            int currentidx=s[r];
            windowFreq[currentidx]++;
            if(windowFreq[currentidx]<=tFreq[currentidx] && tFreq[currentidx]>0){
                have++;
            }
           while(have==need){
            if(r-l+1<minSubstring){
                minSubstring=r-l+1;
                idx={l,r};
            }
            
            auto leftchar=s[l];
            windowFreq[leftchar]--;
            if(windowFreq[leftchar]<tFreq[leftchar] && tFreq[leftchar]>0){
                have--;
            }
            l++;
           }
                

        }
           

        
        if(minSubstring==1002){
            return "";
        }
        for(int i=idx.first;i<idx.second+1;i++){
                substring+=s[i];
            }
        return substring;

     
        
    }
};
