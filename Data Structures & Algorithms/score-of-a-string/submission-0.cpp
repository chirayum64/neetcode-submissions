class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            int score=abs((s[i+1]+0)-(s[i]+0));
            ans=ans+score;
        }
        return ans;
    }
};