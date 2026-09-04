class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string st="";
        vector<int>ans;
        for(int i=0;i<digits.size();i++){
            st += to_string(digits[i]);
        }
        long long number=stoll(st);
        long long num=number+1;
        while(num>0){
           int digit=num%10;
           ans.push_back(digit);
           num=num/10;
        }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
