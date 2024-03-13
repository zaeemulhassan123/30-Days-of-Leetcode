class Solution {
public:
    int maxProduct(vector<int>& nums) {
               int n = nums.size();
        if (n == 0) return 0;
        
        int maxProductEndingHere = nums[0]; // Initialize max product ending at current index
        int minProductEndingHere = nums[0]; // Initialize min product ending at current index
        int maxProductSoFar = nums[0]; // Initialize max product seen so far
        
        for (int i = 1; i < n; ++i) {
            // Update max and min products ending at current index
            int tempMax = std::max(nums[i], std::max(maxProductEndingHere * nums[i], minProductEndingHere * nums[i]));
            minProductEndingHere = std::min(nums[i], std::min(maxProductEndingHere * nums[i], minProductEndingHere * nums[i]));
            
            // Update max product seen so far
            maxProductSoFar = std::max(maxProductSoFar, tempMax);
            
            // Update max product ending at current index for the next iteration
            maxProductEndingHere = tempMax;
        }
        
        return maxProductSoFar; 
    }
};