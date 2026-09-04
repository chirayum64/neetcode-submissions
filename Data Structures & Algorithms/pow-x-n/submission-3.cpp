class Solution {
public:
    double myPow(double x, int n) {
        if(x==1){
            return 1;
        }
        if(x==-1){
            if(n%2==0){
                return 1;
            }
            else{
                return -1;
            }
        }
        if(n<=INT_MIN){
            return 0;
        }
        double ans=1;
        if(n<0){
            while(n<0){
                ans=ans*(1/x);
                n++;
            }
        }
        while(n!=0){
            ans=ans*x;
            n--;
        }
    return ans;
    }
};
