class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int el1 = 0, el2 = 0;

        for(auto it:nums) {
            if(cnt1 == 0 && el2 != it) {
                el1 = it;
                cnt1 = 1;
            }
            else if(cnt2 == 0 && el1 != it) {
                el2 = it;
                cnt2 = 1;
            }
            else if(it == el1) cnt1++;
            else if(it == el2) cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = 0, cnt2 = 0;
        for(auto it:nums) {
            if(it == el1) cnt1++;
            else if(it == el2) cnt2++;
        }

        vector<int> ans;
        if(cnt1 > nums.size()/3) ans.push_back(el1);
        if(cnt2 > nums.size()/3) ans.push_back(el2);

        return ans;    
    }
};
