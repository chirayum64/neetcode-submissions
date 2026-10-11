class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_set<char>set;
      int count=0;
      int mxcount=0;
      int j=0;
      for(int i=0;i<s.size();i++){
        while(set.count(s[i])!=0){
            set.erase(s[j]);
            j++;
            count--;
        }
        set.insert(s[i]);
        count++;
        mxcount=max(mxcount,count);
      }
    return mxcount;
    }
};
