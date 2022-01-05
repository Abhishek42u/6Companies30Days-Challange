class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long p=1, count=0;
        for(int i=0,j=0;j<n;j++){
            p=p*a[j];
            while(i<j&&p>=k) p=p/a[i++];
            if(p<k)
                count+=j-i+1;
        }
        return count;
    }
};
