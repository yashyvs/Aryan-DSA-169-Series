class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0) return 0;
        
        unordered_set<int> st;
        for(auto it:nums) st.insert(it);
        
        int longest = INT_MIN;
        int seq = 0;
        for(auto it : st) {
            if(st.find(it-1) == st.end()) {
                int seq = 1;
                while(st.find(it+1) != st.end()) {
                    seq++;
                    it+=1;
                }
                longest = max(longest, seq);
            }
        }
        return longest;
    }
};
