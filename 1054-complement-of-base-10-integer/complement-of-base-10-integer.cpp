class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 0, m = n;

        if(m == 0) return 1;

        while(m)
        {
            mask = (mask << 1) | 1;
            m >>= 1;
        }

        int ans = (~n) & mask;

        return ans;
    }
};