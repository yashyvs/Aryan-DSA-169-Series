class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        
        int i=0;
        while(i<n) {
            int num = abs(nums[i]);
            if(nums[num-1] < 0) {
                ans.push_back(num);
            } 
            else {
                nums[num - 1] *= -1;
            }
            i++;
        }
        
        return ans;
    }
};
