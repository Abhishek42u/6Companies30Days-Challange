class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        map<string,vector<string>>m;
        string p;
        for(int i=0;i<string_list.size();i++){
            p=string_list[i];
            sort(p.begin(),p.end());
            m[p].push_back(string_list[i]);
        }
        
        vector<vector<string>>s;
        for(auto x:m){
            s.push_back(x.second);
        }
        return s;
        //code here
    }
};
