class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        
        long long totalSum = accumulate(arr.begin(), arr.end(), 0);
        
        if(totalSum%3 != 0) return false;
        
        int i=0;
        long long first = 0; 
        while(i<arr.size()-2) {
            first+=arr[i];
            totalSum-=arr[i];
            i++;
            if(2*first == totalSum) break;
        }

        long long second = 0;
        while(i<arr.size()-1) {
            second+=arr[i];
            totalSum-=arr[i];
            i++;

            if(second == totalSum) return true;
        }
        return false;
    }
};
