class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> pq;
        vector<vector<int>>ans;
        for(int i=0;i<points.size();i++){
            int a=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            pq.push({a,points[i]});
        }
        int n=points.size()-k;
        while(n!=0){
            pq.pop();
            n--;
        }
        while(k>0){
          ans.push_back(pq.top().second);
          pq.pop();
          k--;
        }
    return ans;
    }
};
