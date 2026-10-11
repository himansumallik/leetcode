class Solution {
public:
    int findMin(vector<int>& nums) {
        int minval = INT_MAX;

        for(int i: nums){
            minval = min(minval, i);
        }

        return minval;
    }
};