class Solution {
public:
    int uniquePaths(int m, int n) {
        int totalPath = m+n-2;

        int r = n-1;
        double res = 1;

        for(int i = 1; i<=r; i++) {
            res = res*(totalPath - r + i)/i;
        }

        return int(res);
    }
};
