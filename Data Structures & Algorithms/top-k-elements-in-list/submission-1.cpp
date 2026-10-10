class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>temp;
        for(auto x:mp){
            temp.push_back({x.second,x.first});
        }
        sort(temp.begin(),temp.end(),greater<pair<int,int>>());
        int i=0;
        while(k!=0){
            ans.push_back(temp[i].second);
            k--;
            i++;
        }
        return ans;
    }
};
