class Solution {
public:
    bool isValid(string s) {
        int i=0;
        stack<char>st;
        while(i<s.size()){
            if(s[i]=='['||s[i]=='{'||s[i]=='('){
                st.push(s[i]);
                i++;
            }
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(st.empty()==true){
                    return false;
                }
                else if(s[i]==')' && st.top()=='('){
                    st.pop();
                    i++;
                }
                else if(s[i]=='}' && st.top()=='{'){
                    st.pop();
                    i++;
                }
                else if(s[i]==']' && st.top()=='['){
                    st.pop();
                    i++;
                }
                else{
                    return false;
                }
            }
        }
    if(st.empty()==true){
        return true;
    }
    return false;
    }
};
