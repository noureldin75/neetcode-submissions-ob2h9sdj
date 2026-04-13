class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;
        int Window[26]={0};
        int s1Freq[26]={0};
        int l=0,matches=0;

        for(int i=0;i<s1.length();i++){
            Window[s2[i]-'a']++;
            s1Freq[s1[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(Window[i]==s1Freq[i]){
                matches++;
            }
        }

        for(int r=s1.length();r<s2.size();r++){
            if(matches==26) return true;
            Window[s2[r]-'a']++;

            if(Window[s2[r]-'a']==s1Freq[s2[r]-'a'])
                matches++;
            else if(Window[s2[r]-'a']==s1Freq[s2[r]-'a']+1)
                matches--;


            Window[s2[l]-'a']--;

            if(Window[s2[l]-'a']==s1Freq[s2[l]-'a'])
                matches++;
            else if(Window[s2[l]-'a']==s1Freq[s2[l]-'a']-1)
                matches--;    

            l++;    

        }
        return matches==26;
        
    }
};
