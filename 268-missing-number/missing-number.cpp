class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int totalsum = (n*(n+1))/2;

        int sum = 0;
        for(int i: nums){
            sum += i;
        }

        return totalsum - sum;

        // sort(nums.begin(), nums.end());
        // int missingVal;
        // for(int i=0; i<n; i++){
        //     if(nums[i]!=i){
        //         missingVal = i;
        //         break;
        //     }
        // }
        // return missingVal;
        
    }
};