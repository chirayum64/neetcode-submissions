class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                temp.push_back(tolower(s[i]));
            }
        }
        int top=0;
        int bot=temp.size()-1;
        while(top<bot){
           if(temp[top]!=temp[bot]){
            return false;
           }
           top++;
           bot--;
        }
    return true;
    }
};
