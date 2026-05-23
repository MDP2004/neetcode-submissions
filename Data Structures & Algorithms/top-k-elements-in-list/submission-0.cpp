class Solution {
private:
    static bool comp (pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> hash;

        for (int num : nums) hash[num]++;

        priority_queue <pair<int,int> , vector<pair<int,int>> , decltype(&comp)> s(comp);

        for (auto p : hash){
            s.push(p);
        }
        vector<int> ans;
        while (k--){
            ans.push_back(s.top().first);
            s.pop();
        }
        return ans;
    }   

};
