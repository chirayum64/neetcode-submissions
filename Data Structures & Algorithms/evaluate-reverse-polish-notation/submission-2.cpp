class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int i=0;
        stack<int>st;
        while(i<tokens.size()){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="/" && tokens[i]!="*"){
                st.push(stoi(tokens[i]));
                i++;
            }
            else if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="/"|| tokens[i]=="*"){
                if(st.empty()==true){
                    return -1;
                }
                else if(tokens[i]=="+"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(a+b);
                    i++;
                }
                else if(tokens[i]=="*"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(a*b);
                    i++;
                }
                 else if(tokens[i]=="-"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(b-a);
                    i++;
                }
                 else if(tokens[i]=="/"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(b/a);
                    i++;
                }    
            }
        }
    return st.top();
    }
};
