class Solution {
public:
int solve(vector<int> nums,int i,int n,vector<int> &dp)
{
    if(i>n)
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int take=0;
    take=nums[i]+solve(nums,i+2,n,dp);
    int not_take=0+solve(nums,i+1,n,dp);

    return dp[i]= max(take,not_take);
}
int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        vector<int> dp(nums.size(),-1);
        int t1= solve(nums,0,n-2,dp);
        vector<int> dp1(nums.size(),-1);
        int t2= solve(nums,1,n-1,dp1);
        return max(t1,t2);
    }
};