class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>se;
        int mxcount=0;
        int left=0;
        for(int i=0;i<s.size();i++){
            while(se.count(s[i])!=0){
                se.erase(s[left]);
                left++;
            }
            se.insert(s[i]);
            mxcount=max(mxcount,i-left+1);
        }
    return mxcount;
    }
};
