class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    ull two(0),three(0),five(0);
	    vector<ull>v(n);
	    v[0]=1;
	    for(ull i=1;i<n;i++){
	        v[i]=min({2*v[two],3*v[three],5*v[five]});
	        if(v[i]==2*v[two]) two++;
	        if(v[i]==3*v[three]) three++;
	        if(v[i]==5*v[five]) five++;
	    }
	    return v[n-1];
	    // code here
	}
};
