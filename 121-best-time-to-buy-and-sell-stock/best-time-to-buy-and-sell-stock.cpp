class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = numeric_limits<int>::max();
        int maxProfit = 0;
        
        for (int price : prices)
        {
            if (price < minPrice)
            {
                minPrice = price;
            }
            else
            {
                 maxProfit = max(maxProfit, price - minPrice);
            }
        }
        
        return maxProfit;
    }
};
