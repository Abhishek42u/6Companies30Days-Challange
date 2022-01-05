class Solution {
public:
    int minSubArrayLen(int t, vector<int>&v) {
        int i,j=0,sona=INT_MAX;
        for(i=0;i<v.size();i++){
            t-=v[i];
            while(t+v[j]<=0)
                t+=v[j++];
            sona=(t<=0)?(min(sona,i-j+1)):sona;
        }
        if(sona!=INT_MAX) return sona;
        return 0;
    }
};

