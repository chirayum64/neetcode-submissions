class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32>bits(n);
        bitset<32>rev;
        for(int i=0;i<bits.size();i++){
            rev[i]=bits[31-i];
        }
        return rev.to_ulong();
    }
};
