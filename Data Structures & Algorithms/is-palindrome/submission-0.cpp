class Solution {
public:
    bool isPalindrome(string s) {
        string news;
        for(int i=0;i<s.size();i++){
            if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57)){
                news+=s[i];
            }
        }
        int l=0;
        int r=news.size()-1;
        while(l<r){
            if(tolower(news[l])==tolower(news[r])){
                l++;
                r--;
            }
            else{
                return false;
            }
        }
        return true;

        
    }
};
