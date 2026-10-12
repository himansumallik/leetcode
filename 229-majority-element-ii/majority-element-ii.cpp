class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i: nums){
            m[i]++;
        }

        vector<int> v;
        int n = nums.size();

        for(auto a: m){
            if(a.second > n/3){
                v.push_back(a.first);
            }
        }

        return v;
    }
};


