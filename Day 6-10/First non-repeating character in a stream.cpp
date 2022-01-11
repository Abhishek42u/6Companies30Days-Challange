class Solution {	
    public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int>v(26,0);
		    char c=A[0];
		    queue<char>q;
		    for(int i=0;i<A.size();i++){
		        v[A[i]-'a']++;
		        if(v[A[i]-'a']==1){
		            q.push(A[i]);
		        }
		        
		        while(!q.empty()&&v[q.front()-'a']!=1)
		                q.pop();
		        if(q.empty()) A[i]='#';
		        else A[i]=q.front();
		        
		    }
		    return A;
		}
};
