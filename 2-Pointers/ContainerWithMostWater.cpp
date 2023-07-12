class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        
        int i=0;
        int j=n-1;

        int mxArea = 0;

        while(i<j) {
            int l = j-i;
            int h = min(height[i], height[j]);
            mxArea = max(mxArea, l*h);

            if(height[i] < height[j]) i++;
            else j--;
        }
        return mxArea;
    }
};
