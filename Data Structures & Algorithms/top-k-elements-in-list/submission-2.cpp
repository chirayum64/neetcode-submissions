class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<nums.size();i++){
            mp1[nums[i]]++;
        }
        for(auto x:mp1){
            mp2[x.first]=x.second;
        }
        priority_queue<pair<int,int>>pq;
        for(auto x:mp2){
            pq.push({x.second,x.first});
        }
        vector<int>ans;
        while(k!=0){
           ans.push_back(pq.top().second);
           pq.pop();
           k--;
        }
    return ans;
    }
};
