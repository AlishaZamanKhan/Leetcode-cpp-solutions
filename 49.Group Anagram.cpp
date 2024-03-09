class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(int i=0; i<strs.size(); i++){
            string w = strs[i];
            sort(w.begin(), w.end());
            m[w].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto j:m){
            result.push_back(j.second);
        }
        return result;
        
    }
};
