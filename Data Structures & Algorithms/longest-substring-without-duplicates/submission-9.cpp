class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet; // Set عشان يخزن الحروف اللي جوة الـ window
        int l = 0, r = 0;
        int maxLength = 0;

        while (r < s.length()) {
            if (charSet.find(s[r]) == charSet.end()) {
                charSet.insert(s[r]);             
                maxLength = max(maxLength, r - l + 1);
                r++;                              
            } 
            else {
                charSet.erase(s[l]);              
                l++;                             
            }
        }
        return maxLength;
    }
};