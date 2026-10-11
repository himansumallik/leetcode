class Solution {
public:
    int findMin(vector<int>& nums) {
        int minval = INT_MAX;
        for(int i:nums){
            if(i<minval){
                minval = i;
            }
        }

        return minval;
    }
};