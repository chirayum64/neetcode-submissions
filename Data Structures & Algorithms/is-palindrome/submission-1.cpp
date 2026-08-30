class Solution {
public:
    bool isPalindrome(string s) {
       string ans="";
       for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            ans.push_back(tolower(s[i]));
        }
       }
       string rev=ans;
       reverse(ans.begin(),ans.end());
       if(rev==ans){
        return true;
       }

       return false;
    }
};
