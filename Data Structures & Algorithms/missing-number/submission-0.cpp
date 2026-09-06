class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<=mx;i++){
            if(mp.find(i)==mp.end()){
                return i;
            }
        }
    }
};
