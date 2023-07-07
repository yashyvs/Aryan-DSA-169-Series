class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int mx = INT_MIN;
        int curr=0;
        for(auto it:nums) {
            curr+=it;
            mx = max(curr, mx);
            if(curr<0) curr=0;
        }
        return mx;
    }
};
