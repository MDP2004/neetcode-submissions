class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort (nums.begin() , nums.end());

        set<vector<int>> ans;
        for (int i=0 ; i<nums.size()-2 ; i++){
            int j = i+1 , k = nums.size()-1;
            int target = -nums[i];
            while (j < k){
                int x = nums[j], y = nums[k];
                if (x + y > target) k--;
                else if (x + y < target) j++;
                else {
                    ans.insert({nums[i] , nums[j] , nums[k]});
                    k--;
                    j++;
                }
            }
        }
        vector<vector<int>> finalAns;
        for (auto candidate : ans){
            finalAns.push_back(candidate);
        }
        return finalAns;
    }
};
