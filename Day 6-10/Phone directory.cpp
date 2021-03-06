class Solution {
public:
    vector<vector<string>> displayContacts(int n, string A[], string s) {
        vector<string> contact = removeDuplicates(A, n);
        vector<vector<string>> res;
        res.push_back(contact);
      
        for(int i = 0; i < (int)s.size(); i++) {
            vector<string> curr;
            for(int j = 0; j < (int)res.back().size(); j++) {
                if(res.back()[j][i] == s[i]) curr.push_back(res.back()[j]);
            }
            if(curr.empty()) curr.push_back("0");
            if(i == 0) res.pop_back();
            res.push_back(curr);
        }
        
        return res;
    }
    
    vector<string> removeDuplicates(string contact[], int n) {
        set<string> unqStrings(contact, contact + n);
        return vector<string>(unqStrings.begin(), unqStrings.end());
    }
};
