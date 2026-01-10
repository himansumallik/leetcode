class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for(auto num : nums){
            m[num]++;
        }
        int n = nums.size();
        for (auto it : m) {
            if (it.second > n / 2) {
                return it.first;
            }
        }

        return -1;
        
    }
};