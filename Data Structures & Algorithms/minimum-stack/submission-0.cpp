class MinStack {
public:
    stack<int>st;
    stack<int>minst;
    MinStack() {

    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty()==true){
            minst.push(val);
        }
        else{
            int mn=min(minst.top(),val);
            minst.push(mn);
        }
    }
    
    void pop() {
        st.pop();
        minst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
