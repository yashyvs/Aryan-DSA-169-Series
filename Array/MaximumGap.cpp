class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        int n=nums.size();
        if(n < 2) return 0;

        int mxGap = 0;

        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());

        int bucket_size = ceil(double(mx-mn)/(n-1));
        if(bucket_size == 0) return 0;

        vector<pair<int, int>> element(n, {INT_MAX, INT_MIN});

        for(auto it:nums) {
            int bucket = (it-mn)/bucket_size;

            element[bucket].first = min(element[bucket].first, it);
            element[bucket].second = max(element[bucket].second, it);
        }

        int prevMx = element[0].second;

        for(int i=1; i<n; i++) {
            int currMin = element[i].first;
            if(currMin == INT_MAX) continue;
 
            mxGap = max(mxGap, currMin - prevMx);
            prevMx = element[i].second;
        }
        return mxGap;
    }
};
