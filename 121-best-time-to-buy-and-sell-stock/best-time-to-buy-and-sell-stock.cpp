#include <vector>
#include <climits> // For INT_MAX

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice = INT_MAX; // Initialize minPrice to INT_MAX
        int maxProfit = 0; // Initialize maxProfit to 0
        
        for (int price : prices) {
            // Update minPrice to the minimum price seen so far
            if (price < minPrice) {
                minPrice = price;
            } else {
                // Update maxProfit if selling at current price would yield higher profit
                int currentProfit = price - minPrice;
                if (currentProfit > maxProfit) {
                    maxProfit = currentProfit;
                }
            }
        }
        
        return maxProfit;
    }
};
