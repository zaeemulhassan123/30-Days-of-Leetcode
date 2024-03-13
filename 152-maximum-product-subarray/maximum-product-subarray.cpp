class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        
        int maxProductEndingHere = nums[0];
        int minProductEndingHere = nums[0];
        int maxProductSoFar = nums[0];
        
        for (int i = 1; i < n; ++i)
        {
            int tempMax = std::max(nums[i], std::max(maxProductEndingHere * nums[i], minProductEndingHere * nums[i]));
            minProductEndingHere = std::min(nums[i], std::min(maxProductEndingHere * nums[i], minProductEndingHere * nums[i]));
            
            maxProductSoFar = std::max(maxProductSoFar, tempMax);
            
            maxProductEndingHere = tempMax;
        }
        
        return maxProductSoFar; 
    }
};