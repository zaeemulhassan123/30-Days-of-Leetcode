class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int resultingNum = 0;
        for(int num : nums)
        {
            resultingNum ^= num;
        }

        return resultingNum;
    }
};