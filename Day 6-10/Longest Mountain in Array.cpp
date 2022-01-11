class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size(),i;
        vector<int>left(n,0),right(n,0);
        for(i=1;i<n;i++)
            if(arr[i]>arr[i-1])
                left[i]=left[i-1]+1;
        for(i=n-2;i>=0;i--)
            if(arr[i]>arr[i+1])
                right[i]=right[i+1]+1;
        
        int m=0;
        for(i=1;i<n-1;i++)
            if(left[i]&&right[i])
                m=max(m,left[i]+right[i]+1);
        return m;    
    }
};
