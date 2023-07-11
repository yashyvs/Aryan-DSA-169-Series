class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int coZeroes = 0;

        for(auto it : nums) {
            if(it == 0) coZeroes++;
            else product*=it;
        }
        vector<int> ans(nums.size(), 0);
        if(coZeroes > 1) return ans;
        else {
            for(int i=0; i<nums.size(); i++) {
                if(nums[i] == 0) {
                    ans[i] = product;
                }
                else {
                    if(coZeroes == 0) ans[i] = product/nums[i];
                    else ans[i] = 0;
                }
            }
        }
        return ans;
    }
};
