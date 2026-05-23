class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>> nums2 (nums.size());
        for (int i=0 ; i<nums.size() ; i++){
            nums2[i] = {nums[i] , i};
        }
        sort(nums2.begin() , nums2.end());

        int i = 0, j = nums.size()-1;

        while (i < j){
            if (nums2[i].first + nums2[j].first == target) {
                return {min(nums2[i].second,nums2[j].second) , max(nums2[i].second,nums2[j].second)};
            }
            else if (nums2[i].first + nums2[j].first > target) j--;
            else i++;
        }
        return {};
    }
};
