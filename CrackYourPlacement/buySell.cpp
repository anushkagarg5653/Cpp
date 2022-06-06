class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrices = INT_MAX;
        int maxPrices  =0;
        for(int i=0; i<prices.size(); i++){
            minPrices = min(minPrices, prices[i]);
            maxPrices = max(maxPrices, prices[i] - minPrices);
        }
        return maxPrices;
    }
};