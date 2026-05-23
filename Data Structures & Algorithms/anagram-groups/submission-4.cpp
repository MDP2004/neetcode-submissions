class Solution {
private:
    string makeKey(string s){
        int arr[26] = {0};
        for (char c : s) arr[c-'a']++;

        string key = to_string(arr[0]);
        for (int i=1 ; i<26 ; i++){
            key += ',' + arr[i];
        }

        return key;

    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> hash;

        for (int i=0 ; i<strs.size() ; i++){
            string key = makeKey(strs[i]);
            hash[key].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for (auto i : hash){
            ans.push_back(i.second);
        }

        return ans;
    }
};
