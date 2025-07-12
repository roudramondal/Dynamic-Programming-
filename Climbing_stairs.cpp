int dp[45];
class Solution {
public:
    int solve(int step,int n){
        // base case
        if (step==n)return 1;
        if (step>n)return 0;

        if (dp[step]!=-1)
        {
            return dp[step];
        }
        // function body
        // if step 1;
        int rev1=solve(step+1,n);
        // if step 2
        int rev2=solve(step+2,n);
        int result=rev1+rev2;
        dp[step]=result;
        return result;

    }
    int climbStairs(int n) {
        for (int i=0;i<n;i++) dp[i]=-1;
        int ans=solve(0,n);
        return ans;
    }
};