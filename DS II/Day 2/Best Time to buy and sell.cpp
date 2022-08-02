class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyDay=0, maxProfit=0, profit;
        for(int i=0 ; i < prices.size(); i++){
            profit = prices[i] - prices[buyDay]; //calculate profit if we buy stocks on buyDay and sell on ith day.
            if(profit<=0) buyDay = i;    //if profit becomes 0 or -ve i.e., ith price is less than or equal to the day we bought, so change buyDay.
            else maxProfit = max( profit, maxProfit );  //store maxProfit.
        }
        return maxProfit;
    }
};