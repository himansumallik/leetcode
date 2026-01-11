class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> result(len);
        for(int i=0; i<nums.size(); i++){
            result[(i + k) % len] = nums[i];
        }
        nums = result;
    }
};