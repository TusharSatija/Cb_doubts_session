class Solution {
public:
int solve(int i,int n,int k,vector<int> &slices,vector<vector<int>> &dp)
{
    if(k==0 || i>n)
    {
        return 0;
    }
    if(dp[i][k]!=-1)
    {
        return dp[i][k];
    }
    int take=0;
    take=slices[i]+solve(i+2,n,k-1,slices,dp);
    int not_take=0+solve(i+1,n,k,slices,dp);
    return dp[i][k]=max(take,not_take);
}

    int maxSizeSlices(vector<int>& slices) {
        int n=slices.size();
        int p=n/3+1;
        vector<int> dp(p,-1);
        vector<vector<int>> dp1(n+1,dp);
        int t1=solve(0,n-2,n/3,slices,dp1);
        vector<vector<int>> dp2(n+1,dp);
        int t2=solve(1,n-1,n/3,slices,dp2);
        return max(t1,t2);
    }
};