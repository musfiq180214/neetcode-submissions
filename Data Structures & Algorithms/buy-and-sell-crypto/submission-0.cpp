class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int l = prices.size(),i;
        
        int min_price = prices[0],min_idx=0,maxProfit = 0, profit;

        for(i=1;i<l;i++){
            if (prices[i]<min_price){
                min_price = prices[i];
            }
            if (prices[i]>min_price){
                profit = prices[i] - min_price;
                if (profit>maxProfit){
                    maxProfit = profit;
                }
            }
        }
        
        return maxProfit;
    }
};
