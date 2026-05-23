class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> rightpdct (nums.size());
        int pdct = 1;
        for (int j=nums.size()-1 ; j>=0 ; j--){
            rightpdct[j] = pdct;
            pdct *= nums[j];
        }
        vector<int> ans (nums.size());
        int leftpdct = 1;
        for (int i=0 ; i<nums.size()-1 ; i++){
            ans[i] = leftpdct * rightpdct[i];
            leftpdct *= nums[i];
        }
        ans[nums.size()-1] = leftpdct;
        return ans;
    }
};
