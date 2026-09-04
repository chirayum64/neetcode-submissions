class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(int i=0;i<tasks.size();i++){
            freq[tasks[i]-'A']++;
        }
        int maxfreq=0;
        for(int i=0;i<freq.size();i++){
            maxfreq=max(maxfreq,freq[i]);
        }
        int maxcount=0;
        for(int i=0;i<freq.size();i++){
            if(freq[i]==maxfreq){
                maxcount++;
            }
        }
        int formula=(maxfreq-1)*(n+1)+maxcount;
        int ans=max((int)tasks.size(),formula);
        return ans;
    }
};
