class Solution {
public:
    int reverse(int x) {
        if(x==0){
            return 0;
        }
        string rev="";
        bool neg=false;
        if(x<0){
            neg=true;
            x=-x;
        }
        if(neg==true){
            rev=rev+"-";
        }
        while(x>0){
            int rem=x%10;
            char c = rem + '0';
            rev.push_back(c);
            x=x/10;
        }
    long long ans=stoll(rev);
    if(ans>=INT_MAX || ans<=INT_MIN){
        return 0;
    }
    return (int)ans;
    }
};
