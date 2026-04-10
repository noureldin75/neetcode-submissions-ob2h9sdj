class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int sum =0;
        int bestSum=0;
        for(int r=1;r<prices.size();r++){
            sum=prices[r]-prices[l];
           if (prices[r] < prices[l]) {
                l = r; // reset buying day to current day
            }
            
            bestSum=max(sum,bestSum);

        }
        return bestSum;

        
        
    }
};
