class Solution {
private:
    bool anagrams(string s1 , string s2){
        if (s1.length() != s2.length()) return false;
        sort (s1.begin() , s1.end());
        sort (s2.begin() , s2.end());

        for (int i=0 ; i<s1.length() ; i++){
            if (s1[i] != s2[i]) return false;
        }
        return true;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<bool> picked(strs.size(),0);

        vector<vector<string>> ans;

        for (int i=0 ; i<strs.size() ; i++){
            vector<string> candidate;
            if (picked[i]) continue;
            candidate.push_back(strs[i]);
            for (int j = i+1 ; j<strs.size() ; j++){
                if (anagrams(strs[i] , strs[j])) {
                    candidate.push_back(strs[j]);
                    picked[j] = true;
                }
            }
            ans.push_back(candidate);
        }

        

        return ans;
    }
};
