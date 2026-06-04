class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;

        int totalsum = 0;
        for(int i=1; i<=n; i++){
            totalsum += i;
        }

        int sum = 0;
        for(int i: nums){
            sum += i;
        }

        return totalsum - sum;
    }
}