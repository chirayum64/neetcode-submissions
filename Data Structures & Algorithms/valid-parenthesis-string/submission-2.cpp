class Solution {
public:
    bool checkValidString(string s) {
        stack<int>open;
        stack<int>star;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else{
                if(open.empty()==false){
                    open.pop();
                }
                else if(star.empty()==false){
                    star.pop();
                }
                else{
                    return false;
                }
            }
        }
        while(open.empty()==false && star.empty()==false){
            if(open.top()>star.top()){
                return false;
            }
            open.pop();
            star.pop();
        }
        if(open.empty()==false ){
            return false;
        }
    return true;
    }
};
