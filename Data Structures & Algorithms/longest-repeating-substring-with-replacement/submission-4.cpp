class Solution {
public:
    int characterReplacement(string s, int k) {
        int Freq[26]={0};
        int l=0;
        int Maxfreq=0;
        int Maxcount=0;
        for(int r=0;r<s.size();r++){
            int idx=s[r]-'A';
            Freq[idx]++;
            Maxfreq=max(Maxfreq,Freq[idx]);
            if(r-l+1-k>Maxfreq){
                Freq[s[l]-'A']--;
                l++;
            }
            Maxcount=max(r-l+1,Maxcount);
        }
           return Maxcount;
          
        
    }
};
