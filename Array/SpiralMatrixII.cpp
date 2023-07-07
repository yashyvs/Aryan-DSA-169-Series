class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int> (n, 0));

        int up=0, left=0, down=n-1, right=n-1;
        
        int x=1;

        while(up<=down && left<=right) {
            for(int i=left; i<=right; i++) {
                mat[up][i] = x++;
            }
            up++;

            for(int i=up; i<=down; i++) {
                mat[i][right] = x++;
            }
            right--;

            for(int i=right; i>=left; i--) {
                mat[down][i] = x++;
            }
            down--;

            for(int i=down; i>=up; i--) {
                mat[i][left] = x++;
            }
            left++;
        }
        return mat;
    }
};
