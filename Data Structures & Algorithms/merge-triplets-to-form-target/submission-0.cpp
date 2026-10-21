class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        vector<int>ans;
        int m=triplets.size();
        int n=triplets[0].size();
        int mx1=0;
        int mx2=0;
        int mx3=0;
        for(int i=0;i<m;i++){
            if (triplets[i][0] > target[0] ||
                triplets[i][1] > target[1] ||
                triplets[i][2] > target[2]) {
                continue;
            }
            mx1=max(triplets[i][0],mx1);
            mx2=max(triplets[i][1],mx2);
            mx3=max(triplets[i][2],mx3);
        }
    ans.push_back(mx1);
    ans.push_back(mx2);
    ans.push_back(mx3);
    if(ans==target){
        return true;
    }
    return false;
    }
};
