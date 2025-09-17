class Solution {
    public int jump(int[] nums) 
    {
        int n=nums.length;
        int[] dp=new int[n+1];
        Arrays.fill(dp,-1);
        return helper(0,dp,nums);
    }
    int helper(int ind, int[] dp, int[] nums) 
    {
        if (ind == nums.length - 1) return 0;
        if (dp[ind] != -1) return dp[ind];

        int sc = Integer.MAX_VALUE;
        for (int i = 1; i <= nums[ind] && ind + i < nums.length; i++) 
        {
            int steps = helper(ind + i, dp, nums);
            if(steps!=Integer.MAX_VALUE)  
            {
                sc=Math.min(sc,steps+1);
            }
        }

        return dp[ind] = sc;
    }
}