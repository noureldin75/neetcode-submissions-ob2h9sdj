// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         int Freq[26]={0};
//         int  l=0;
//         int matches=26-s1.size();

//         for(auto it:s1){
//             Freq[it-'a']++;
//         }
        

//         for(int r=0;r<s2.size();r++){
//             if(r-l+1>s1.size()){
//                 Freq[l-'a']++;
//                 l++;

//             }
            
//                 Freq[s2[r]-'a']--;
//                 if(Freq[s2[r]-'a']>0){
//                     matches++;
//                 }
            
//         }
//         return matches==26;
        
//     }
// };

// ________________________________________________
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        int m = s1.size();
        int l = 0;

        for (char c : s1) {
            freq[c - 'a']++;
        }

        for (int r = 0; r < (int)s2.size(); ++r) {
            freq[s2[r] - 'a']--;

            if (r - l + 1 > m) {
                freq[s2[l] - 'a']++; 
                ++l;
            }

            bool allZero = true;
            for (int k = 0; k < 26; ++k) {
                if (freq[k] != 0) {
                    allZero = false;
                    break;
                }
            }
            if (allZero) return true;
        }

        return false;
    }
};
