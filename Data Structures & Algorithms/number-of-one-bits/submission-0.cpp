class Solution {
public:
    int hammingWeight(uint32_t n) {
            bitset<64>bits(n);
            return bits.count();
    }
};
