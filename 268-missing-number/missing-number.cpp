class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int totalsum;
        for(int i=1; i<=n; i++){
            totalsum += i;
        }

        int sum = 0;
        for(int i: nums){
            sum += i;
        }

        return totalsum - sum;
        
    }
};