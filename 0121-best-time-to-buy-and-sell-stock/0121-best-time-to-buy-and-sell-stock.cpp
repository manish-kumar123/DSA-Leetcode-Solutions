class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // for Using DP Problem
        
        int x = INT_MAX , y =0;
        for(auto it: prices)
        {
            x = min(it,x);
            y = max(y,it-x);
        }
        return y;
        
        
    }
};