class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        if(n==2) return max(nums[0], nums[1]);

        // taking last, not first house (ranges from index 1 to n-1)
        int lprev2 = nums[1];
        int lprev1 = max(nums[1], nums[2]); // FIX 1: Must be max of the first two houses in this range
        for(int i=3; i<n; i++){
            int current = max(nums[i]+lprev2, lprev1);
            lprev2 = lprev1;
            lprev1 = current;
        }

        // taking first, not last house (ranges from index 0 to n-2)
        int fprev2 = nums[0];
        int fprev1 = max(nums[0], nums[1]); // FIX 2: Must be max of the first two houses in this range
        for(int i=2; i<n-1; i++){
            int current = max(nums[i]+fprev2, fprev1);
            fprev2 = fprev1;
            fprev1 = current;
        }

        return max(lprev1, fprev1);
    }
};
