class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int totalSum=accumulate(cardPoints.begin(), cardPoints.end(), 0);
        
        int curr = 0;
        for(int i=0; i<n-k; i++) {
            curr+=cardPoints[i];
        }

        int mx = 0;
        mx = max(mx, totalSum-curr);
        int j=n-1;
        for(int i=0; i<k; i++) {
            curr-=cardPoints[i];
            curr+=cardPoints[n-k+i];
            mx = max(mx, totalSum-curr);
        }
        return mx;
    }
};
