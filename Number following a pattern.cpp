class Solution{   
public:
    string printMinNumberForPattern(string S){
        int n=S.size(),sum=0,i,j,p=1;
        stack<int>s;
        for(i=0;i<n;i++){
            if(S[i]=='D'){
              s.push(p);
              p++;
            }
            else{
                sum=sum*10+p;
                p++;
                while(!s.empty()){
                    sum=sum*10+s.top();
                    s.pop();
                }
            }
        }
        s.push(p);
        while(!s.empty()){
            sum=sum*10+s.top();
            s.pop();
        }
        return to_string(sum);
        // code here 
    }
};
