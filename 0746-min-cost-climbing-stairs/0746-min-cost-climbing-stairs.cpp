class Solution {
public:

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        dp[cost.size()]=0;
        dp[cost.size()-1]=cost[cost.size()-1];
        for(int i=cost.size()-2;i>=0;i--){
            dp[i]=min(cost[i]+dp[i+1],cost[i]+dp[i+2]);
        }
        return min(dp[0],dp[1]);
    }
};