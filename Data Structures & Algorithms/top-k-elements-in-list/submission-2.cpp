class Solution {
private:
    static bool comp (pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> hash;

        for (int num : nums) hash[num]++;

        priority_queue <pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> s;

        for (auto p : hash){
            s.push({p.second, p.first});
            if (s.size() > k) s.pop();
        }
        vector<int> ans;
        while (k--){
            ans.push_back(s.top().second);
            s.pop();
        }
        return ans;
    }   

};
