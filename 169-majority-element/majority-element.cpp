class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size();

        for(int i: nums){
            m[i]++;
        }

        int maxelement=0;
        int result;

        for(auto x: m){
            if(x.second > n/2){
                maxelement = max(maxelement, x.first);
                result = x.first;
            }
        }

        return result;
    }
};