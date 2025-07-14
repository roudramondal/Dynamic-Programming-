int dp[105];
class Solution {
public:
    int solve (int ind,vector<int>&nums)
    {
        // base case
        if (ind>=nums.size())return 0;
        if (dp[ind]!=-1){
           return  dp[ind];
        }
        // function body
        //rob
        int res1=nums[ind]+solve(ind+2,nums);

        // don't rob
        int res2=solve(ind+1,nums);
        int result=max(res1,res2);
        dp[ind]=result;
        return result;
    }
    int rob(vector<int>& nums) {
        for(int i=0;i<nums.size()+2;i++) 
        {
            dp[i]=-1;
        }
        int result=solve(0,nums);
        return result;
    }
};