class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
        unordered_map<int, int> mp;
        for(auto it:nums) mp[it]++;

        vector<pair<int, int>> pair;
        for(auto it:mp) pair.push_back({it.second, it.first});

        sort(pair.begin(), pair.end());

        vector<int> ans;
        
        int n=pair.size();
        for(int i=n-1; k>0; i--, k--) {
            ans.push_back(pair[i].second);
        }
        return ans;
    }
};
